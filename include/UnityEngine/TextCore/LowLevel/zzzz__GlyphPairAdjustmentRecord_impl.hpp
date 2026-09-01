#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\LowLevel\GlyphPairAdjustmentRecord.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontFeatureLookupFlags_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAdjustmentRecord_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontFeatureLookupFlags_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAdjustmentRecord_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord.get_firstAdjustmentRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord (::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_firstAdjustmentRecord)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bc09b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), { "get_firstAdjustmentRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord.set_firstAdjustmentRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord)>(
    &::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::set_firstAdjustmentRecord)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bc09cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(),
                                                             { "set_firstAdjustmentRecord", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord.get_secondAdjustmentRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord (::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_secondAdjustmentRecord)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bc09e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), { "get_secondAdjustmentRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord.get_featureLookupFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags (::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_featureLookupFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc09f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), { "get_featureLookupFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)(
    ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord)>(&::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bc09fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(),
                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6bc0a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)(::System::Object*)>(
    &::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bc0a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord)>(
    &::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6bc0b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_firstAdjustmentRecord() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), { "get_firstAdjustmentRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::set_firstAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(),
                                                           { "set_firstAdjustmentRecord", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_secondAdjustmentRecord() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), { "get_secondAdjustmentRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(*this, ___internal_method);
}
inline ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_featureLookupFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), { "get_featureLookupFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::_ctor(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord firstAdjustmentRecord,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord secondAdjustmentRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(),
                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, firstAdjustmentRecord, secondAdjustmentRecord);
}
inline int32_t UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::Equals(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>"
constexpr UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*
UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::i___System__IEquatable_1___UnityEngine__TextCore__LowLevel__GlyphPairAdjustmentRecord_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_FirstAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_SecondAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FeatureLookupFlags", ty:
// "::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::GlyphPairAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord,
                                                                                                  ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord,
                                                                                                  ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags m_FeatureLookupFlags) noexcept {
  this->m_FirstAdjustmentRecord = m_FirstAdjustmentRecord;
  this->m_SecondAdjustmentRecord = m_SecondAdjustmentRecord;
  this->m_FeatureLookupFlags = m_FeatureLookupFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::GlyphPairAdjustmentRecord() {}
