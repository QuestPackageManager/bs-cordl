#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectCore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectCore_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectCore.SetGlobalShaderValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t)>(&::GlobalNamespace::MainEffectCore::SetGlobalShaderValues)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4081054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore*>::get(), "SetGlobalShaderValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectCore._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectCore::*)()>(&::GlobalNamespace::MainEffectCore::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4081a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectCore::setStaticF__baseColorBoostID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_baseColorBoostID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectCore::getStaticF__baseColorBoostID() {
  return ::cordl_internals::getStaticField<int32_t, "_baseColorBoostID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore*>::get>();
}
inline void GlobalNamespace::MainEffectCore::setStaticF__baseColorBoostThresholdID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_baseColorBoostThresholdID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectCore::getStaticF__baseColorBoostThresholdID() {
  return ::cordl_internals::getStaticField<int32_t, "_baseColorBoostThresholdID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore*>::get>();
}
inline void GlobalNamespace::MainEffectCore::SetGlobalShaderValues(float_t baseColorBoost, float_t baseColorBoostThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore*>::get(), "SetGlobalShaderValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseColorBoost, baseColorBoostThreshold);
}
inline void GlobalNamespace::MainEffectCore::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectCore* GlobalNamespace::MainEffectCore::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainEffectCore*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectCore::MainEffectCore() {}
