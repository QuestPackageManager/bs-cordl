#pragma once
// IWYU pragma private; include "System/Security/Util/TokenizerStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__TokenizerStream_def.hpp"
#include "System/Security/Util/zzzz__TokenizerShortBlock_def.hpp"
#include "System/Security/Util/zzzz__TokenizerStringBlock_def.hpp"
//  Writing Method size for method: ::System::Security::Util::TokenizerStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::TokenizerStream::*)()>(&::System::Security::Util::TokenizerStream::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5af1540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.AddToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::TokenizerStream::*)(int16_t)>(&::System::Security::Util::TokenizerStream::AddToken)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5af1888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "AddToken", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.AddString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::TokenizerStream::*)(::StringW)>(&::System::Security::Util::TokenizerStream::AddString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5af198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "AddString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::TokenizerStream::*)()>(&::System::Security::Util::TokenizerStream::Reset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5af15d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.GetNextFullToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Security::Util::TokenizerStream::*)()>(&::System::Security::Util::TokenizerStream::GetNextFullToken)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5af15f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GetNextFullToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.GetNextToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Security::Util::TokenizerStream::*)()>(&::System::Security::Util::TokenizerStream::GetNextToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af056c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GetNextToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.GetNextString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Util::TokenizerStream::*)()>(&::System::Security::Util::TokenizerStream::GetNextString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5af05f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GetNextString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.ThrowAwayNextString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::TokenizerStream::*)()>(&::System::Security::Util::TokenizerStream::ThrowAwayNextString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af0580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "ThrowAwayNextString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.TagLastToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::TokenizerStream::*)(int16_t)>(&::System::Security::Util::TokenizerStream::TagLastToken)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5af0584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "TagLastToken", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.GetTokenCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Util::TokenizerStream::*)()>(&::System::Security::Util::TokenizerStream::GetTokenCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af1d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GetTokenCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::TokenizerStream.GoToPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::TokenizerStream::*)(int32_t)>(&::System::Security::Util::TokenizerStream::GoToPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5af0fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GoToPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Util::TokenizerStream::__cordl_internal_get_m_countTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_countTokens;
}
constexpr int32_t const& System::Security::Util::TokenizerStream::__cordl_internal_get_m_countTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_countTokens;
}
constexpr void System::Security::Util::TokenizerStream::__cordl_internal_set_m_countTokens(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_countTokens = value;
}
constexpr ::System::Security::Util::TokenizerShortBlock*& System::Security::Util::TokenizerStream::__cordl_internal_get_m_headTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_headTokens;
}
constexpr ::System::Security::Util::TokenizerShortBlock* const& System::Security::Util::TokenizerStream::__cordl_internal_get_m_headTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_headTokens;
}
constexpr void System::Security::Util::TokenizerStream::__cordl_internal_set_m_headTokens(::System::Security::Util::TokenizerShortBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_headTokens = value;
}
constexpr ::System::Security::Util::TokenizerShortBlock*& System::Security::Util::TokenizerStream::__cordl_internal_get_m_lastTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lastTokens;
}
constexpr ::System::Security::Util::TokenizerShortBlock* const& System::Security::Util::TokenizerStream::__cordl_internal_get_m_lastTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lastTokens;
}
constexpr void System::Security::Util::TokenizerStream::__cordl_internal_set_m_lastTokens(::System::Security::Util::TokenizerShortBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_lastTokens = value;
}
constexpr ::System::Security::Util::TokenizerShortBlock*& System::Security::Util::TokenizerStream::__cordl_internal_get_m_currentTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentTokens;
}
constexpr ::System::Security::Util::TokenizerShortBlock* const& System::Security::Util::TokenizerStream::__cordl_internal_get_m_currentTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentTokens;
}
constexpr void System::Security::Util::TokenizerStream::__cordl_internal_set_m_currentTokens(::System::Security::Util::TokenizerShortBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentTokens = value;
}
constexpr int32_t& System::Security::Util::TokenizerStream::__cordl_internal_get_m_indexTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_indexTokens;
}
constexpr int32_t const& System::Security::Util::TokenizerStream::__cordl_internal_get_m_indexTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_indexTokens;
}
constexpr void System::Security::Util::TokenizerStream::__cordl_internal_set_m_indexTokens(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_indexTokens = value;
}
constexpr ::System::Security::Util::TokenizerStringBlock*& System::Security::Util::TokenizerStream::__cordl_internal_get_m_headStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_headStrings;
}
constexpr ::System::Security::Util::TokenizerStringBlock* const& System::Security::Util::TokenizerStream::__cordl_internal_get_m_headStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_headStrings;
}
constexpr void System::Security::Util::TokenizerStream::__cordl_internal_set_m_headStrings(::System::Security::Util::TokenizerStringBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_headStrings = value;
}
constexpr ::System::Security::Util::TokenizerStringBlock*& System::Security::Util::TokenizerStream::__cordl_internal_get_m_currentStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentStrings;
}
constexpr ::System::Security::Util::TokenizerStringBlock* const& System::Security::Util::TokenizerStream::__cordl_internal_get_m_currentStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentStrings;
}
constexpr void System::Security::Util::TokenizerStream::__cordl_internal_set_m_currentStrings(::System::Security::Util::TokenizerStringBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentStrings = value;
}
constexpr int32_t& System::Security::Util::TokenizerStream::__cordl_internal_get_m_indexStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_indexStrings;
}
constexpr int32_t const& System::Security::Util::TokenizerStream::__cordl_internal_get_m_indexStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_indexStrings;
}
constexpr void System::Security::Util::TokenizerStream::__cordl_internal_set_m_indexStrings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_indexStrings = value;
}
inline void System::Security::Util::TokenizerStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Util::TokenizerStream::AddToken(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "AddToken", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void System::Security::Util::TokenizerStream::AddString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "AddString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline void System::Security::Util::TokenizerStream::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int16_t System::Security::Util::TokenizerStream::GetNextFullToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GetNextFullToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline int16_t System::Security::Util::TokenizerStream::GetNextToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GetNextToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline ::StringW System::Security::Util::TokenizerStream::GetNextString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GetNextString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Util::TokenizerStream::ThrowAwayNextString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "ThrowAwayNextString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Util::TokenizerStream::TagLastToken(int16_t tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "TagLastToken", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline int32_t System::Security::Util::TokenizerStream::GetTokenCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GetTokenCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Util::TokenizerStream::GoToPosition(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerStream*>(), { "GoToPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline ::System::Security::Util::TokenizerStream* System::Security::Util::TokenizerStream::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Util::TokenizerStream*>());
}
// Ctor Parameters []
constexpr ::System::Security::Util::TokenizerStream::TokenizerStream() {}
