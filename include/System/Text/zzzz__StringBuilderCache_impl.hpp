#pragma once
// IWYU pragma private; include "System/Text/StringBuilderCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__StringBuilderCache_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Text::StringBuilderCache.Acquire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)(int32_t)>(&::System::Text::StringBuilderCache::Acquire)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3c80c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::StringBuilderCache*>::get(), "Acquire", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilderCache.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::System::Text::StringBuilderCache::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3c80d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::StringBuilderCache*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilderCache.GetStringAndRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Text::StringBuilder*)>(&::System::Text::StringBuilderCache::GetStringAndRelease)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3c80dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::StringBuilderCache*>::get(), "GetStringAndRelease", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
inline void System::Text::StringBuilderCache::setStaticF_t_cachedInstance(::System::Text::StringBuilder* value) {
  ::cordl_internals::setStaticField<::System::Text::StringBuilder*, "t_cachedInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::StringBuilderCache*>::get>(
      std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilderCache::getStaticF_t_cachedInstance() {
  return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "t_cachedInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::StringBuilderCache*>::get>();
}
inline ::System::Text::StringBuilder* System::Text::StringBuilderCache::Acquire(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::StringBuilderCache*>::get(), "Acquire", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method, capacity);
}
inline void System::Text::StringBuilderCache::Release(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::StringBuilderCache*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb);
}
inline ::StringW System::Text::StringBuilderCache::GetStringAndRelease(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::StringBuilderCache*>::get(), "GetStringAndRelease", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Text::StringBuilderCache::StringBuilderCache() {}
