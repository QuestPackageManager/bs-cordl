#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\RareData.hpp"
#include "UnityEngine/UIElements/zzzz__Cursor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowClipBox_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RareData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RareData.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::RareData (::UnityEngine::UIElements::RareData::*)()>(&::UnityEngine::UIElements::RareData::Copy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c8ef54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RareData.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RareData::*)(::by_ref<::UnityEngine::UIElements::RareData>)>(&::UnityEngine::UIElements::RareData::CopyFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c8ef64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::RareData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RareData.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::RareData, ::UnityEngine::UIElements::RareData)>(&::UnityEngine::UIElements::RareData::op_Equality)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6c8ef6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::RareData>(), ::i2c::type_of<::UnityEngine::UIElements::RareData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RareData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::RareData::*)(::UnityEngine::UIElements::RareData)>(&::UnityEngine::UIElements::RareData::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c8f08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::RareData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RareData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::RareData::*)(::System::Object*)>(&::UnityEngine::UIElements::RareData::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c8f0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(), { ::i2c::class_of<::UnityEngine::UIElements::RareData>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RareData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::RareData::*)()>(&::UnityEngine::UIElements::RareData::GetHashCode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6c8f174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(), { ::i2c::class_of<::UnityEngine::UIElements::RareData>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::RareData UnityEngine::UIElements::RareData::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RareData>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::RareData::CopyFrom(::by_ref<::UnityEngine::UIElements::RareData> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::RareData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::RareData::op_Equality(::UnityEngine::UIElements::RareData lhs, ::UnityEngine::UIElements::RareData rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::RareData>(), ::i2c::type_of<::UnityEngine::UIElements::RareData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::RareData::Equals(::UnityEngine::UIElements::RareData other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RareData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::RareData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::RareData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RareData>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::RareData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RareData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>"
constexpr UnityEngine::UIElements::RareData::operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>*() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>"
constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>*
UnityEngine::UIElements::RareData::i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__RareData_() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::RareData>"
constexpr UnityEngine::UIElements::RareData::operator ::System::IEquatable_1<::UnityEngine::UIElements::RareData>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::RareData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::RareData>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::RareData>* UnityEngine::UIElements::RareData::i___System__IEquatable_1___UnityEngine__UIElements__RareData_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::RareData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "cursor", ty: "::UnityEngine::UIElements::Cursor", modifiers: "", def_value: Some("{}") }, CppParam { name: "textOverflow", ty:
// "::UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: Some("{}") }, CppParam { name: "unityBackgroundImageTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "unityOverflowClipBox", ty: "::UnityEngine::UIElements::OverflowClipBox", modifiers: "", def_value: Some("{}") }, CppParam { name: "unitySliceBottom", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "unitySliceLeft", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unitySliceRight", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "unitySliceScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unitySliceTop", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "unityTextOverflowPosition", ty: "::UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::RareData::RareData(::UnityEngine::UIElements::Cursor cursor, ::UnityEngine::UIElements::TextOverflow textOverflow,
                                                        ::UnityEngine::Color unityBackgroundImageTintColor, ::UnityEngine::UIElements::OverflowClipBox unityOverflowClipBox, int32_t unitySliceBottom,
                                                        int32_t unitySliceLeft, int32_t unitySliceRight, float_t unitySliceScale, int32_t unitySliceTop,
                                                        ::UnityEngine::UIElements::TextOverflowPosition unityTextOverflowPosition) noexcept {
  this->cursor = cursor;
  this->textOverflow = textOverflow;
  this->unityBackgroundImageTintColor = unityBackgroundImageTintColor;
  this->unityOverflowClipBox = unityOverflowClipBox;
  this->unitySliceBottom = unitySliceBottom;
  this->unitySliceLeft = unitySliceLeft;
  this->unitySliceRight = unitySliceRight;
  this->unitySliceScale = unitySliceScale;
  this->unitySliceTop = unitySliceTop;
  this->unityTextOverflowPosition = unityTextOverflowPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RareData::RareData() {}
