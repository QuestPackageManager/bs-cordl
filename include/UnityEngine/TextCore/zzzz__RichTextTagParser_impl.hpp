#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6990f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)(
    ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW, ::UnityEngine::TextCore::RichTextTagParser_TagValueType, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6990f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_TagType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_TagValueType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_TagUnitType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6990f98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.PrintMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)(::System::Text::StringBuilder*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::PrintMembers)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6991084;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6991258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)(::System::Object*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x69913e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::*)(
    ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*)>(&::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::Equals)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6991478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 7));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::_ctor(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, ::StringW name,
                                                                        ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType,
                                                                        ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_TagType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_TagValueType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_TagUnitType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tagType, name, valueType, unitType);
}
inline ::StringW UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::PrintMembers(::System::Text::StringBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, builder);
}
inline int32_t UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::Equals(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* other) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* UnityEngine::TextCore::RichTextTagParser_TagTypeInfo::New_ctor(::UnityEngine::TextCore::RichTextTagParser_TagType tagType,
                                                                                                                              ::StringW name,
                                                                                                                              ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType,
                                                                                                                              ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>(tagType, name, valueType, unitType));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699160c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::UnityEngine::Color)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x698ef7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::StringW)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x698ef90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_StringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_StringValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699012c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                                               "get_StringValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_NumericalValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_NumericalValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699018c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                                               "get_NumericalValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.get_ColorValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::get_ColorValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69900c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                                               "get_ColorValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x699166c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.PrintMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::System::Text::StringBuilder*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::PrintMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6991758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::GetHashCode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6991760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::System::Object*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x69918f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_TagValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_TagValue::*)(::UnityEngine::TextCore::RichTextTagParser_TagValue*)>(
    &::UnityEngine::TextCore::RichTextTagParser_TagValue::Equals)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6991984;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 7));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_stringValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::RichTextTagParser_TagValue::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::RichTextTagParser_TagValue::get_StringValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                                             "get_StringValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t UnityEngine::TextCore::RichTextTagParser_TagValue::get_NumericalValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                                             "get_NumericalValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::TextCore::RichTextTagParser_TagValue::get_ColorValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(),
                                                                             "get_ColorValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextCore::RichTextTagParser_TagValue::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagValue::PrintMembers(::System::Text::StringBuilder* builder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, builder);
}
inline int32_t UnityEngine::TextCore::RichTextTagParser_TagValue::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagValue::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::TextCore::RichTextTagParser_TagValue::Equals(::UnityEngine::TextCore::RichTextTagParser_TagValue* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_TagValue*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(::UnityEngine::Color value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value));
}
inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* UnityEngine::TextCore::RichTextTagParser_TagValue::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::RichTextTagParser_TagValue*>(value));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6991b20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)(::StringW, int32_t)>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x698ef70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6991b80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.PrintMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)(::System::Text::StringBuilder*)>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::PrintMembers)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6991c6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)()>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::GetHashCode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6991d38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)(::System::Object*)>(
    &::UnityEngine::TextCore::RichTextTagParser_ParseError::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6991e3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser_ParseError.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::RichTextTagParser_ParseError::*)(
    ::UnityEngine::TextCore::RichTextTagParser_ParseError*)>(&::UnityEngine::TextCore::RichTextTagParser_ParseError::Equals)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6991ed0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 7));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Type* UnityEngine::TextCore::RichTextTagParser_ParseError::get_EqualityContract() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::RichTextTagParser_ParseError::_ctor(::StringW message, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, position);
}
inline ::StringW UnityEngine::TextCore::RichTextTagParser_ParseError::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_ParseError::PrintMembers(::System::Text::StringBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, builder);
}
inline int32_t UnityEngine::TextCore::RichTextTagParser_ParseError::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::RichTextTagParser_ParseError::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::TextCore::RichTextTagParser_ParseError::Equals(::UnityEngine::TextCore::RichTextTagParser_ParseError* other) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser_ParseError*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::UnityEngine::TextCore::RichTextTagParser_ParseError* UnityEngine::TextCore::RichTextTagParser_ParseError::New_ctor(::StringW message, int32_t position) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::RichTextTagParser_ParseError*>(message, position));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::StringW)>(&::UnityEngine::TextCore::RichTextTagParser::tagMatch)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x698dfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "tagMatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.SpanToEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::UnityEngine::TextCore::RichTextTagParser_TagType>, ::ByRef<::StringW>, ::ByRef<::System::ReadOnlySpan_1<char16_t>>)>(
        &::UnityEngine::TextCore::RichTextTagParser::SpanToEnum)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x698e140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "SpanToEnum", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::RichTextTagParser_TagType>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::ReadOnlySpan_1<char16_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.FindTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::TextCore::RichTextTagParser_Tag>* (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*)>(
    &::UnityEngine::TextCore::RichTextTagParser::FindTags)> {
  constexpr static std::size_t size = 0xbb0;
  constexpr static std::size_t addrs = 0x698e3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "FindTags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.PickResultingTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* (*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*, ::StringW,
                                                                                                int32_t, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*)>(
    &::UnityEngine::TextCore::RichTextTagParser::PickResultingTags)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x698efa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "PickResultingTags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.GenerateSegments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*> (*)(
        ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*)>(&::UnityEngine::TextCore::RichTextTagParser::GenerateSegments)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x698f7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "GenerateSegments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.ApplyStateToSegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*,
    ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*>)>(&::UnityEngine::TextCore::RichTextTagParser::ApplyStateToSegment)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x698fa90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "ApplyStateToSegment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.AddLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*)>(&::UnityEngine::TextCore::RichTextTagParser::AddLink)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x698fb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "AddLink", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_TagType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.CreateTextSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::TextSpan (*)(
    ::UnityEngine::TextCore::RichTextTagParser_Segment, ::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings>,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*, ::UnityEngine::Color)>(
    &::UnityEngine::TextCore::RichTextTagParser::CreateTextSpan)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x698fd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "CreateTextSpan", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_Segment>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::RichTextTagParser.CreateTextGenerationSettingsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings>,
                         ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*, ::UnityEngine::Color)>(
        &::UnityEngine::TextCore::RichTextTagParser::CreateTextGenerationSettingsArray)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x69901ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "CreateTextGenerationSettingsArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::RichTextTagParser::setStaticF_TagsInfo(
    ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, ::Array<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, ::Array<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*>, "TagsInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, ::Array<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, ::Array<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*>
UnityEngine::TextCore::RichTextTagParser::getStaticF_TagsInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, ::Array<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*>, "TagsInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get>();
}
inline bool UnityEngine::TextCore::RichTextTagParser::tagMatch(::System::ReadOnlySpan_1<char16_t> tagCandidate, ::StringW tagName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "tagMatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tagCandidate, tagName);
}
inline bool UnityEngine::TextCore::RichTextTagParser::SpanToEnum(::System::ReadOnlySpan_1<char16_t> tagCandidate, ::ByRef<::UnityEngine::TextCore::RichTextTagParser_TagType> tagType,
                                                                 ::ByRef<::StringW> error, ::ByRef<::System::ReadOnlySpan_1<char16_t>> attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "SpanToEnum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::RichTextTagParser_TagType>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::ReadOnlySpan_1<char16_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tagCandidate, tagType, error, attribute);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
UnityEngine::TextCore::RichTextTagParser::FindTags(::StringW inputStr, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>* errors) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "FindTags", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*, false>(nullptr, ___internal_method, inputStr, errors);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
UnityEngine::TextCore::RichTextTagParser::PickResultingTags(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* allTags, ::StringW input, int32_t atPosition,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* applicableTags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "PickResultingTags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*, false>(nullptr, ___internal_method, allTags, input, atPosition,
                                                                                                                                             applicableTags);
}
inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*>
UnityEngine::TextCore::RichTextTagParser::GenerateSegments(::StringW input, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "GenerateSegments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*>, false>(
      nullptr, ___internal_method, input, tags);
}
inline void
UnityEngine::TextCore::RichTextTagParser::ApplyStateToSegment(::StringW input, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags,
                                                              ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*> segments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "ApplyStateToSegment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, tags, segments);
}
inline int32_t
UnityEngine::TextCore::RichTextTagParser::AddLink(::UnityEngine::TextCore::RichTextTagParser_TagType type, ::StringW value,
                                                  ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "AddLink", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_TagType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, type, value, links);
}
inline ::UnityEngine::TextCore::TextSpan
UnityEngine::TextCore::RichTextTagParser::CreateTextSpan(::UnityEngine::TextCore::RichTextTagParser_Segment segment, ::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
                                                         ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links,
                                                         ::UnityEngine::Color hyperlinkColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "CreateTextSpan", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::RichTextTagParser_Segment>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::TextSpan, false>(nullptr, ___internal_method, segment, tgs, links, hyperlinkColor);
}
inline void UnityEngine::TextCore::RichTextTagParser::CreateTextGenerationSettingsArray(
    ::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links, ::UnityEngine::Color hyperlinkColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::RichTextTagParser*>::get(), "CreateTextGenerationSettingsArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tgs, links, hyperlinkColor);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::RichTextTagParser::RichTextTagParser() {}
