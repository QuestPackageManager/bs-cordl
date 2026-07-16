#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextStyle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyle.get_hashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextStyle::*)()>(&::UnityEngine::TextCore::Text::TextStyle::get_hashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfed60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { "get_hashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyle.get_styleOpeningTagArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::UnityEngine::TextCore::Text::TextStyle::*)()>(&::UnityEngine::TextCore::Text::TextStyle::get_styleOpeningTagArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfed68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { "get_styleOpeningTagArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyle.get_styleClosingTagArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::UnityEngine::TextCore::Text::TextStyle::*)()>(&::UnityEngine::TextCore::Text::TextStyle::get_styleClosingTagArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfed70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { "get_styleClosingTagArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextStyle::*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::TextCore::Text::TextStyle::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bfed78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyle.RefreshStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextStyle::*)()>(&::UnityEngine::TextCore::Text::TextStyle::RefreshStyle)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6bfedb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { "RefreshStyle", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::TextCore::Text::TextStyle::__cordl_internal_set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_HashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashCode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_HashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashCode;
}
constexpr void UnityEngine::TextCore::Text::TextStyle::__cordl_internal_set_m_HashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HashCode = value;
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_OpeningDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpeningDefinition;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_OpeningDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpeningDefinition;
}
constexpr void UnityEngine::TextCore::Text::TextStyle::__cordl_internal_set_m_OpeningDefinition(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpeningDefinition = value;
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_ClosingDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClosingDefinition;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_ClosingDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClosingDefinition;
}
constexpr void UnityEngine::TextCore::Text::TextStyle::__cordl_internal_set_m_ClosingDefinition(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClosingDefinition = value;
}
constexpr ::ArrayW<uint32_t>& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_OpeningTagArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpeningTagArray;
}
constexpr ::ArrayW<uint32_t> const& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_OpeningTagArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpeningTagArray;
}
constexpr void UnityEngine::TextCore::Text::TextStyle::__cordl_internal_set_m_OpeningTagArray(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpeningTagArray = value;
}
constexpr ::ArrayW<uint32_t>& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_ClosingTagArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClosingTagArray;
}
constexpr ::ArrayW<uint32_t> const& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_ClosingTagArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClosingTagArray;
}
constexpr void UnityEngine::TextCore::Text::TextStyle::__cordl_internal_set_m_ClosingTagArray(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClosingTagArray = value;
}
constexpr ::ArrayW<uint32_t>& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_OpeningTagUnicodeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpeningTagUnicodeArray;
}
constexpr ::ArrayW<uint32_t> const& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_OpeningTagUnicodeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpeningTagUnicodeArray;
}
constexpr void UnityEngine::TextCore::Text::TextStyle::__cordl_internal_set_m_OpeningTagUnicodeArray(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpeningTagUnicodeArray = value;
}
constexpr ::ArrayW<uint32_t>& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_ClosingTagUnicodeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClosingTagUnicodeArray;
}
constexpr ::ArrayW<uint32_t> const& UnityEngine::TextCore::Text::TextStyle::__cordl_internal_get_m_ClosingTagUnicodeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClosingTagUnicodeArray;
}
constexpr void UnityEngine::TextCore::Text::TextStyle::__cordl_internal_set_m_ClosingTagUnicodeArray(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClosingTagUnicodeArray = value;
}
inline void UnityEngine::TextCore::Text::TextStyle::setStaticF_k_NormalStyle(::UnityEngine::TextCore::Text::TextStyle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::TextStyle*, "k_NormalStyle", ::UnityEngine::TextCore::Text::TextStyle*>(
      std::forward<::UnityEngine::TextCore::Text::TextStyle*>(value));
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::Text::TextStyle::getStaticF_k_NormalStyle() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::TextStyle*, "k_NormalStyle", ::UnityEngine::TextCore::Text::TextStyle*>();
}
inline int32_t UnityEngine::TextCore::Text::TextStyle::get_hashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { "get_hashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint32_t> UnityEngine::TextCore::Text::TextStyle::get_styleOpeningTagArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { "get_styleOpeningTagArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(this, ___internal_method);
}
inline ::ArrayW<uint32_t> UnityEngine::TextCore::Text::TextStyle::get_styleClosingTagArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { "get_styleClosingTagArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextStyle::_ctor(::StringW styleName, ::StringW styleOpeningDefinition, ::StringW styleClosingDefinition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, styleName, styleOpeningDefinition, styleClosingDefinition);
}
inline void UnityEngine::TextCore::Text::TextStyle::RefreshStyle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyle*>(), { "RefreshStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::Text::TextStyle::New_ctor(::StringW styleName, ::StringW styleOpeningDefinition, ::StringW styleClosingDefinition) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextStyle*>(styleName, styleOpeningDefinition, styleClosingDefinition));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextStyle::TextStyle() {}
