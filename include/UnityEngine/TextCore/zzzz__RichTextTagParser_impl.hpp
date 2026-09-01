#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\RichTextTagParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_def.hpp"
#include "UnityEngine/TextCore/zzzz__TextSpan_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType::RichTextTagParser_TagType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType::RichTextTagParser_TagType() {}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Hyperlink{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Align{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::AllCaps{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Alpha{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Bold{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Br{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Color{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::CSpace{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Font{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::FontWeight{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Italic{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Indent{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::LineHeight{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::LineIndent{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Link{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Lowercase{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Mark{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Mspace{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::NoBr{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::NoParse{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Strikethrough{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Size{ static_cast<int32_t>(0x15) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::SmallCaps{ static_cast<int32_t>(0x16) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Space{ static_cast<int32_t>(0x17) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Sprite{ static_cast<int32_t>(0x18) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Style{ static_cast<int32_t>(0x19) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Subscript{ static_cast<int32_t>(0x1a) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Superscript{ static_cast<int32_t>(0x1b) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Underline{ static_cast<int32_t>(0x1c) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Uppercase{ static_cast<int32_t>(0x1d) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Unknown{ static_cast<int32_t>(0x1e) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType::RichTextTagParser_TagValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType::RichTextTagParser_TagValueType() {}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::NumericalValue{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::StringValue{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::ColorValue{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType::RichTextTagParser_TagUnitType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType::RichTextTagParser_TagUnitType() {}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType UnityEngine::TextCore::RichTextTagParser_TagUnitType::Pixels{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType UnityEngine::TextCore::RichTextTagParser_TagUnitType::FontUnits{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType UnityEngine::TextCore::RichTextTagParser_TagUnitType::Percentage{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.get_EqualityContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6bc567c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)(
    ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW, ::UnityEngine::TextCore::RichTextTagParser_TagValueType, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bc566c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagType>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagValueType>(), ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagUnitType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6bc56dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.PrintMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)(::System::Text::StringBuilder*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::PrintMembers)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6bc57c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6bc599c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)(::System::Object*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bc5b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::Equals)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6bc5bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType& UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_get_TagType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TagType;
}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType const& UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_get_TagType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TagType;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_set_TagType(::UnityEngine::TextCore::RichTextTagParser_TagType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TagType = value;
}
constexpr ::StringW& UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType& UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_get_valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType const& UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_get_valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_set_valueType(::UnityEngine::TextCore::RichTextTagParser_TagValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueType = value;
}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType& UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_get_unitType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitType;
}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const& UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_get_unitType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitType;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::__cordl_internal_set_unitType(::UnityEngine::TextCore::RichTextTagParser_TagUnitType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unitType = value;
}
inline ::System::Type* UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::get_EqualityContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::_ctor(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, ::StringW name,
                                                                        ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType,
                                                                        ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagType>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagValueType>(), ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagUnitType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagType, name, valueType, unitType);
}
inline ::StringW UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::PrintMembers(::System::Text::StringBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, builder);
}
inline int32_t UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::Equals(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::New_ctor(::UnityEngine::TextCore::RichTextTagParser_TagType tagType,
                                                                                                                              ::StringW name,
                                                                                                                              ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType,
                                                                                                                              ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(tagType, name, valueType, unitType));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>"
constexpr UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::operator ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*
UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_TagTypeInfo__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::RichTextTagParser_TagTypeInfo() {}
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_EqualityContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6bc5d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::UnityEngine::Color)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bc36c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::StringW)>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bc36d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_StringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::get_StringValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6bc4870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_StringValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_NumericalValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::get_NumericalValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6bc48d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_NumericalValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_ColorValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_ColorValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6bc480c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_ColorValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6bc5db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.PrintMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::System::Text::StringBuilder*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::PrintMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc5e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::GetHashCode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6bc5ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::System::Object*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bc6034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::UnityEngine::TextCore::RichTextTagParser_TagValue*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::Equals)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6bc60c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_type(::UnityEngine::TextCore::RichTextTagParser_TagValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_stringValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stringValue;
}
constexpr ::StringW const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_stringValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stringValue;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_m_stringValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stringValue = value;
}
constexpr float_t& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_numericalValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_numericalValue;
}
constexpr float_t const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_numericalValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_numericalValue;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_m_numericalValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_numericalValue = value;
}
constexpr ::UnityEngine::Color& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_colorValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_colorValue;
}
constexpr ::UnityEngine::Color const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_colorValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_colorValue;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_m_colorValue(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_colorValue = value;
}
inline ::System::Type* UnityEngine::TextCore::RichTextTagParser_TagValue::get_EqualityContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::RichTextTagParser_TagValue::get_StringValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_StringValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t UnityEngine::TextCore::RichTextTagParser_TagValue::get_NumericalValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_NumericalValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::TextCore::RichTextTagParser_TagValue::get_ColorValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_ColorValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextCore::RichTextTagParser_TagValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagValue::PrintMembers(::System::Text::StringBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, builder);
}
inline int32_t UnityEngine::TextCore::RichTextTagParser_TagValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagValue::Equals(::UnityEngine::TextCore::RichTextTagParser_TagValue* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(::UnityEngine::Color value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value));
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>"
constexpr UnityEngine::TextCore::RichTextTagParser_TagValue::operator ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>*
UnityEngine::TextCore::RichTextTagParser_TagValue::i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_TagValue__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValue::RichTextTagParser_TagValue() {}
// Ctor Parameters [CppParam { name: "tagType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagType", modifiers: "", def_value: Some("{}") }, CppParam { name: "isClosing", ty: "bool", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "value", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_Tag::RichTextTagParser_Tag(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, bool isClosing, int32_t start, int32_t end,
                                                                                ::UnityEngine::TextCore::RichTextTagParser_TagValue* value) noexcept {
  this->tagType = tagType;
  this->isClosing = isClosing;
  this->start = start;
  this->end = end;
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_Tag::RichTextTagParser_Tag() {}
// Ctor Parameters [CppParam { name: "tags", ty: "::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_Segment::RichTextTagParser_Segment(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags, int32_t start,
                                                                                        int32_t end) noexcept {
  this->tags = tags;
  this->start = start;
  this->end = end;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_Segment::RichTextTagParser_Segment() {}
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.get_EqualityContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6bc6264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)(::StringW, int32_t)>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bc36b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)()>(&::UnityEngine::TextCore::RichTextTagParser_ParseError::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6bc62c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.PrintMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)(::System::Text::StringBuilder*)>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::PrintMembers)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6bc63b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)()>(&::UnityEngine::TextCore::RichTextTagParser_ParseError::GetHashCode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6bc647c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)(::System::Object*)>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bc6580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)(::UnityEngine::TextCore::RichTextTagParser_ParseError*)>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::Equals)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6bc6614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 7 }));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::TextCore::RichTextTagParser_ParseError::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr int32_t const& UnityEngine::TextCore::RichTextTagParser_ParseError::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_ParseError::__cordl_internal_set_position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::StringW& UnityEngine::TextCore::RichTextTagParser_ParseError::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& UnityEngine::TextCore::RichTextTagParser_ParseError::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_ParseError::__cordl_internal_set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___message = value;
}
inline ::System::Type* UnityEngine::TextCore::RichTextTagParser_ParseError::get_EqualityContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::RichTextTagParser_ParseError::_ctor(::StringW message, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, position);
}
inline ::StringW UnityEngine::TextCore::RichTextTagParser_ParseError::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_ParseError::PrintMembers(::System::Text::StringBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, builder);
}
inline int32_t UnityEngine::TextCore::RichTextTagParser_ParseError::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_ParseError::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::TextCore::RichTextTagParser_ParseError::Equals(::UnityEngine::TextCore::RichTextTagParser_ParseError* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::UnityEngine::TextCore::RichTextTagParser_ParseError* UnityEngine::TextCore::RichTextTagParser_ParseError::New_ctor(::StringW message, int32_t position) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(message, position));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>"
constexpr UnityEngine::TextCore::RichTextTagParser_ParseError::operator ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*
UnityEngine::TextCore::RichTextTagParser_ParseError::i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_ParseError__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_ParseError::RichTextTagParser_ParseError() {}
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.tagMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::StringW)>(&::UnityEngine::TextCore::RichTextTagParser::tagMatch)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6bc26e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                                                           { "tagMatch", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.SpanToEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagType>, ::by_ref<::StringW>,
                                                                ::by_ref<::System::ReadOnlySpan_1<char16_t>>)>(&::UnityEngine::TextCore::RichTextTagParser::SpanToEnum)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6bc2884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                             { "SpanToEnum",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagType>>(),
                                                                 ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.FindTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::TextCore::RichTextTagParser_Tag>* (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*)>(
    &::UnityEngine::TextCore::RichTextTagParser::FindTags)> {
  constexpr static std::size_t size = 0xbb0;
  constexpr static std::size_t addrs = 0x6bc2b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                            { "FindTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.PickResultingTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* (*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*, ::StringW,
                                                                                                int32_t, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*)>(
    &::UnityEngine::TextCore::RichTextTagParser::PickResultingTags)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x6bc36e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                { "PickResultingTags",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.GenerateSegments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment> (*)(
    ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*)>(&::UnityEngine::TextCore::RichTextTagParser::GenerateSegments)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6bc3f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                            { "GenerateSegments", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ApplyStateToSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*,
                                                                ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment>)>(&::UnityEngine::TextCore::RichTextTagParser::ApplyStateToSegment)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6bc41d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                             { "ApplyStateToSegment",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.AddLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(
    ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*)>(&::UnityEngine::TextCore::RichTextTagParser::AddLink)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6bc42a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                            { "AddLink",
                              {},
                              { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagType>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.CreateTextSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::TextSpan (*)(
    ::UnityEngine::TextCore::RichTextTagParser_Segment, ::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*, ::UnityEngine::Color)>(
    &::UnityEngine::TextCore::RichTextTagParser::CreateTextSpan)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x6bc4470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                         { "CreateTextSpan",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_Segment>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(),
                                             ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.CreateTextGenerationSettingsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>,
                                                                ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*,
                                                                ::UnityEngine::Color)>(&::UnityEngine::TextCore::RichTextTagParser::CreateTextGenerationSettingsArray)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6bc4930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                         { "CreateTextGenerationSettingsArray",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(),
                                             ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_TagsInfo(::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>, "TagsInfo", ::UnityEngine::TextCore::RichTextTagParser*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*> UnityEngine::TextCore::RichTextTagParser::getStaticF_TagsInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>, "TagsInfo", ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline bool UnityEngine::TextCore::RichTextTagParser::tagMatch(::System::ReadOnlySpan_1<char16_t> tagCandidate, ::StringW tagName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                                                         { "tagMatch", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tagCandidate, tagName);
}
inline bool UnityEngine::TextCore::RichTextTagParser::SpanToEnum(::System::ReadOnlySpan_1<char16_t> tagCandidate, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagType> tagType,
                                                                 ::by_ref<::StringW> error, ::by_ref<::System::ReadOnlySpan_1<char16_t>> attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                           { "SpanToEnum",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagType>>(),
                                                               ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tagCandidate, tagType, error, attribute);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
UnityEngine::TextCore::RichTextTagParser::FindTags(::StringW inputStr, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>* errors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                          { "FindTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>(nullptr, ___internal_method, inputStr, errors);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
UnityEngine::TextCore::RichTextTagParser::PickResultingTags(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* allTags, ::StringW input, int32_t atPosition,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* applicableTags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                              { "PickResultingTags",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>(nullptr, ___internal_method, allTags, input, atPosition,
                                                                                                                                      applicableTags);
}
inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment>
UnityEngine::TextCore::RichTextTagParser::GenerateSegments(::StringW input, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                          { "GenerateSegments", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment>>(nullptr, ___internal_method, input, tags);
}
inline void UnityEngine::TextCore::RichTextTagParser::ApplyStateToSegment(::StringW input, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags,
                                                                          ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment> segments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                           { "ApplyStateToSegment",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, tags, segments);
}
inline int32_t
UnityEngine::TextCore::RichTextTagParser::AddLink(::UnityEngine::TextCore::RichTextTagParser_TagType type, ::StringW value,
                                                  ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                          { "AddLink",
                            {},
                            { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagType>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type, value, links);
}
inline ::UnityEngine::TextCore::TextSpan
UnityEngine::TextCore::RichTextTagParser::CreateTextSpan(::UnityEngine::TextCore::RichTextTagParser_Segment segment, ::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
                                                         ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links,
                                                         ::UnityEngine::Color hyperlinkColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                       { "CreateTextSpan",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_Segment>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(),
                                           ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::TextSpan>(nullptr, ___internal_method, segment, tgs, links, hyperlinkColor);
}
inline void UnityEngine::TextCore::RichTextTagParser::CreateTextGenerationSettingsArray(
    ::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links, ::UnityEngine::Color hyperlinkColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                       { "CreateTextGenerationSettingsArray",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(),
                                           ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tgs, links, hyperlinkColor);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser::RichTextTagParser() {}
