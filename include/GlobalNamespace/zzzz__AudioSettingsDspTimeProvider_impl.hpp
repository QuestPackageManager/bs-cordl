#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSettingsDspTimeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSettingsDspTimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__IDspTimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSettingsDspTimeProvider.get_dspTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::AudioSettingsDspTimeProvider::*)()>(
    &::GlobalNamespace::AudioSettingsDspTimeProvider::get_dspTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a7a11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioSettingsDspTimeProvider*>::get(),
                                                                               "get_dspTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSettingsDspTimeProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioSettingsDspTimeProvider::*)()>(
    &::GlobalNamespace::AudioSettingsDspTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a7a124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioSettingsDspTimeProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDspTimeProvider"
constexpr GlobalNamespace::AudioSettingsDspTimeProvider::operator ::GlobalNamespace::IDspTimeProvider*() noexcept {
  return static_cast<::GlobalNamespace::IDspTimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDspTimeProvider"
constexpr ::GlobalNamespace::IDspTimeProvider* GlobalNamespace::AudioSettingsDspTimeProvider::i___GlobalNamespace__IDspTimeProvider() noexcept {
  return static_cast<::GlobalNamespace::IDspTimeProvider*>(static_cast<void*>(this));
}
inline double_t GlobalNamespace::AudioSettingsDspTimeProvider::get_dspTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioSettingsDspTimeProvider*>::get(),
                                                                             "get_dspTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSettingsDspTimeProvider* GlobalNamespace::AudioSettingsDspTimeProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AudioSettingsDspTimeProvider*>());
}
inline void GlobalNamespace::AudioSettingsDspTimeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioSettingsDspTimeProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSettingsDspTimeProvider::AudioSettingsDspTimeProvider() {}
