#pragma once
// IWYU pragma private; include "TMPro/TMP_GlyphPairAdjustmentRecord.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FontFeatureLookupFlags_impl.hpp"
#include "TMPro/zzzz__TMP_GlyphAdjustmentRecord_impl.hpp"
#include "TMPro/zzzz__TMP_GlyphPairAdjustmentRecord_def.hpp"
#include "TMPro/zzzz__FontFeatureLookupFlags_def.hpp"
#include "TMPro/zzzz__TMP_GlyphAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_GlyphPairAdjustmentRecord.get_firstAdjustmentRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_GlyphAdjustmentRecord (::TMPro::TMP_GlyphPairAdjustmentRecord::*)()>(
    &::TMPro::TMP_GlyphPairAdjustmentRecord::get_firstAdjustmentRecord)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6959754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "get_firstAdjustmentRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphPairAdjustmentRecord.set_firstAdjustmentRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphPairAdjustmentRecord::*)(::TMPro::TMP_GlyphAdjustmentRecord)>(
    &::TMPro::TMP_GlyphPairAdjustmentRecord::set_firstAdjustmentRecord)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6959768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "set_firstAdjustmentRecord", {}, { ::i2c::type_of<::TMPro::TMP_GlyphAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphPairAdjustmentRecord.get_secondAdjustmentRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_GlyphAdjustmentRecord (::TMPro::TMP_GlyphPairAdjustmentRecord::*)()>(
    &::TMPro::TMP_GlyphPairAdjustmentRecord::get_secondAdjustmentRecord)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x695977c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "get_secondAdjustmentRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphPairAdjustmentRecord.set_secondAdjustmentRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphPairAdjustmentRecord::*)(::TMPro::TMP_GlyphAdjustmentRecord)>(
    &::TMPro::TMP_GlyphPairAdjustmentRecord::set_secondAdjustmentRecord)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6959790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "set_secondAdjustmentRecord", {}, { ::i2c::type_of<::TMPro::TMP_GlyphAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphPairAdjustmentRecord.get_featureLookupFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::FontFeatureLookupFlags (::TMPro::TMP_GlyphPairAdjustmentRecord::*)()>(
    &::TMPro::TMP_GlyphPairAdjustmentRecord::get_featureLookupFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69597a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "get_featureLookupFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphPairAdjustmentRecord.set_featureLookupFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphPairAdjustmentRecord::*)(::TMPro::FontFeatureLookupFlags)>(
    &::TMPro::TMP_GlyphPairAdjustmentRecord::set_featureLookupFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69597ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "set_featureLookupFlags", {}, { ::i2c::type_of<::TMPro::FontFeatureLookupFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphPairAdjustmentRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphPairAdjustmentRecord::*)(::TMPro::TMP_GlyphAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord)>(
    &::TMPro::TMP_GlyphPairAdjustmentRecord::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x69597b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::TMPro::TMP_GlyphAdjustmentRecord>(), ::i2c::type_of<::TMPro::TMP_GlyphAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphPairAdjustmentRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphPairAdjustmentRecord::*)(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord)>(
    &::TMPro::TMP_GlyphPairAdjustmentRecord::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x69597d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
constexpr ::TMPro::TMP_GlyphAdjustmentRecord& TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_get_m_FirstAdjustmentRecord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstAdjustmentRecord;
}
constexpr ::TMPro::TMP_GlyphAdjustmentRecord const& TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_get_m_FirstAdjustmentRecord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstAdjustmentRecord;
}
constexpr void TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_set_m_FirstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstAdjustmentRecord = value;
}
constexpr ::TMPro::TMP_GlyphAdjustmentRecord& TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_get_m_SecondAdjustmentRecord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondAdjustmentRecord;
}
constexpr ::TMPro::TMP_GlyphAdjustmentRecord const& TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_get_m_SecondAdjustmentRecord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondAdjustmentRecord;
}
constexpr void TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_set_m_SecondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SecondAdjustmentRecord = value;
}
constexpr ::TMPro::FontFeatureLookupFlags& TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_get_m_FeatureLookupFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FeatureLookupFlags;
}
constexpr ::TMPro::FontFeatureLookupFlags const& TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_get_m_FeatureLookupFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FeatureLookupFlags;
}
constexpr void TMPro::TMP_GlyphPairAdjustmentRecord::__cordl_internal_set_m_FeatureLookupFlags(::TMPro::FontFeatureLookupFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FeatureLookupFlags = value;
}
inline ::TMPro::TMP_GlyphAdjustmentRecord TMPro::TMP_GlyphPairAdjustmentRecord::get_firstAdjustmentRecord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "get_firstAdjustmentRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_GlyphAdjustmentRecord>(this, ___internal_method);
}
inline void TMPro::TMP_GlyphPairAdjustmentRecord::set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "set_firstAdjustmentRecord", {}, { ::i2c::type_of<::TMPro::TMP_GlyphAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::TMPro::TMP_GlyphAdjustmentRecord TMPro::TMP_GlyphPairAdjustmentRecord::get_secondAdjustmentRecord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "get_secondAdjustmentRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_GlyphAdjustmentRecord>(this, ___internal_method);
}
inline void TMPro::TMP_GlyphPairAdjustmentRecord::set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "set_secondAdjustmentRecord", {}, { ::i2c::type_of<::TMPro::TMP_GlyphAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::TMPro::FontFeatureLookupFlags TMPro::TMP_GlyphPairAdjustmentRecord::get_featureLookupFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "get_featureLookupFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::FontFeatureLookupFlags>(this, ___internal_method);
}
inline void TMPro::TMP_GlyphPairAdjustmentRecord::set_featureLookupFlags(::TMPro::FontFeatureLookupFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(), { "set_featureLookupFlags", {}, { ::i2c::type_of<::TMPro::FontFeatureLookupFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void TMPro::TMP_GlyphPairAdjustmentRecord::_ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::TMPro::TMP_GlyphAdjustmentRecord>(), ::i2c::type_of<::TMPro::TMP_GlyphAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstAdjustmentRecord, secondAdjustmentRecord);
}
inline void TMPro::TMP_GlyphPairAdjustmentRecord::_ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glyphPairAdjustmentRecord);
}
inline ::TMPro::TMP_GlyphPairAdjustmentRecord* TMPro::TMP_GlyphPairAdjustmentRecord::New_ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord,
                                                                                              ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_GlyphPairAdjustmentRecord*>(firstAdjustmentRecord, secondAdjustmentRecord));
}
inline ::TMPro::TMP_GlyphPairAdjustmentRecord* TMPro::TMP_GlyphPairAdjustmentRecord::New_ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_GlyphPairAdjustmentRecord*>(glyphPairAdjustmentRecord));
}
// Ctor Parameters []
constexpr ::TMPro::TMP_GlyphPairAdjustmentRecord::TMP_GlyphPairAdjustmentRecord() {}
