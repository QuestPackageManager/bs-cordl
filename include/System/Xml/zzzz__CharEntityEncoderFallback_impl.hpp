#pragma once
// IWYU pragma private; include "System\Xml\CharEntityEncoderFallback.hpp"
#include "System/Text/zzzz__EncoderFallback_impl.hpp"
#include "System/Xml/zzzz__CharEntityEncoderFallback_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/Xml/zzzz__CharEntityEncoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::CharEntityEncoderFallback::*)()>(&::System::Xml::CharEntityEncoderFallback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61acad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallbackBuffer* (::System::Xml::CharEntityEncoderFallback::*)()>(
    &::System::Xml::CharEntityEncoderFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61acad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { ::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::CharEntityEncoderFallback::*)()>(&::System::Xml::CharEntityEncoderFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61acb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { ::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.set_StartOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::CharEntityEncoderFallback::*)(int32_t)>(&::System::Xml::CharEntityEncoderFallback::set_StartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61acb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { "set_StartOffset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::CharEntityEncoderFallback::*)(::ArrayW<int32_t>, int32_t)>(&::System::Xml::CharEntityEncoderFallback::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61acb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { "Reset", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.CanReplaceAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::CharEntityEncoderFallback::*)(int32_t)>(&::System::Xml::CharEntityEncoderFallback::CanReplaceAt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61acb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { "CanReplaceAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::CharEntityEncoderFallbackBuffer*& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_fallbackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackBuffer;
}
constexpr ::System::Xml::CharEntityEncoderFallbackBuffer* const& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_fallbackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackBuffer;
}
constexpr void System::Xml::CharEntityEncoderFallback::__cordl_internal_set_fallbackBuffer(::System::Xml::CharEntityEncoderFallbackBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackBuffer = value;
}
constexpr ::ArrayW<int32_t>& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_textContentMarks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textContentMarks;
}
constexpr ::ArrayW<int32_t> const& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_textContentMarks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textContentMarks;
}
constexpr void System::Xml::CharEntityEncoderFallback::__cordl_internal_set_textContentMarks(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textContentMarks = value;
}
constexpr int32_t& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_endMarkPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endMarkPos;
}
constexpr int32_t const& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_endMarkPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endMarkPos;
}
constexpr void System::Xml::CharEntityEncoderFallback::__cordl_internal_set_endMarkPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endMarkPos = value;
}
constexpr int32_t& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_curMarkPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curMarkPos;
}
constexpr int32_t const& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_curMarkPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curMarkPos;
}
constexpr void System::Xml::CharEntityEncoderFallback::__cordl_internal_set_curMarkPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curMarkPos = value;
}
constexpr int32_t& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_startOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startOffset;
}
constexpr int32_t const& System::Xml::CharEntityEncoderFallback::__cordl_internal_get_startOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startOffset;
}
constexpr void System::Xml::CharEntityEncoderFallback::__cordl_internal_set_startOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startOffset = value;
}
inline void System::Xml::CharEntityEncoderFallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::EncoderFallbackBuffer* System::Xml::CharEntityEncoderFallback::CreateFallbackBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer*>(this, ___internal_method);
}
inline int32_t System::Xml::CharEntityEncoderFallback::get_MaxCharCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::CharEntityEncoderFallback::set_StartOffset(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { "set_StartOffset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::CharEntityEncoderFallback::Reset(::ArrayW<int32_t> textContentMarks, int32_t endMarkPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { "Reset", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textContentMarks, endMarkPos);
}
inline bool System::Xml::CharEntityEncoderFallback::CanReplaceAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallback*>(), { "CanReplaceAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline ::System::Xml::CharEntityEncoderFallback* System::Xml::CharEntityEncoderFallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::CharEntityEncoderFallback*>());
}
// Ctor Parameters []
constexpr ::System::Xml::CharEntityEncoderFallback::CharEntityEncoderFallback() {}
