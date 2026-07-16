#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphValueRecord_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAdjustmentRecord_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphValueRecord_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.get_glyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbd28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), { "get_glyphIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.get_glyphValueRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphValueRecord (::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphValueRecord)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bbd294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), { "get_glyphValueRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord)>(
    &::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bbd2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6bbd2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)(::System::Object*)>(
    &::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bbd31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord)>(
    &::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6bbd394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), { "get_glyphIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::TextCore::LowLevel::GlyphValueRecord UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphValueRecord() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), { "get_glyphValueRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::_ctor(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord glyphValueRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, glyphIndex, glyphValueRecord);
}
inline int32_t UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::Equals(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>"
constexpr UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>*
UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::i___System__IEquatable_1___UnityEngine__TextCore__LowLevel__GlyphAdjustmentRecord_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GlyphValueRecord", ty:
// "::UnityEngine::TextCore::LowLevel::GlyphValueRecord", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GlyphAdjustmentRecord(uint32_t m_GlyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord) noexcept {
  this->m_GlyphIndex = m_GlyphIndex;
  this->m_GlyphValueRecord = m_GlyphValueRecord;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GlyphAdjustmentRecord() {}
