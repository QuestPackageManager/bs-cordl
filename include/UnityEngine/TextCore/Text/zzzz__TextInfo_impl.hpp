#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LinkInfo_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordInfo_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x7063958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x7064cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.ClearMeshInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)(bool)>(&::UnityEngine::TextCore::Text::TextInfo::ClearMeshInfo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x7064d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "ClearMeshInfo", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.ClearLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::ClearLineInfo)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x7064d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "ClearLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetCursorPositionFromStringIndexUsingCharacterHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t, ::UnityEngine::Rect, float_t, bool)>(
    &::UnityEngine::TextCore::Text::TextInfo::GetCursorPositionFromStringIndexUsingCharacterHeight)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x7064ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetCursorPositionFromStringIndexUsingLineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t, ::UnityEngine::Rect, float_t, bool, bool)>(
    &::UnityEngine::TextCore::Text::TextInfo::GetCursorPositionFromStringIndexUsingLineHeight)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x7065004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                { "GetCursorPositionFromStringIndexUsingLineHeight",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetCursorIndexFromPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(::UnityEngine::Vector2, ::UnityEngine::Rect, bool)>(
    &::UnityEngine::TextCore::Text::TextInfo::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x7065154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                { "GetCursorIndexFromPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.LineDownCharacterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x7065578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "LineDownCharacterPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.LineUpCharacterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x70656a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "LineUpCharacterPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.FindNearestLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextCore::Text::TextInfo::FindNearestLine)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7065264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "FindNearestLine", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.FindNearestCharacterOnLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(::UnityEngine::Vector2, int32_t, bool)>(
    &::UnityEngine::TextCore::Text::TextInfo::FindNearestCharacterOnLine)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x7065300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                             { "FindNearestCharacterOnLine", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.FindIntersectingLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(::UnityEngine::Vector3, ::UnityEngine::Rect, bool)>(
    &::UnityEngine::TextCore::Text::TextInfo::FindIntersectingLink)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x7065ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                { "FindIntersectingLink", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetCorrespondingStringIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::GetCorrespondingStringIndex)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7065d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetCorrespondingStringIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetLineInfoFromCharacterIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::LineInfo (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::TextInfo::GetLineInfoFromCharacterIndex)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7065dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetLineInfoFromCharacterIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.PointIntersectRectangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::TextCore::Text::TextInfo::PointIntersectRectangle)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x70657dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                             { "PointIntersectRectangle",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.DistanceToLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::TextCore::Text::TextInfo::DistanceToLine)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x70659ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                         { "DistanceToLine", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetLineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::GetLineNumber)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7065e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetLineNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetLineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::GetLineHeight)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7065e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetLineHeight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetLineHeightFromCharacterIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::GetLineHeightFromCharacterIndex)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7065ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetLineHeightFromCharacterIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.GetCharacterHeightFromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::GetCharacterHeightFromIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x7065f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetCharacterHeightFromIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextInfo::*)(int32_t, int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::Substring)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x7065f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "Substring", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(char16_t, int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::IndexOf)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x70660c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextInfo::*)(char16_t, int32_t)>(&::UnityEngine::TextCore::Text::TextInfo::LastIndexOf)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7066170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_characterCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_characterCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_characterCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characterCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_spriteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_spriteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_spriteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spriteCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_spaceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spaceCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_spaceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spaceCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_spaceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spaceCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_wordCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_wordCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_wordCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wordCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_linkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_linkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_linkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linkCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_lineCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_lineCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_lineCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_materialCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_materialCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCount;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_materialCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialCount = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo>& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_textElementInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElementInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_textElementInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElementInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_textElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textElementInfo = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo>& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_wordInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo> const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_wordInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_wordInfo(::ArrayW<::UnityEngine::TextCore::Text::WordInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wordInfo = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo>& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_linkInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo> const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_linkInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_linkInfo(::ArrayW<::UnityEngine::TextCore::Text::LinkInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linkInfo = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo>& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_lineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo> const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_lineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_lineInfo(::ArrayW<::UnityEngine::TextCore::Text::LineInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineInfo = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo>& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_meshInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meshInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo> const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_meshInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___meshInfo;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_meshInfo(::ArrayW<::UnityEngine::TextCore::Text::MeshInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___meshInfo = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_hasMultipleColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMultipleColors;
}
constexpr bool const& UnityEngine::TextCore::Text::TextInfo::__cordl_internal_get_hasMultipleColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMultipleColors;
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__cordl_internal_set_hasMultipleColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasMultipleColors = value;
}
inline void UnityEngine::TextCore::Text::TextInfo::setStaticF_s_InfinityVectorPositive(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_InfinityVectorPositive", ::UnityEngine::TextCore::Text::TextInfo*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::getStaticF_s_InfinityVectorPositive() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_InfinityVectorPositive", ::UnityEngine::TextCore::Text::TextInfo*>();
}
inline void UnityEngine::TextCore::Text::TextInfo::setStaticF_s_InfinityVectorNegative(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_InfinityVectorNegative", ::UnityEngine::TextCore::Text::TextInfo*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::getStaticF_s_InfinityVectorNegative() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_InfinityVectorNegative", ::UnityEngine::TextCore::Text::TextInfo*>();
}
inline void UnityEngine::TextCore::Text::TextInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextInfo::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextInfo::ClearMeshInfo(bool updateMesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "ClearMeshInfo", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMesh);
}
inline void UnityEngine::TextCore::Text::TextInfo::ClearLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "ClearLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextInfo::Resize(::by_ref<::ArrayW<T>> array, int32_t size) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                           { "Resize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, size);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextInfo::Resize(::by_ref<::ArrayW<T>> array, int32_t size, bool isBlockAllocated) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                           { "Resize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, size, isBlockAllocated);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::GetCursorPositionFromStringIndexUsingCharacterHeight(int32_t index, ::UnityEngine::Rect screenRect, float_t lineHeight,
                                                                                                                          bool inverseYAxis) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, index, screenRect, lineHeight, inverseYAxis);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::GetCursorPositionFromStringIndexUsingLineHeight(int32_t index, ::UnityEngine::Rect screenRect, float_t lineHeight,
                                                                                                                     bool useXAdvance, bool inverseYAxis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                              { "GetCursorPositionFromStringIndexUsingLineHeight",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, index, screenRect, lineHeight, useXAdvance, inverseYAxis);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::GetCursorIndexFromPosition(::UnityEngine::Vector2 position, ::UnityEngine::Rect screenRect, bool inverseYAxis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                              { "GetCursorIndexFromPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position, screenRect, inverseYAxis);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::LineDownCharacterPosition(int32_t originalPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "LineDownCharacterPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalPos);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::LineUpCharacterPosition(int32_t originalPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "LineUpCharacterPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalPos);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::FindNearestLine(::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "FindNearestLine", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::FindNearestCharacterOnLine(::UnityEngine::Vector2 position, int32_t line, bool visibleOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                           { "FindNearestCharacterOnLine", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position, line, visibleOnly);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::FindIntersectingLink(::UnityEngine::Vector3 position, ::UnityEngine::Rect screenRect, bool inverseYAxis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                              { "FindIntersectingLink", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position, screenRect, inverseYAxis);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::GetCorrespondingStringIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetCorrespondingStringIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::UnityEngine::TextCore::Text::LineInfo UnityEngine::TextCore::Text::TextInfo::GetLineInfoFromCharacterIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetLineInfoFromCharacterIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::LineInfo>(this, ___internal_method, index);
}
inline bool UnityEngine::TextCore::Text::TextInfo::PointIntersectRectangle(::UnityEngine::Vector3 m, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c,
                                                                           ::UnityEngine::Vector3 d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                                           { "PointIntersectRectangle",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, a, b, c, d);
}
inline float_t UnityEngine::TextCore::Text::TextInfo::DistanceToLine(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(),
                                       { "DistanceToLine", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, point);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::GetLineNumber(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetLineNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline float_t UnityEngine::TextCore::Text::TextInfo::GetLineHeight(int32_t lineNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetLineHeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lineNumber);
}
inline float_t UnityEngine::TextCore::Text::TextInfo::GetLineHeightFromCharacterIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetLineHeightFromCharacterIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline float_t UnityEngine::TextCore::Text::TextInfo::GetCharacterHeightFromIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "GetCharacterHeightFromIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline ::StringW UnityEngine::TextCore::Text::TextInfo::Substring(int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "Substring", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex, length);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::IndexOf(char16_t value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextInfo::LastIndexOf(char16_t value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextInfo*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex);
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextInfo::TextInfo() {}
