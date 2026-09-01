#pragma once
// IWYU pragma private; include "TMPro\MarkToMarkAdjustmentRecord.hpp"
#include "TMPro/zzzz__GlyphAnchorPoint_impl.hpp"
#include "TMPro/zzzz__MarkPositionAdjustment_impl.hpp"
#include "TMPro/zzzz__MarkToMarkAdjustmentRecord_def.hpp"
#include "TMPro/zzzz__GlyphAnchorPoint_def.hpp"
#include "TMPro/zzzz__MarkPositionAdjustment_def.hpp"
//  Writing Method size for method: ::TMPro::MarkToMarkAdjustmentRecord.get_baseMarkGlyphID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::MarkToMarkAdjustmentRecord::*)()>(&::TMPro::MarkToMarkAdjustmentRecord::get_baseMarkGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "get_baseMarkGlyphID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkToMarkAdjustmentRecord.set_baseMarkGlyphID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkToMarkAdjustmentRecord::*)(uint32_t)>(&::TMPro::MarkToMarkAdjustmentRecord::set_baseMarkGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "set_baseMarkGlyphID", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkToMarkAdjustmentRecord.get_baseMarkGlyphAnchorPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::GlyphAnchorPoint (::TMPro::MarkToMarkAdjustmentRecord::*)()>(&::TMPro::MarkToMarkAdjustmentRecord::get_baseMarkGlyphAnchorPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "get_baseMarkGlyphAnchorPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkToMarkAdjustmentRecord.set_baseMarkGlyphAnchorPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkToMarkAdjustmentRecord::*)(::TMPro::GlyphAnchorPoint)>(&::TMPro::MarkToMarkAdjustmentRecord::set_baseMarkGlyphAnchorPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "set_baseMarkGlyphAnchorPoint", {}, { ::i2c::type_of<::TMPro::GlyphAnchorPoint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkToMarkAdjustmentRecord.get_combiningMarkGlyphID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::MarkToMarkAdjustmentRecord::*)()>(&::TMPro::MarkToMarkAdjustmentRecord::get_combiningMarkGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "get_combiningMarkGlyphID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkToMarkAdjustmentRecord.set_combiningMarkGlyphID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkToMarkAdjustmentRecord::*)(uint32_t)>(&::TMPro::MarkToMarkAdjustmentRecord::set_combiningMarkGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "set_combiningMarkGlyphID", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkToMarkAdjustmentRecord.get_combiningMarkPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::MarkPositionAdjustment (::TMPro::MarkToMarkAdjustmentRecord::*)()>(
    &::TMPro::MarkToMarkAdjustmentRecord::get_combiningMarkPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "get_combiningMarkPositionAdjustment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkToMarkAdjustmentRecord.set_combiningMarkPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkToMarkAdjustmentRecord::*)(::TMPro::MarkPositionAdjustment)>(
    &::TMPro::MarkToMarkAdjustmentRecord::set_combiningMarkPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(),
                                                                                           { "set_combiningMarkPositionAdjustment", {}, { ::i2c::type_of<::TMPro::MarkPositionAdjustment>() } })));
    return ___internal_method;
  }
};
inline uint32_t TMPro::MarkToMarkAdjustmentRecord::get_baseMarkGlyphID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "get_baseMarkGlyphID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void TMPro::MarkToMarkAdjustmentRecord::set_baseMarkGlyphID(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "set_baseMarkGlyphID", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::TMPro::GlyphAnchorPoint TMPro::MarkToMarkAdjustmentRecord::get_baseMarkGlyphAnchorPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "get_baseMarkGlyphAnchorPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::GlyphAnchorPoint>(*this, ___internal_method);
}
inline void TMPro::MarkToMarkAdjustmentRecord::set_baseMarkGlyphAnchorPoint(::TMPro::GlyphAnchorPoint value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "set_baseMarkGlyphAnchorPoint", {}, { ::i2c::type_of<::TMPro::GlyphAnchorPoint>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t TMPro::MarkToMarkAdjustmentRecord::get_combiningMarkGlyphID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "get_combiningMarkGlyphID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void TMPro::MarkToMarkAdjustmentRecord::set_combiningMarkGlyphID(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "set_combiningMarkGlyphID", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::TMPro::MarkPositionAdjustment TMPro::MarkToMarkAdjustmentRecord::get_combiningMarkPositionAdjustment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "get_combiningMarkPositionAdjustment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::MarkPositionAdjustment>(*this, ___internal_method);
}
inline void TMPro::MarkToMarkAdjustmentRecord::set_combiningMarkPositionAdjustment(::TMPro::MarkPositionAdjustment value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::MarkToMarkAdjustmentRecord>(), { "set_combiningMarkPositionAdjustment", {}, { ::i2c::type_of<::TMPro::MarkPositionAdjustment>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_BaseMarkGlyphID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BaseMarkGlyphAnchorPoint", ty: "::TMPro::GlyphAnchorPoint",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CombiningMarkGlyphID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CombiningMarkPositionAdjustment", ty:
// "::TMPro::MarkPositionAdjustment", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::MarkToMarkAdjustmentRecord::MarkToMarkAdjustmentRecord(uint32_t m_BaseMarkGlyphID, ::TMPro::GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint, uint32_t m_CombiningMarkGlyphID,
                                                                          ::TMPro::MarkPositionAdjustment m_CombiningMarkPositionAdjustment) noexcept {
  this->m_BaseMarkGlyphID = m_BaseMarkGlyphID;
  this->m_BaseMarkGlyphAnchorPoint = m_BaseMarkGlyphAnchorPoint;
  this->m_CombiningMarkGlyphID = m_CombiningMarkGlyphID;
  this->m_CombiningMarkPositionAdjustment = m_CombiningMarkPositionAdjustment;
}
// Ctor Parameters []
constexpr ::TMPro::MarkToMarkAdjustmentRecord::MarkToMarkAdjustmentRecord() {}
