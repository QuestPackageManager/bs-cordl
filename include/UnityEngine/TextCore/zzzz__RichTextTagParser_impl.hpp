#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_def.hpp"
#include "UnityEngine/TextCore/zzzz__TextSpan_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Gradient{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Italic{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Indent{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::LineHeight{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::LineIndent{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Link{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Lowercase{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Margin{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::MarginLeft{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::MarginRight{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Mark{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Mspace{ static_cast<int32_t>(0x15) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::NoBr{ static_cast<int32_t>(0x16) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::NoParse{ static_cast<int32_t>(0x17) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Strikethrough{ static_cast<int32_t>(0x18) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Size{ static_cast<int32_t>(0x19) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::SmallCaps{ static_cast<int32_t>(0x1a) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Space{ static_cast<int32_t>(0x1b) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Sprite{ static_cast<int32_t>(0x1c) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Style{ static_cast<int32_t>(0x1d) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Subscript{ static_cast<int32_t>(0x1e) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Superscript{ static_cast<int32_t>(0x1f) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Underline{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Uppercase{ static_cast<int32_t>(0x21) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::VOffset{ static_cast<int32_t>(0x22) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Width{ static_cast<int32_t>(0x23) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Rotate{ static_cast<int32_t>(0x24) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Pos{ static_cast<int32_t>(0x25) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Material{ static_cast<int32_t>(0x26) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Page{ static_cast<int32_t>(0x27) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Action{ static_cast<int32_t>(0x28) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Cr{ static_cast<int32_t>(0x29) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Zwsp{ static_cast<int32_t>(0x2a) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Zwj{ static_cast<int32_t>(0x2b) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Nbsp{ static_cast<int32_t>(0x2c) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Shy{ static_cast<int32_t>(0x2d) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType UnityEngine::TextCore::RichTextTagParser_TagType::Unknown{ static_cast<int32_t>(0x2e) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID::RichTextTagParser_ValueID(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID::RichTextTagParser_ValueID() {}
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID UnityEngine::TextCore::RichTextTagParser_ValueID::Color{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID UnityEngine::TextCore::RichTextTagParser_ValueID::Padding{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID UnityEngine::TextCore::RichTextTagParser_ValueID::AssetID{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID UnityEngine::TextCore::RichTextTagParser_ValueID::GlyphMetrics{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID UnityEngine::TextCore::RichTextTagParser_ValueID::Scale{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID UnityEngine::TextCore::RichTextTagParser_ValueID::Tint{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID UnityEngine::TextCore::RichTextTagParser_ValueID::SpriteColor{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_ValueID UnityEngine::TextCore::RichTextTagParser_ValueID::Gradient{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType::RichTextTagParser_TagValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType::RichTextTagParser_TagValueType() {}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::NumericalValue{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::StringValue{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::ColorValue{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::Vector4Value{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::GlyphMetricsValue{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType UnityEngine::TextCore::RichTextTagParser_TagValueType::BoolValue{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType::RichTextTagParser_TagUnitType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType::RichTextTagParser_TagUnitType() {}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType UnityEngine::TextCore::RichTextTagParser_TagUnitType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType UnityEngine::TextCore::RichTextTagParser_TagUnitType::Pixels{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType UnityEngine::TextCore::RichTextTagParser_TagUnitType::FontUnits{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType UnityEngine::TextCore::RichTextTagParser_TagUnitType::Percentage{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.get_EqualityContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x702b018;

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
  constexpr static std::size_t addrs = 0x702b008;

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
  constexpr static std::size_t addrs = 0x702b078;

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
  constexpr static std::size_t addrs = 0x702b164;

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
  constexpr static std::size_t addrs = 0x702b338;

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
  constexpr static std::size_t addrs = 0x702b4c4;

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
  constexpr static std::size_t addrs = 0x702b558;

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
  constexpr static std::size_t addrs = 0x702b6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(float_t, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType,
                                                                                                                     ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x70228fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagUnitType>(),
                                                                                               ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(
    ::UnityEngine::Color, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>)>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7022710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(
    ::StringW, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>)>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7022fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(
    ::UnityEngine::Vector4, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>)>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7022ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(
    ::UnityEngine::TextCore::GlyphMetrics, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>)>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x7023b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(bool, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7023b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_StringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::get_StringValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70293d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_StringValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_NumericalValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::get_NumericalValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7029304;

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
  constexpr static std::size_t addrs = 0x70292a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_ColorValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_Vector4Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_Vector4Value)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x702936c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_Vector4Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_GlyphMetricsValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::GlyphMetrics (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_GlyphMetricsValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7029430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_GlyphMetricsValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_BoolValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::get_BoolValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x702949c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_BoolValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7029364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_ID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x702b74c;

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
  constexpr static std::size_t addrs = 0x702b838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextCore::RichTextTagParser_TagValue*, ::UnityEngine::TextCore::RichTextTagParser_TagValue*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70270c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(&::UnityEngine::TextCore::RichTextTagParser_TagValue::GetHashCode)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x702b840;

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
  constexpr static std::size_t addrs = 0x702bb48;

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
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x702bbdc;

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
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_unit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unit;
}
constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_unit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unit;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_unit(::UnityEngine::TextCore::RichTextTagParser_TagUnitType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unit = value;
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
constexpr ::UnityEngine::Vector4& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_vector4Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_vector4Value;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_vector4Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_vector4Value;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_m_vector4Value(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_vector4Value = value;
}
constexpr ::UnityEngine::TextCore::GlyphMetrics& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_glyphMetricsValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glyphMetricsValue;
}
constexpr ::UnityEngine::TextCore::GlyphMetrics const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_glyphMetricsValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glyphMetricsValue;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_m_glyphMetricsValue(::UnityEngine::TextCore::GlyphMetrics value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_glyphMetricsValue = value;
}
constexpr bool& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_boolValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_boolValue;
}
constexpr bool const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_boolValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_boolValue;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_m_boolValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_boolValue = value;
}
constexpr ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ID;
}
constexpr ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> const& UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_get_m_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ID;
}
constexpr void UnityEngine::TextCore::RichTextTagParser_TagValue::__cordl_internal_set_m_ID(::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ID = value;
}
inline ::System::Type* UnityEngine::TextCore::RichTextTagParser_TagValue::get_EqualityContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(float_t value, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType tagUnitType,
                                                                     ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagUnitType>(),
                                                                                             ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, tagUnitType, id);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(::UnityEngine::Color value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, id);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(::StringW value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, id);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(::UnityEngine::Vector4 value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, id);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(::UnityEngine::TextCore::GlyphMetrics value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, id);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(bool value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, id);
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
inline ::UnityEngine::Vector4 UnityEngine::TextCore::RichTextTagParser_TagValue::get_Vector4Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_Vector4Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::GlyphMetrics UnityEngine::TextCore::RichTextTagParser_TagValue::get_GlyphMetricsValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_GlyphMetricsValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::GlyphMetrics>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagValue::get_BoolValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_BoolValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> UnityEngine::TextCore::RichTextTagParser_TagValue::get_ID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), { "get_ID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>>(this, ___internal_method);
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
inline bool UnityEngine::TextCore::RichTextTagParser_TagValue::op_Equality(::UnityEngine::TextCore::RichTextTagParser_TagValue* left, ::UnityEngine::TextCore::RichTextTagParser_TagValue* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(),
                          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(), ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
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
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(float_t value,
                                                                                                                        ::UnityEngine::TextCore::RichTextTagParser_TagUnitType tagUnitType,
                                                                                                                        ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value, tagUnitType, id));
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(::UnityEngine::Color value,
                                                                                                                        ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value, id));
}
/// @brief [NullableContext(1)]
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(::StringW value,
                                                                                                                        ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value, id));
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(::UnityEngine::Vector4 value,
                                                                                                                        ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value, id));
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(::UnityEngine::TextCore::GlyphMetrics value,
                                                                                                                        ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value, id));
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(bool value,
                                                                                                                        ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value, id));
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
// Ctor Parameters [CppParam { name: "tagType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isClosing", ty:
// "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "end", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "value2", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value3", ty:
// "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value4", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value5", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "nestingLevel", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::RichTextTagParser_Tag::RichTextTagParser_Tag(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, bool isClosing, int32_t start, int32_t end,
                                                                                ::UnityEngine::TextCore::RichTextTagParser_TagValue* value, ::UnityEngine::TextCore::RichTextTagParser_TagValue* value2,
                                                                                ::UnityEngine::TextCore::RichTextTagParser_TagValue* value3,
                                                                                ::UnityEngine::TextCore::RichTextTagParser_TagValue* value4,
                                                                                ::UnityEngine::TextCore::RichTextTagParser_TagValue* value5, int8_t nestingLevel) noexcept {
  this->tagType = tagType;
  this->isClosing = isClosing;
  this->start = start;
  this->end = end;
  this->value = value;
  this->value2 = value2;
  this->value3 = value3;
  this->value4 = value4;
  this->value5 = value5;
  this->nestingLevel = nestingLevel;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser_Tag::RichTextTagParser_Tag() {}
// Ctor Parameters [CppParam { name: "tags", ty: "::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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
  constexpr static std::size_t addrs = 0x702bed4;

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
  constexpr static std::size_t addrs = 0x70270b8;

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
  constexpr static std::size_t addrs = 0x702bf34;

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
  constexpr static std::size_t addrs = 0x702c020;

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
  constexpr static std::size_t addrs = 0x702c0ec;

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
  constexpr static std::size_t addrs = 0x702c1f0;

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
  constexpr static std::size_t addrs = 0x702c284;

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
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x7022104;

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
  constexpr static std::size_t addrs = 0x7022274;

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
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ParseColorAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::RichTextTagParser_TagValue* (*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::UnityEngine::TextCore::RichTextTagParser::ParseColorAttribute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x70224f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ParseColorAttribute", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ParseAlphaAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::RichTextTagParser_TagValue* (*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::UnityEngine::TextCore::RichTextTagParser::ParseAlphaAttribute)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x7022728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ParseAlphaAttribute", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.HexCharToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::UnityEngine::TextCore::RichTextTagParser::HexCharToInt)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x70228b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "HexCharToInt", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ParsePaddingAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::RichTextTagParser_TagValue* (*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::UnityEngine::TextCore::RichTextTagParser::ParsePaddingAttribute)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x7022910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ParsePaddingAttribute", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ParseHref
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::RichTextTagParser_TagValue* (*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::UnityEngine::TextCore::RichTextTagParser::ParseHref)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x7022bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ParseHref", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.TryGetSimpleHref
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::StringW>)>(&::UnityEngine::TextCore::RichTextTagParser::TryGetSimpleHref)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x7022cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                             { "TryGetSimpleHref", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ParseSpriteAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::UnityEngine::TextCore::Text::TextSettings*, ::by_ref<char16_t>, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>,
    ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>,
    ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>, ::by_ref<::StringW>)>(&::UnityEngine::TextCore::RichTextTagParser::ParseSpriteAttributes)> {
  constexpr static std::size_t size = 0xb6c;
  constexpr static std::size_t addrs = 0x7022fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                            { "ParseSpriteAttributes",
                              {},
                              { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(), ::i2c::type_of<::by_ref<char16_t>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.PreloadFontAssetsFromTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::TextCore::Text::TextSettings*)>(&::UnityEngine::TextCore::RichTextTagParser::PreloadFontAssetsFromTags)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x7023b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                             { "PreloadFontAssetsFromTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.PreloadSpriteAssetsFromTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::TextCore::Text::TextSettings*)>(&::UnityEngine::TextCore::RichTextTagParser::PreloadSpriteAssetsFromTags)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x7024438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                             { "PreloadSpriteAssetsFromTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.PreloadGradientAssetsFromTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::TextCore::Text::TextSettings*)>(&::UnityEngine::TextCore::RichTextTagParser::PreloadGradientAssetsFromTags)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x7024a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                { "PreloadGradientAssetsFromTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.FindTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* (*)(::by_ref<::StringW>, ::UnityEngine::TextCore::Text::TextSettings*, bool,
                                                                                                ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*)>(
    &::UnityEngine::TextCore::RichTextTagParser::FindTags)> {
  constexpr static std::size_t size = 0x20e0;
  constexpr static std::size_t addrs = 0x7024fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                             { "FindTags",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.GetAttributeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::UnityEngine::TextCore::RichTextTagParser::GetAttributeSpan)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x70225d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "GetAttributeSpan", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ParseTagUnitType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::RichTextTagParser_TagUnitType (*)(::by_ref<::System::ReadOnlySpan_1<char16_t>>)>(
    &::UnityEngine::TextCore::RichTextTagParser::ParseTagUnitType)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x70270e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                                                           { "ParseTagUnitType", {}, { ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.PickResultingTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* (*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*, ::StringW,
                                                                                                int32_t, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*)>(
    &::UnityEngine::TextCore::RichTextTagParser::PickResultingTags)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x7027348;

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
  constexpr static std::size_t addrs = 0x7027c70;

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
  constexpr static std::size_t addrs = 0x7027f20;

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
  constexpr static std::size_t addrs = 0x7027ff0;

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
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*, ::UnityEngine::Color, float_t)>(
    &::UnityEngine::TextCore::RichTextTagParser::CreateTextSpan)> {
  constexpr static std::size_t size = 0x10e4;
  constexpr static std::size_t addrs = 0x70281bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                         { "CreateTextSpan",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_Segment>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(),
                                             ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.CreateTextGenerationSettingsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>,
                                                                ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*,
                                                                ::UnityEngine::Color, float_t, ::UnityEngine::TextCore::Text::TextSettings*)>(
    &::UnityEngine::TextCore::RichTextTagParser::CreateTextGenerationSettingsArray)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x70294fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                         { "CreateTextGenerationSettingsArray",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(),
                                             ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.MayNeedParsing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::TextCore::RichTextTagParser::MayNeedParsing)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x70297d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "MayNeedParsing", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ContainsFontTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::TextCore::RichTextTagParser::ContainsFontTag)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x7029908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsFontTag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ContainsSpriteTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::TextCore::RichTextTagParser::ContainsSpriteTag)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x7029a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsSpriteTag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ContainsStyleTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::TextCore::RichTextTagParser::ContainsStyleTags)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x7029b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsStyleTags", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ContainsGradientTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::TextCore::RichTextTagParser::ContainsGradientTag)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x7029c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsGradientTag", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ContainsNobrTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::TextCore::RichTextTagParser::ContainsNobrTags)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x7029d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsNobrTags", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.HasFontTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::TextCore::Text::TextSettings*, ::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::UnityEngine::TextCore::RichTextTagParser::HasFontTags)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x7023e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                                                           { "HasFontTags",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.HasSpriteTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::TextCore::Text::TextSettings*, ::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::UnityEngine::TextCore::RichTextTagParser::HasSpriteTags)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x7024714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                                                           { "HasSpriteTags",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.HasGradientTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::TextCore::Text::TextSettings*, ::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::UnityEngine::TextCore::RichTextTagParser::HasGradientTags)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x7024ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                                                           { "HasGradientTags",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_k_HighlightColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_HighlightColor", ::UnityEngine::TextCore::RichTextTagParser*>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::RichTextTagParser::getStaticF_k_HighlightColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_HighlightColor", ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_k_PrivateArea(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "k_PrivateArea", ::UnityEngine::TextCore::RichTextTagParser*>(std::forward<char16_t>(value));
}
inline char16_t UnityEngine::TextCore::RichTextTagParser::getStaticF_k_PrivateArea() {
  return ::cordl_internals::getStaticField<char16_t, "k_PrivateArea", ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_s_AtgHyperlinkColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_AtgHyperlinkColor", ::UnityEngine::TextCore::RichTextTagParser*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::TextCore::RichTextTagParser::getStaticF_s_AtgHyperlinkColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_AtgHyperlinkColor", ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_s_FontAssetCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>*, "s_FontAssetCache", ::UnityEngine::TextCore::RichTextTagParser*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* UnityEngine::TextCore::RichTextTagParser::getStaticF_s_FontAssetCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>*, "s_FontAssetCache", ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline void
UnityEngine::TextCore::RichTextTagParser::setStaticF_s_SpriteAssetCache(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*, "s_SpriteAssetCache",
                                    ::UnityEngine::TextCore::RichTextTagParser*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* UnityEngine::TextCore::RichTextTagParser::getStaticF_s_SpriteAssetCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*, "s_SpriteAssetCache",
                                           ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_s_GradientAssetCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>*, "s_GradientAssetCache", ::UnityEngine::TextCore::RichTextTagParser*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* UnityEngine::TextCore::RichTextTagParser::getStaticF_s_GradientAssetCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>*, "s_GradientAssetCache", ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_s_LoggedUnsupportedTagWarnings(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<::UnityEngine::TextCore::RichTextTagParser_TagType, uint8_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::UnityEngine::TextCore::RichTextTagParser_TagType, uint8_t>*, "s_LoggedUnsupportedTagWarnings",
                                    ::UnityEngine::TextCore::RichTextTagParser*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::UnityEngine::TextCore::RichTextTagParser_TagType, uint8_t>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::UnityEngine::TextCore::RichTextTagParser_TagType, uint8_t>*
UnityEngine::TextCore::RichTextTagParser::getStaticF_s_LoggedUnsupportedTagWarnings() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::UnityEngine::TextCore::RichTextTagParser_TagType, uint8_t>*, "s_LoggedUnsupportedTagWarnings",
                                           ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_TagsInfo(::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>, "TagsInfo", ::UnityEngine::TextCore::RichTextTagParser*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*> UnityEngine::TextCore::RichTextTagParser::getStaticF_TagsInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>, "TagsInfo", ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_s_EmptyTagNameList(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "s_EmptyTagNameList", ::UnityEngine::TextCore::RichTextTagParser*>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::TextCore::RichTextTagParser::getStaticF_s_EmptyTagNameList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "s_EmptyTagNameList", ::UnityEngine::TextCore::RichTextTagParser*>();
}
inline bool UnityEngine::TextCore::RichTextTagParser::tagMatch(::System::ReadOnlySpan_1<char16_t> tagCandidate, /* [Nullable(1)] */ ::StringW tagName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                                                         { "tagMatch", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tagCandidate, tagName);
}
inline bool UnityEngine::TextCore::RichTextTagParser::SpanToEnum(::System::ReadOnlySpan_1<char16_t> tagCandidate, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagType> tagType,
                                                                 /* [Nullable(2)] */ ::by_ref<::StringW> error, ::by_ref<::System::ReadOnlySpan_1<char16_t>> attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                           { "SpanToEnum",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagType>>(),
                                                               ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tagCandidate, tagType, error, attribute);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser::ParseColorAttribute(::System::ReadOnlySpan_1<char16_t> attributeSection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ParseColorAttribute", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(nullptr, ___internal_method, attributeSection);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser::ParseAlphaAttribute(::System::ReadOnlySpan_1<char16_t> attributeSection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ParseAlphaAttribute", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(nullptr, ___internal_method, attributeSection);
}
inline int32_t UnityEngine::TextCore::RichTextTagParser::HexCharToInt(char16_t hex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "HexCharToInt", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hex);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser::ParsePaddingAttribute(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ParsePaddingAttribute", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser::ParseHref(::System::ReadOnlySpan_1<char16_t> attributeSection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ParseHref", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(nullptr, ___internal_method, attributeSection);
}
inline bool UnityEngine::TextCore::RichTextTagParser::TryGetSimpleHref(::System::ReadOnlySpan_1<char16_t> attributeSection, /* [Nullable(1)] */ ::by_ref<::StringW> hrefValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                           { "TryGetSimpleHref", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attributeSection, hrefValue);
}
inline bool UnityEngine::TextCore::RichTextTagParser::ParseSpriteAttributes(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t> attributeSection,
                                                                            /* [Nullable(1)] */ ::UnityEngine::TextCore::Text::TextSettings* textSettings, ::by_ref<char16_t> unicode,
                                                                            ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> spriteAssetValue,
                                                                            ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> glyphMetricsValue,
                                                                            ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> tintValue,
                                                                            ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> scaleValue,
                                                                            ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> colorValue, ::by_ref<::StringW> spriteAssetNameOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                          { "ParseSpriteAttributes",
                            {},
                            { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(), ::i2c::type_of<::by_ref<char16_t>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attributeSection, textSettings, unicode, spriteAssetValue, glyphMetricsValue, tintValue, scaleValue, colorValue,
                                                   spriteAssetNameOut);
}
inline void UnityEngine::TextCore::RichTextTagParser::PreloadFontAssetsFromTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                           { "PreloadFontAssetsFromTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, textSettings);
}
inline void UnityEngine::TextCore::RichTextTagParser::PreloadSpriteAssetsFromTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                           { "PreloadSpriteAssetsFromTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, textSettings);
}
inline void UnityEngine::TextCore::RichTextTagParser::PreloadGradientAssetsFromTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                           { "PreloadGradientAssetsFromTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, textSettings);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
UnityEngine::TextCore::RichTextTagParser::FindTags(::by_ref<::StringW> inputStr, ::UnityEngine::TextCore::Text::TextSettings* textSettings, bool preprocessingOnly,
                                                   /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>* errors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                           { "FindTags",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>(nullptr, ___internal_method, inputStr, textSettings,
                                                                                                                                      preprocessingOnly, errors);
}
inline ::System::ReadOnlySpan_1<char16_t> UnityEngine::TextCore::RichTextTagParser::GetAttributeSpan(::System::ReadOnlySpan_1<char16_t> attributeSection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "GetAttributeSpan", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, attributeSection);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagUnitType UnityEngine::TextCore::RichTextTagParser::ParseTagUnitType(::by_ref<::System::ReadOnlySpan_1<char16_t>> attributeSection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                                                                         { "ParseTagUnitType", {}, { ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::RichTextTagParser_TagUnitType>(nullptr, ___internal_method, attributeSection);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
UnityEngine::TextCore::RichTextTagParser::PickResultingTags(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* allTags, ::StringW input, int32_t atPosition,
                                                            /* [Nullable(2)] */ ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* applicableTags) {
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
inline int32_t UnityEngine::TextCore::RichTextTagParser::AddLink(
    ::UnityEngine::TextCore::RichTextTagParser_TagType type, ::StringW value,
    /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                          { "AddLink",
                            {},
                            { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_TagType>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type, value, links);
}
inline ::UnityEngine::TextCore::TextSpan UnityEngine::TextCore::RichTextTagParser::CreateTextSpan(
    ::UnityEngine::TextCore::RichTextTagParser_Segment segment, ::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
    /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links,
    ::UnityEngine::Color hyperlinkColor, float_t pixelsPerPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                       { "CreateTextSpan",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::TextCore::RichTextTagParser_Segment>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(),
                                           ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::TextSpan>(nullptr, ___internal_method, segment, tgs, links, hyperlinkColor, pixelsPerPoint);
}
inline void UnityEngine::TextCore::RichTextTagParser::CreateTextGenerationSettingsArray(
    ::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
    /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links,
    ::UnityEngine::Color hyperlinkColor, float_t pixelsPerPoint, ::UnityEngine::TextCore::Text::TextSettings* textSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(),
                                       { "CreateTextGenerationSettingsArray",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>(),
                                           ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tgs, links, hyperlinkColor, pixelsPerPoint, textSettings);
}
inline bool UnityEngine::TextCore::RichTextTagParser::MayNeedParsing(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "MayNeedParsing", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text);
}
inline bool UnityEngine::TextCore::RichTextTagParser::ContainsFontTag(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsFontTag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text);
}
inline bool UnityEngine::TextCore::RichTextTagParser::ContainsSpriteTag(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsSpriteTag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text);
}
inline bool UnityEngine::TextCore::RichTextTagParser::ContainsStyleTags(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsStyleTags", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text);
}
inline bool UnityEngine::TextCore::RichTextTagParser::ContainsGradientTag(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsGradientTag", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text);
}
inline bool UnityEngine::TextCore::RichTextTagParser::ContainsNobrTags(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "ContainsNobrTags", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text);
}
inline bool UnityEngine::TextCore::RichTextTagParser::HasFontTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings,
                                                                  ::by_ref<::System::Collections::Generic::List_1<::StringW>*> fontAssetNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "HasFontTags",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, textSettings, fontAssetNames);
}
inline bool UnityEngine::TextCore::RichTextTagParser::HasSpriteTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings,
                                                                    ::by_ref<::System::Collections::Generic::List_1<::StringW>*> spriteAssetNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "HasSpriteTags",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, textSettings, spriteAssetNames);
}
inline bool UnityEngine::TextCore::RichTextTagParser::HasGradientTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings,
                                                                      ::by_ref<::System::Collections::Generic::List_1<::StringW>*> gradientAssetNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::RichTextTagParser*>(), { "HasGradientTags",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, textSettings, gradientAssetNames);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser::RichTextTagParser() {}
