#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextCacheEntryNodeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCacheEntryNodeExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCacheEntry_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions.SetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*, float_t)>(
    &::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions::SetTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70641e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions*>(),
                            { "SetTime", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions.SetTextHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*,
                                                                ::UnityEngine::TextCore::Text::TextHandle*)>(&::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions::SetTextHandle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x7063ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions*>(),
                                                             { "SetTextHandle",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions::SetTime(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* node, float_t newTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions*>(),
                          { "SetTime", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, newTime);
}
inline void UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions::SetTextHandle(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* node,
                                                                                     ::UnityEngine::TextCore::Text::TextHandle* newTextHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions*>(),
                                                           { "SetTextHandle",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, newTextHandle);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions::TextCacheEntryNodeExtensions() {}
