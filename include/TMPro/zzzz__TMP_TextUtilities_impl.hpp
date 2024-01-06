#pragma once
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
//  Writing Method size for method: ::TMPro::__TMP_TextUtilities__LineSegment._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_TextUtilities__LineSegment::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::TMPro::__TMP_TextUtilities__LineSegment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c4ce10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_TextUtilities__LineSegment>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::__TMP_TextUtilities__LineSegment::_ctor(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_TextUtilities__LineSegment>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2);
}
// Ctor Parameters [CppParam { name: "Point1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Point2", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::__TMP_TextUtilities__LineSegment::__TMP_TextUtilities__LineSegment(::UnityEngine::Vector3 Point1, ::UnityEngine::Vector3 Point2) noexcept {
  this->Point1 = Point1;
  this->Point2 = Point2;
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_TextUtilities__LineSegment::__TMP_TextUtilities__LineSegment() {}
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetCursorIndexFromPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2c49088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetCursorIndexFromPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetCursorIndexFromPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ByRef<::TMPro::CaretPosition>)>(
    &::TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2c49724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetCursorIndexFromPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::CaretPosition>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::FindNearestLine)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2c49904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestLine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestCharacterOnLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, int32_t, ::UnityEngine::Camera*, bool)>(
    &::TMPro::TMP_TextUtilities::FindNearestCharacterOnLine)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2c49a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestCharacterOnLine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.IsIntersectingRectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::IsIntersectingRectTransform)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2c49f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "IsIntersectingRectTransform", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, bool)>(
    &::TMPro::TMP_TextUtilities::FindIntersectingCharacter)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2c4a0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindIntersectingCharacter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, bool)>(
    &::TMPro::TMP_TextUtilities::FindNearestCharacter)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2c491ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestCharacter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::FindIntersectingWord)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2c4a2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindIntersectingWord", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::FindNearestWord)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x2c4a6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestWord", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::FindIntersectingLine)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2c4ac88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindIntersectingLine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::FindIntersectingLink)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2c4ade0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindIntersectingLink", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(
    &::TMPro::TMP_TextUtilities::FindNearestLink)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x2c4b11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestLink", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.PointIntersectRectangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                                           ::UnityEngine::Vector3)>(&::TMPro::TMP_TextUtilities::PointIntersectRectangle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c49dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "PointIntersectRectangle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ScreenPointToWorldPointInRectangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ByRef<::UnityEngine::Vector3>)>(
    &::TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2c49528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "ScreenPointToWorldPointInRectangle", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.IntersectLinePlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::TMPro::__TMP_TextUtilities__LineSegment, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&::TMPro::TMP_TextUtilities::IntersectLinePlane)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2c4b838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "IntersectLinePlane", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_TextUtilities__LineSegment>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.DistanceToLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::TMPro::TMP_TextUtilities::DistanceToLine)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c49ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "DistanceToLine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToLowerFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::ToLowerFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c4b9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "ToLowerFast", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToUpperFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c4ba18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "ToUpperFast", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToUpperASCIIFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&::TMPro::TMP_TextUtilities::ToUpperASCIIFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c4ba8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "ToUpperASCIIFast", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetHashCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c4bb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetHashCode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetSimpleHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetSimpleHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c4395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetSimpleHashCode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetSimpleHashCodeLowercase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c4bbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetSimpleHashCodeLowercase", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.HexToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::HexToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c4bc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "HexToInt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.StringHexToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::StringHexToInt)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c4bca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "StringHexToInt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_TextUtilities::setStaticF_m_rectWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "m_rectWorldCorners",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> TMPro::TMP_TextUtilities::getStaticF_m_rectWorldCorners() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "m_rectWorldCorners",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get>();
}
inline int32_t TMPro::TMP_TextUtilities::GetCursorIndexFromPosition(::TMPro::TMP_Text* textComponent, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetCursorIndexFromPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, textComponent, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::GetCursorIndexFromPosition(::TMPro::TMP_Text* textComponent, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera,
                                                                    ByRef<::TMPro::CaretPosition> cursor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetCursorIndexFromPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::CaretPosition>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, textComponent, position, camera, cursor);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestLine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestCharacterOnLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, int32_t line, ::UnityEngine::Camera* camera, bool visibleOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestCharacterOnLine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, line, camera, visibleOnly);
}
inline bool TMPro::TMP_TextUtilities::IsIntersectingRectTransform(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "IsIntersectingRectTransform", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rectTransform, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingCharacter(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, bool visibleOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindIntersectingCharacter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera, visibleOnly);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestCharacter(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, bool visibleOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestCharacter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera, visibleOnly);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingWord(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindIntersectingWord", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestWord(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestWord", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindIntersectingLine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingLink(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindIntersectingLink", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestLink(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "FindNearestLink", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
inline bool TMPro::TMP_TextUtilities::PointIntersectRectangle(::UnityEngine::Vector3 m, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c, ::UnityEngine::Vector3 d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "PointIntersectRectangle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m, a, b, c, d);
}
inline bool TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle(::UnityEngine::Transform* transform, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam,
                                                                         ByRef<::UnityEngine::Vector3> worldPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "ScreenPointToWorldPointInRectangle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, screenPoint, cam, worldPoint);
}
inline bool TMPro::TMP_TextUtilities::IntersectLinePlane(::TMPro::__TMP_TextUtilities__LineSegment line, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal,
                                                         ByRef<::UnityEngine::Vector3> intersectingPoint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "IntersectLinePlane", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_TextUtilities__LineSegment>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, line, point, normal, intersectingPoint);
}
inline float_t TMPro::TMP_TextUtilities::DistanceToLine(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "DistanceToLine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, b, point);
}
inline char16_t TMPro::TMP_TextUtilities::ToLowerFast(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "ToLowerFast", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
inline char16_t TMPro::TMP_TextUtilities::ToUpperFast(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "ToUpperFast", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
inline uint32_t TMPro::TMP_TextUtilities::ToUpperASCIIFast(uint32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "ToUpperASCIIFast", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, c);
}
inline int32_t TMPro::TMP_TextUtilities::GetHashCode(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetHashCode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
inline int32_t TMPro::TMP_TextUtilities::GetSimpleHashCode(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetSimpleHashCode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
inline uint32_t TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "GetSimpleHashCodeLowercase", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, s);
}
inline int32_t TMPro::TMP_TextUtilities::HexToInt(char16_t hex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "HexToInt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, hex);
}
inline int32_t TMPro::TMP_TextUtilities::StringHexToInt(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextUtilities*>::get(), "StringHexToInt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_TextUtilities::TMP_TextUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
