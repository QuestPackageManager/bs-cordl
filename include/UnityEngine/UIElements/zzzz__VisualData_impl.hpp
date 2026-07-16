#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualData.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualData.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualData (::UnityEngine::UIElements::VisualData::*)()>(&::UnityEngine::UIElements::VisualData::Copy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c8c880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualData.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualData::*)(::by_ref<::UnityEngine::UIElements::VisualData>)>(
    &::UnityEngine::UIElements::VisualData::CopyFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c8c890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualData.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualData, ::UnityEngine::UIElements::VisualData)>(&::UnityEngine::UIElements::VisualData::op_Equality)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6c8c898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualData>(), ::i2c::type_of<::UnityEngine::UIElements::VisualData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualData::*)(::UnityEngine::UIElements::VisualData)>(&::UnityEngine::UIElements::VisualData::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c8cc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualData::*)(::System::Object*)>(&::UnityEngine::UIElements::VisualData::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c8cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(), { ::i2c::class_of<::UnityEngine::UIElements::VisualData>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualData::*)()>(&::UnityEngine::UIElements::VisualData::GetHashCode)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x6c8cd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(), { ::i2c::class_of<::UnityEngine::UIElements::VisualData>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::VisualData UnityEngine::UIElements::VisualData::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualData>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualData::CopyFrom(::by_ref<::UnityEngine::UIElements::VisualData> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::VisualData::op_Equality(::UnityEngine::UIElements::VisualData lhs, ::UnityEngine::UIElements::VisualData rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualData>(), ::i2c::type_of<::UnityEngine::UIElements::VisualData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::VisualData::Equals(::UnityEngine::UIElements::VisualData other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::VisualData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualData>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::VisualData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>"
constexpr UnityEngine::UIElements::VisualData::operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>*() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>"
constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>*
UnityEngine::UIElements::VisualData::i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__VisualData_() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::VisualData>"
constexpr UnityEngine::UIElements::VisualData::operator ::System::IEquatable_1<::UnityEngine::UIElements::VisualData>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::VisualData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::VisualData>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::VisualData>* UnityEngine::UIElements::VisualData::i___System__IEquatable_1___UnityEngine__UIElements__VisualData_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::VisualData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundImage", ty:
// "::UnityEngine::UIElements::Background", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundPositionX", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "backgroundPositionY", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeat",
// ty: "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundSize", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "borderBottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderBottomLeftRadius", ty:
// "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderBottomRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "borderLeftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderRightColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "borderTopColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderTopLeftRadius", ty:
// "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderTopRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "opacity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overflow", ty: "::UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualData::VisualData(::UnityEngine::Color backgroundColor, ::UnityEngine::UIElements::Background backgroundImage,
                                                            ::UnityEngine::UIElements::BackgroundPosition backgroundPositionX, ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY,
                                                            ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat, ::UnityEngine::UIElements::BackgroundSize backgroundSize,
                                                            ::UnityEngine::Color borderBottomColor, ::UnityEngine::UIElements::Length borderBottomLeftRadius,
                                                            ::UnityEngine::UIElements::Length borderBottomRightRadius, ::UnityEngine::Color borderLeftColor, ::UnityEngine::Color borderRightColor,
                                                            ::UnityEngine::Color borderTopColor, ::UnityEngine::UIElements::Length borderTopLeftRadius,
                                                            ::UnityEngine::UIElements::Length borderTopRightRadius, float_t opacity, ::UnityEngine::UIElements::OverflowInternal overflow) noexcept {
  this->backgroundColor = backgroundColor;
  this->backgroundImage = backgroundImage;
  this->backgroundPositionX = backgroundPositionX;
  this->backgroundPositionY = backgroundPositionY;
  this->backgroundRepeat = backgroundRepeat;
  this->backgroundSize = backgroundSize;
  this->borderBottomColor = borderBottomColor;
  this->borderBottomLeftRadius = borderBottomLeftRadius;
  this->borderBottomRightRadius = borderBottomRightRadius;
  this->borderLeftColor = borderLeftColor;
  this->borderRightColor = borderRightColor;
  this->borderTopColor = borderTopColor;
  this->borderTopLeftRadius = borderTopLeftRadius;
  this->borderTopRightRadius = borderTopRightRadius;
  this->opacity = opacity;
  this->overflow = overflow;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualData::VisualData() {}
