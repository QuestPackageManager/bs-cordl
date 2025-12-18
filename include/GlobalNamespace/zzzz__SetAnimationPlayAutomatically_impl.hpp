#pragma once
// IWYU pragma private; include "GlobalNamespace/SetAnimationPlayAutomatically.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetAnimationPlayAutomatically_def.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)(::GlobalNamespace::DeterminismConfig*)>(
    &::GlobalNamespace::SetAnimationPlayAutomatically::Init)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x57da50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DeterminismConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)()>(
    &::GlobalNamespace::SetAnimationPlayAutomatically::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x57da698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically.OnDeterminismSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)(bool)>(
    &::GlobalNamespace::SetAnimationPlayAutomatically::OnDeterminismSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57da768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(), "OnDeterminismSet",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)()>(
    &::GlobalNamespace::SetAnimationPlayAutomatically::OnValidate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x57da788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)()>(
    &::GlobalNamespace::SetAnimationPlayAutomatically::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57da81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_get__animationToPlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationToPlay;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_get__animationToPlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationToPlay;
}
constexpr void GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_set__animationToPlay(::UnityW<::UnityEngine::Animation> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationToPlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DeterminismConfig*& GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_get__determinismConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr ::GlobalNamespace::DeterminismConfig* const& GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_get__determinismConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr void GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____determinismConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::Init(::GlobalNamespace::DeterminismConfig* determinismConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DeterminismConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, determinismConfig);
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::OnDeterminismSet(bool isDeterministic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(), "OnDeterminismSet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isDeterministic);
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(),
                                                                             "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetAnimationPlayAutomatically*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetAnimationPlayAutomatically* GlobalNamespace::SetAnimationPlayAutomatically::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SetAnimationPlayAutomatically*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetAnimationPlayAutomatically::SetAnimationPlayAutomatically() {}
