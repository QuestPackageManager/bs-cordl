#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BakedLightUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightUtils.ValidateLoadedEnvironmentScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::BakedLightUtils::ValidateLoadedEnvironmentScene)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x22f5e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get(), "ValidateLoadedEnvironmentScene",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BakedLightUtils::setStaticF__zWritePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_zWritePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__zWritePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_zWritePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilRefValuePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilRefValuePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilRefValuePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilRefValuePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilCompPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilCompPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilCompPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilCompPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilPassOpPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilPassOpPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilPassOpPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilPassOpPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>();
}
inline void GlobalNamespace::BakedLightUtils::ValidateLoadedEnvironmentScene(bool validateBakedGIEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get(), "ValidateLoadedEnvironmentScene",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, validateBakedGIEnabled);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedLightUtils::BakedLightUtils() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
