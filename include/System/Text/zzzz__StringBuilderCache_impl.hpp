#pragma once
// IWYU pragma private; include "System/Text/StringBuilderCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__StringBuilderCache_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Text::StringBuilderCache.Acquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(int32_t)>(&::System::Text::StringBuilderCache::Acquire)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x61a27a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilderCache*>(), { "Acquire", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilderCache.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::System::Text::StringBuilderCache::Release)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x61a6748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilderCache*>(), { "Release", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilderCache.GetStringAndRelease
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Text::StringBuilder*)>(&::System::Text::StringBuilderCache::GetStringAndRelease)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x61a28c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilderCache*>(), { "GetStringAndRelease", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
inline void System::Text::StringBuilderCache::setStaticF_t_cachedInstance(::System::Text::StringBuilder* value) {
  ::cordl_internals::setStaticField<::System::Text::StringBuilder*, "t_cachedInstance", ::System::Text::StringBuilderCache*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilderCache::getStaticF_t_cachedInstance() {
  return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "t_cachedInstance", ::System::Text::StringBuilderCache*>();
}
inline ::System::Text::StringBuilder* System::Text::StringBuilderCache::Acquire(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilderCache*>(), { "Acquire", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, capacity);
}
inline void System::Text::StringBuilderCache::Release(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilderCache*>(), { "Release", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline ::StringW System::Text::StringBuilderCache::GetStringAndRelease(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilderCache*>(), { "GetStringAndRelease", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Text::StringBuilderCache::StringBuilderCache() {}
