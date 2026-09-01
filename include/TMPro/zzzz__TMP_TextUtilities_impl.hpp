#pragma once
// IWYU pragma private; include "TMPro\TMP_TextUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "TMPro/zzzz__TMP_TextUtilities_def.hpp"
#include "TMPro/zzzz__CaretPosition_def.hpp"
#include "TMPro/zzzz__TMP_TextUtilities_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_TextUtilities_LineSegment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_TextUtilities_LineSegment::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::TMPro::TMP_TextUtilities_LineSegment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69aa488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities_LineSegment>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_TextUtilities_LineSegment::_ctor(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities_LineSegment>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p1, p2);
}
// Ctor Parameters [CppParam { name: "Point1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Point2", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::TMP_TextUtilities_LineSegment::TMP_TextUtilities_LineSegment(::UnityEngine::Vector3 Point1, ::UnityEngine::Vector3 Point2) noexcept {
  this->Point1 = Point1;
  this->Point2 = Point2;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_TextUtilities_LineSegment::TMP_TextUtilities_LineSegment() {}
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetCursorIndexFromPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x69a71a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                            { "GetCursorIndexFromPosition", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetCursorIndexFromPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::by_ref<::TMPro::CaretPosition>)>(
    &::TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x69a7994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetCursorIndexFromPosition",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                    ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::TMPro::CaretPosition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindNearestLine)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x69a7ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                         { "FindNearestLine", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestCharacterOnLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, int32_t, ::UnityEngine::Camera*, bool)>(
    &::TMPro::TMP_TextUtilities::FindNearestCharacterOnLine)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x69a7d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "FindNearestCharacterOnLine",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.IsIntersectingRectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::IsIntersectingRectTransform)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x69a82ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
            { "IsIntersectingRectTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, bool)>(&::TMPro::TMP_TextUtilities::FindIntersectingCharacter)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x69a83cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "FindIntersectingCharacter",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, bool)>(&::TMPro::TMP_TextUtilities::FindNearestCharacter)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x69a7308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
            { "FindNearestCharacter", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindIntersectingWord)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x69a85f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                            { "FindIntersectingWord", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindNearestWord)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x69a8a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                         { "FindNearestWord", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindIntersectingLine)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x69a9180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                            { "FindIntersectingLine", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindIntersectingLink)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x69a92fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                            { "FindIntersectingLink", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindNearestLink)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x69a9674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                         { "FindNearestLink", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.PointIntersectRectangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::TMPro::TMP_TextUtilities::PointIntersectRectangle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69a8124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                                             { "PointIntersectRectangle",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ScreenPointToWorldPointInRectangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Vector3>)>(
    &::TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x69a7650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "ScreenPointToWorldPointInRectangle",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                    ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.IntersectLinePlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TMP_TextUtilities_LineSegment, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(
    &::TMPro::TMP_TextUtilities::IntersectLinePlane)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x69a9d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "IntersectLinePlane",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::TMPro::TMP_TextUtilities_LineSegment>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                    ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.DistanceToLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::TMPro::TMP_TextUtilities::DistanceToLine)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69a81e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                         { "DistanceToLine", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToLowerFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::ToLowerFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69a9ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "ToLowerFast", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToUpperFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69a9f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "ToUpperFast", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToUpperASCIIFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::TMPro::TMP_TextUtilities::ToUpperASCIIFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69a9fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "ToUpperASCIIFast", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetHashCode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69aa064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetSimpleHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetSimpleHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x69aa118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetSimpleHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetSimpleHashCodeLowercase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69aa160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetSimpleHashCodeLowercase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetHashCodeCaseInSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetHashCodeCaseInSensitive)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69aa218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetHashCodeCaseInSensitive", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.HexToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::HexToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69aa2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "HexToInt", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.StringHexToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::StringHexToInt)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x69aa2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "StringHexToInt", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_TextUtilities::setStaticF_m_rectWorldCorners(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "m_rectWorldCorners", ::TMPro::TMP_TextUtilities*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> TMPro::TMP_TextUtilities::getStaticF_m_rectWorldCorners() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "m_rectWorldCorners", ::TMPro::TMP_TextUtilities*>();
}
inline int32_t TMPro::TMP_TextUtilities::GetCursorIndexFromPosition(::TMPro::TMP_Text* textComponent, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                          { "GetCursorIndexFromPosition", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textComponent, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::GetCursorIndexFromPosition(::TMPro::TMP_Text* textComponent, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera,
                                                                    ::by_ref<::TMPro::CaretPosition> cursor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetCursorIndexFromPosition",
                                                                                                {},
                                                                                                { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                  ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::TMPro::CaretPosition>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textComponent, position, camera, cursor);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                       { "FindNearestLine", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestCharacterOnLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, int32_t line, ::UnityEngine::Camera* camera, bool visibleOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "FindNearestCharacterOnLine",
                                                                                                {},
                                                                                                { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, line, camera, visibleOnly);
}
inline bool TMPro::TMP_TextUtilities::IsIntersectingRectTransform(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
          { "IsIntersectingRectTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rectTransform, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingCharacter(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, bool visibleOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
          { "FindIntersectingCharacter", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera, visibleOnly);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestCharacter(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, bool visibleOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
          { "FindNearestCharacter", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera, visibleOnly);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingWord(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                       { "FindIntersectingWord", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestWord(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                       { "FindNearestWord", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                       { "FindIntersectingLine", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingLink(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                       { "FindIntersectingLink", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestLink(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                       { "FindNearestLink", {}, { ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline bool TMPro::TMP_TextUtilities::PointIntersectRectangle(::UnityEngine::Vector3 m, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c, ::UnityEngine::Vector3 d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                                           { "PointIntersectRectangle",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, a, b, c, d);
}
inline bool TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle(::UnityEngine::Transform* transform, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam,
                                                                         ::by_ref<::UnityEngine::Vector3> worldPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "ScreenPointToWorldPointInRectangle",
                                                                                                {},
                                                                                                { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                  ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, screenPoint, cam, worldPoint);
}
inline bool TMPro::TMP_TextUtilities::IntersectLinePlane(::TMPro::TMP_TextUtilities_LineSegment line, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal,
                                                         ::by_ref<::UnityEngine::Vector3> intersectingPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "IntersectLinePlane",
                                                                                                {},
                                                                                                { ::i2c::type_of<::TMPro::TMP_TextUtilities_LineSegment>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                  ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, line, point, normal, intersectingPoint);
}
inline float_t TMPro::TMP_TextUtilities::DistanceToLine(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                                       { "DistanceToLine", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, point);
}
inline char16_t TMPro::TMP_TextUtilities::ToLowerFast(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "ToLowerFast", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline char16_t TMPro::TMP_TextUtilities::ToUpperFast(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "ToUpperFast", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline uint32_t TMPro::TMP_TextUtilities::ToUpperASCIIFast(uint32_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "ToUpperASCIIFast", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, c);
}
inline int32_t TMPro::TMP_TextUtilities::GetHashCode(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline int32_t TMPro::TMP_TextUtilities::GetSimpleHashCode(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetSimpleHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline uint32_t TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetSimpleHashCodeLowercase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, s);
}
inline uint32_t TMPro::TMP_TextUtilities::GetHashCodeCaseInSensitive(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "GetHashCodeCaseInSensitive", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, s);
}
inline int32_t TMPro::TMP_TextUtilities::HexToInt(char16_t hex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "HexToInt", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hex);
}
inline int32_t TMPro::TMP_TextUtilities::StringHexToInt(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextUtilities*>(), { "StringHexToInt", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_TextUtilities::TMP_TextUtilities() {}
