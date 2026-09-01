#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedTransitionProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleCache.TryGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::StyleCache::TryGetValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6cce55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                             { "TryGetValue", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleCache.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::StyleCache::SetValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6cce5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                             { "SetValue", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleCache.TryGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::UIElements::StyleVariableContext*>)>(&::UnityEngine::UIElements::StyleCache::TryGetValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6cce6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                             { "TryGetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleVariableContext*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleCache.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::UIElements::StyleVariableContext*)>(&::UnityEngine::UIElements::StyleCache::SetValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6cce754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                             { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleCache.TryGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>)>(
    &::UnityEngine::UIElements::StyleCache::TryGetValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6cce7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                { "TryGetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleCache.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>)>(&::UnityEngine::UIElements::StyleCache::SetValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6cce894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                             { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleCache::setStaticF_s_ComputedStyleCache(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::UIElements::ComputedStyle>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::UIElements::ComputedStyle>*, "s_ComputedStyleCache", ::UnityEngine::UIElements::StyleCache*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::UIElements::ComputedStyle>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::UIElements::ComputedStyle>* UnityEngine::UIElements::StyleCache::getStaticF_s_ComputedStyleCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::UIElements::ComputedStyle>*, "s_ComputedStyleCache",
                                           ::UnityEngine::UIElements::StyleCache*>();
}
inline void
UnityEngine::UIElements::StyleCache::setStaticF_s_StyleVariableContextCache(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::StyleVariableContext*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::StyleVariableContext*>*, "s_StyleVariableContextCache",
                                    ::UnityEngine::UIElements::StyleCache*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::StyleVariableContext*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::StyleVariableContext*>* UnityEngine::UIElements::StyleCache::getStaticF_s_StyleVariableContextCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::StyleVariableContext*>*, "s_StyleVariableContextCache",
                                           ::UnityEngine::UIElements::StyleCache*>();
}
inline void UnityEngine::UIElements::StyleCache::setStaticF_s_ComputedTransitionsCache(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>*, "s_ComputedTransitionsCache",
                                    ::UnityEngine::UIElements::StyleCache*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>*
UnityEngine::UIElements::StyleCache::getStaticF_s_ComputedTransitionsCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>*, "s_ComputedTransitionsCache",
                                           ::UnityEngine::UIElements::StyleCache*>();
}
inline bool UnityEngine::UIElements::StyleCache::TryGetValue(int64_t hash, ::by_ref<::UnityEngine::UIElements::ComputedStyle> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                           { "TryGetValue", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash, data);
}
inline void UnityEngine::UIElements::StyleCache::SetValue(int64_t hash, ::by_ref<::UnityEngine::UIElements::ComputedStyle> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                           { "SetValue", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, data);
}
inline bool UnityEngine::UIElements::StyleCache::TryGetValue(int32_t hash, ::by_ref<::UnityEngine::UIElements::StyleVariableContext*> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                           { "TryGetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleVariableContext*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash, data);
}
inline void UnityEngine::UIElements::StyleCache::SetValue(int32_t hash, ::UnityEngine::UIElements::StyleVariableContext* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                           { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, data);
}
inline bool UnityEngine::UIElements::StyleCache::TryGetValue(int32_t hash, ::by_ref<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                              { "TryGetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash, data);
}
inline void UnityEngine::UIElements::StyleCache::SetValue(int32_t hash, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleCache*>(),
                                                           { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, data);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleCache::StyleCache() {}
