#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO.get_bloomPrePassEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BloomPrePassEffectSO> (::GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(
    &::GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ca288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                                                                               "get_bloomPrePassEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassEffectContainerSO::*)(::GlobalNamespace::BloomPrePassEffectSO*)>(
    &::GlobalNamespace::BloomPrePassEffectContainerSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ca290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassEffectSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(
    &::GlobalNamespace::BloomPrePassEffectContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ca298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& GlobalNamespace::BloomPrePassEffectContainerSO::__cordl_internal_get__bloomPrePassEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffect;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& GlobalNamespace::BloomPrePassEffectContainerSO::__cordl_internal_get__bloomPrePassEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffect;
}
constexpr void GlobalNamespace::BloomPrePassEffectContainerSO::__cordl_internal_set__bloomPrePassEffect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                                                                             "get_bloomPrePassEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassEffectContainerSO::Init(::GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassEffectSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bloomPrePassEffect);
}
inline ::GlobalNamespace::BloomPrePassEffectContainerSO* GlobalNamespace::BloomPrePassEffectContainerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassEffectContainerSO*>());
}
inline void GlobalNamespace::BloomPrePassEffectContainerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO::BloomPrePassEffectContainerSO() {}
