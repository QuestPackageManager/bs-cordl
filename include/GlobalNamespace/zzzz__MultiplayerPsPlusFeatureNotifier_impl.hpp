#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPsPlusFeatureNotifier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPsPlusFeatureNotifier_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPsPlusFeatureNotifier::*)()>(
    &::GlobalNamespace::MultiplayerPsPlusFeatureNotifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3be4ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MultiplayerPsPlusFeatureNotifier::__cordl_internal_get__isSpectator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSpectator;
}
constexpr bool const& GlobalNamespace::MultiplayerPsPlusFeatureNotifier::__cordl_internal_get__isSpectator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSpectator;
}
constexpr void GlobalNamespace::MultiplayerPsPlusFeatureNotifier::__cordl_internal_set__isSpectator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSpectator = value;
}
inline void GlobalNamespace::MultiplayerPsPlusFeatureNotifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier* GlobalNamespace::MultiplayerPsPlusFeatureNotifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier::MultiplayerPsPlusFeatureNotifier() {}
