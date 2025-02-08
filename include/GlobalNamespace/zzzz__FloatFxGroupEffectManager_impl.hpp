#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxGroupEffectManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectManager___c::*)()>(
    &::GlobalNamespace::FloatFxGroupEffectManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b92c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectManager___c._Start_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FloatFxGroupEffectManager___c::*)(::GlobalNamespace::FloatFxGroup*)>(
    &::GlobalNamespace::FloatFxGroupEffectManager___c::_Start_b__3_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b92c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager___c*>::get(), "<Start>b__3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroup*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FloatFxGroupEffectManager___c::setStaticF___9(::GlobalNamespace::FloatFxGroupEffectManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FloatFxGroupEffectManager___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager___c*>::get>(
      std::forward<::GlobalNamespace::FloatFxGroupEffectManager___c*>(value));
}
inline ::GlobalNamespace::FloatFxGroupEffectManager___c* GlobalNamespace::FloatFxGroupEffectManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FloatFxGroupEffectManager___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager___c*>::get>();
}
inline void GlobalNamespace::FloatFxGroupEffectManager___c::setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::FloatFxGroup>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::FloatFxGroup>, bool>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::FloatFxGroup>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::FloatFxGroup>, bool>* GlobalNamespace::FloatFxGroupEffectManager___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::FloatFxGroup>, bool>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager___c*>::get>();
}
inline void GlobalNamespace::FloatFxGroupEffectManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::FloatFxGroupEffectManager___c::_Start_b__3_0(::GlobalNamespace::FloatFxGroup* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager___c*>::get(), "<Start>b__3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, group);
}
inline ::GlobalNamespace::FloatFxGroupEffectManager___c* GlobalNamespace::FloatFxGroupEffectManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatFxGroupEffectManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffectManager___c::FloatFxGroupEffectManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectManager::*)()>(&::GlobalNamespace::FloatFxGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x3b922dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectManager::*)()>(&::GlobalNamespace::FloatFxGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3b9298c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectManager::*)()>(&::GlobalNamespace::FloatFxGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3b92b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroup>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroup>>*>& GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_get__floatFxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroup>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroup>>*> const&
GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_get__floatFxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxGroups;
}
constexpr void
GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_set__floatFxGroups(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroup>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroup>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatFxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffect*>*& GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_get__floatFxGroupEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxGroupEffects;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffect*>* const& GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_get__floatFxGroupEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxGroupEffects;
}
constexpr void GlobalNamespace::FloatFxGroupEffectManager::__cordl_internal_set__floatFxGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatFxGroupEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FloatFxGroupEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxGroupEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxGroupEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxGroupEffectManager* GlobalNamespace::FloatFxGroupEffectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatFxGroupEffectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffectManager::FloatFxGroupEffectManager() {}
