#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextCacheEntry.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCacheEntry_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextCacheEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextCacheEntry::*)(::UnityEngine::TextCore::Text::TextHandle*, ::UnityEngine::TextCore::Text::TextInfo*,
                                                                                                               float_t)>(&::UnityEngine::TextCore::Text::TextCacheEntry::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x7063fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextCacheEntry>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextCacheEntry::_ctor(::UnityEngine::TextCore::Text::TextHandle* handle, ::UnityEngine::TextCore::Text::TextInfo* info, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextCacheEntry>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, info, time);
}
// Ctor Parameters [CppParam { name: "textHandle", ty: "::UnityEngine::TextCore::Text::TextHandle*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textInfo", ty:
// "::UnityEngine::TextCore::Text::TextInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastTimeInCache", ty: "float_t", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::UnityEngine::TextCore::Text::TextCacheEntry::TextCacheEntry(::UnityEngine::TextCore::Text::TextHandle* textHandle, ::UnityEngine::TextCore::Text::TextInfo* textInfo,
                                                                        float_t lastTimeInCache) noexcept {
  this->textHandle = textHandle;
  this->textInfo = textInfo;
  this->lastTimeInCache = lastTimeInCache;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextCacheEntry::TextCacheEntry() {}
