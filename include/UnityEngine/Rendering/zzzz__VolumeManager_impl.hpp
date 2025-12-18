#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeCollection_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager___c::*)()>(&::UnityEngine::Rendering::VolumeManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65d0630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c._BuildVolumeComponentDisplayList_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::VolumeManager___c::*)(::System::ValueTuple_2<::StringW, ::System::Type*>)>(
    &::UnityEngine::Rendering::VolumeManager___c::_BuildVolumeComponentDisplayList_b__16_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65d0634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(), "<BuildVolumeComponentDisplayList>b__16_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::System::Type*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c._SetCustomDefaultProfiles_b__49_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeManager___c::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager___c::_SetCustomDefaultProfiles_b__49_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65d063c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(), "<SetCustomDefaultProfiles>b__49_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c._GetVolumes_b__71_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeManager___c::*)(::UnityEngine::Rendering::Volume*)>(
    &::UnityEngine::Rendering::VolumeManager___c::_GetVolumes_b__71_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65d069c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(), "<GetVolumes>b__71_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c.__cctor_b__74_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeManager* (::UnityEngine::Rendering::VolumeManager___c::*)()>(
    &::UnityEngine::Rendering::VolumeManager___c::__cctor_b__74_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65d06fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(),
                                                                               "<.cctor>b__74_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::VolumeManager___c::setStaticF___9(::UnityEngine::Rendering::VolumeManager___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::VolumeManager___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get>(
      std::forward<::UnityEngine::Rendering::VolumeManager___c*>(value));
}
inline ::UnityEngine::Rendering::VolumeManager___c* UnityEngine::Rendering::VolumeManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VolumeManager___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager___c::setStaticF___9__16_0(::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>*, "<>9__16_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>* UnityEngine::Rendering::VolumeManager___c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>*, "<>9__16_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager___c::setStaticF___9__49_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*, "<>9__49_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* UnityEngine::Rendering::VolumeManager___c::getStaticF___9__49_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*, "<>9__49_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager___c::setStaticF___9__71_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>*, "<>9__71_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* UnityEngine::Rendering::VolumeManager___c::getStaticF___9__71_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>*, "<>9__71_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::VolumeManager___c::_BuildVolumeComponentDisplayList_b__16_0(::System::ValueTuple_2<::StringW, ::System::Type*> i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(), "<BuildVolumeComponentDisplayList>b__16_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::System::Type*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline bool UnityEngine::Rendering::VolumeManager___c::_SetCustomDefaultProfiles_b__49_0(::UnityEngine::Rendering::VolumeProfile* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(), "<SetCustomDefaultProfiles>b__49_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool UnityEngine::Rendering::VolumeManager___c::_GetVolumes_b__71_0(::UnityEngine::Rendering::Volume* v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(), "<GetVolumes>b__71_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, v);
}
inline ::UnityEngine::Rendering::VolumeManager* UnityEngine::Rendering::VolumeManager___c::__cctor_b__74_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c*>::get(),
                                                                             "<.cctor>b__74_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeManager*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeManager___c* UnityEngine::Rendering::VolumeManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::VolumeManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeManager___c::VolumeManager___c() {}
// Ctor Parameters [CppParam { name: "componentsDefaultStateList", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0::VolumeManager___c__DisplayClass58_0(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* componentsDefaultStateList) noexcept {
  this->componentsDefaultStateList = componentsDefaultStateList;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0::VolumeManager___c__DisplayClass58_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::*)()>(
    &::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65d0754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1._EvaluateVolumeDefaultState_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::*)(::UnityEngine::Rendering::VolumeComponent*)>(
    &::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::_EvaluateVolumeDefaultState_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65d0758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>::get(), "<EvaluateVolumeDefaultState>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeComponent*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::VolumeComponent>& UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::__cordl_internal_get_profileComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profileComponent;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeComponent> const& UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::__cordl_internal_get_profileComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profileComponent;
}
constexpr void UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::__cordl_internal_set_profileComponent(::UnityW<::UnityEngine::Rendering::VolumeComponent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___profileComponent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::_EvaluateVolumeDefaultState_b__1(::UnityEngine::Rendering::VolumeComponent* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>::get(), "<EvaluateVolumeDefaultState>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeComponent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1* UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::VolumeManager___c__DisplayClass58_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int32_t)>(
    &::UnityEngine::Rendering::VolumeManager::Register)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x65b8cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Unregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int32_t)>(
    &::UnityEngine::Rendering::VolumeManager::Unregister)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x65b8f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeManager* (*)()>(&::UnityEngine::Rendering::VolumeManager::get_instance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65a63ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "get_instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_stack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeStack* (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_stack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "get_stack",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_stack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::set_stack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b922c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_stack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_baseComponentTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_baseComponentTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "get_baseComponentTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.GetVolumeComponentsForDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (
    ::UnityEngine::Rendering::VolumeManager::*)(::System::Type*)>(&::UnityEngine::Rendering::VolumeManager::GetVolumeComponentsForDisplay)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x65a6494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "GetVolumeComponentsForDisplay",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.BuildVolumeComponentDisplayList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (
    ::UnityEngine::Rendering::VolumeManager::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::Rendering::VolumeManager::BuildVolumeComponentDisplayList)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x65b975c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "BuildVolumeComponentDisplayList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_baseComponentTypeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_baseComponentTypeArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "get_baseComponentTypeArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_baseComponentTypeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::UnityEngine::Rendering::VolumeManager::set_baseComponentTypeArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_baseComponentTypeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_globalDefaultProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_globalDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "get_globalDefaultProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_globalDefaultProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::set_globalDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_globalDefaultProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_qualityDefaultProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_qualityDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "get_qualityDefaultProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_qualityDefaultProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::set_qualityDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_qualityDefaultProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_customDefaultProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* (
    ::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::get_customDefaultProfiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "get_customDefaultProfiles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_customDefaultProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*)>(&::UnityEngine::Rendering::VolumeManager::set_customDefaultProfiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_customDefaultProfiles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.GetVolumeComponentDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (::UnityEngine::Rendering::VolumeManager::*)(::System::Type*)>(
    &::UnityEngine::Rendering::VolumeManager::GetVolumeComponentDefaultState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65b9b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "GetVolumeComponentDefaultState",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x65b9c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(bool)>(
    &::UnityEngine::Rendering::VolumeManager::set_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b9d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_isInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(
    ::UnityEngine::Rendering::VolumeProfile*, ::UnityEngine::Rendering::VolumeProfile*)>(&::UnityEngine::Rendering::VolumeManager::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65b9d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Deinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::Deinitialize)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x65ba7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Deinitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.SetGlobalDefaultProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::SetGlobalDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ba98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "SetGlobalDefaultProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.SetQualityDefaultProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::SetQualityDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ba994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "SetQualityDefaultProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.SetCustomDefaultProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*)>(&::UnityEngine::Rendering::VolumeManager::SetCustomDefaultProfiles)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x65ba99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "SetCustomDefaultProfiles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.OnVolumeProfileChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::OnVolumeProfileChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x65bab38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "OnVolumeProfileChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.OnVolumeComponentChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeComponent*)>(
    &::UnityEngine::Rendering::VolumeManager::OnVolumeComponentChanged)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x65bac24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "OnVolumeComponentChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeComponent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.CreateStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeStack* (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::CreateStack)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65ba6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "CreateStack",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.ResetMainStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::ResetMainStack)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65baea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "ResetMainStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.DestroyStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::DestroyStack)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65ba914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "DestroyStack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeManager::*)(::System::Type*, ::System::Type*)>(
    &::UnityEngine::Rendering::VolumeManager::IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x65baeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.LoadBaseTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::System::Type*)>(
    &::UnityEngine::Rendering::VolumeManager::LoadBaseTypes)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x65b923c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "LoadBaseTypes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.InitializeVolumeComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::InitializeVolumeComponents)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65b9e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "InitializeVolumeComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.EvaluateVolumeDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::EvaluateVolumeDefaultState)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x65b9ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "EvaluateVolumeDefaultState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*)>(
    &::UnityEngine::Rendering::VolumeManager::Register)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65b8f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Unregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*)>(
    &::UnityEngine::Rendering::VolumeManager::Unregister)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65b91d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.SetLayerDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(int32_t)>(
    &::UnityEngine::Rendering::VolumeManager::SetLayerDirty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65bb298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "SetLayerDirty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.UpdateVolumeLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::VolumeManager::UpdateVolumeLayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65bb2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "UpdateVolumeLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.OverrideData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(
    ::UnityEngine::Rendering::VolumeStack*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*, float_t)>(
    &::UnityEngine::Rendering::VolumeManager::OverrideData)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x65bb2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "OverrideData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.ReplaceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::ReplaceData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x65bb408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "ReplaceData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.CheckDefaultVolumeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::CheckDefaultVolumeState)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65bb628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                               "CheckDefaultVolumeState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.CheckStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::CheckStack)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x65bb6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "CheckStack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.CheckUpdateRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::CheckUpdateRequired)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x65bb890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "CheckUpdateRequired", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Transform*, ::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::VolumeManager::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65bb8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(
    ::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Transform*, ::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::VolumeManager::Update)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x65bb8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.GetVolumes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> (
    ::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::VolumeManager::GetVolumes)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x65bbf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "GetVolumes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.GrabVolumes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* (
    ::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::VolumeManager::GrabVolumes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65bbee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "GrabVolumes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.IsVolumeRenderedByCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Volume*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::VolumeManager::IsVolumeRenderedByCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65bc048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "IsVolumeRenderedByCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager._EvaluateVolumeDefaultState_g__ApplyDefaultProfile_58_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::VolumeProfile*, ::ByRef<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0>)>(
        &::UnityEngine::Rendering::VolumeManager::_EvaluateVolumeDefaultState_g__ApplyDefaultProfile_58_0)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x65bb0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "<EvaluateVolumeDefaultState>g__ApplyDefaultProfile|58_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::VolumeStack*& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__stack_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack_k__BackingField;
}
constexpr ::UnityEngine::Rendering::VolumeStack* const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__stack_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set__stack_k__BackingField(::UnityEngine::Rendering::VolumeStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stack_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__baseComponentTypeArray_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseComponentTypeArray_k__BackingField;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__baseComponentTypeArray_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseComponentTypeArray_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set__baseComponentTypeArray_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____baseComponentTypeArray_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__globalDefaultProfile_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalDefaultProfile_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__globalDefaultProfile_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalDefaultProfile_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set__globalDefaultProfile_k__BackingField(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalDefaultProfile_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__qualityDefaultProfile_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____qualityDefaultProfile_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__qualityDefaultProfile_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____qualityDefaultProfile_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set__qualityDefaultProfile_k__BackingField(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____qualityDefaultProfile_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*&
UnityEngine::Rendering::VolumeManager::__cordl_internal_get__customDefaultProfiles_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customDefaultProfiles_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* const&
UnityEngine::Rendering::VolumeManager::__cordl_internal_get__customDefaultProfiles_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customDefaultProfiles_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set__customDefaultProfiles_k__BackingField(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customDefaultProfiles_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::VolumeCollection*& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_VolumeCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeCollection;
}
constexpr ::UnityEngine::Rendering::VolumeCollection* const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_VolumeCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeCollection;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set_m_VolumeCollection(::UnityEngine::Rendering::VolumeCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VolumeCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>, ::Array<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>&
UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_ComponentsDefaultState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComponentsDefaultState;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>, ::Array<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*> const&
UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_ComponentsDefaultState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComponentsDefaultState;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set_m_ComponentsDefaultState(
    ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>, ::Array<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ComponentsDefaultState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*, ::Array<::UnityEngine::Rendering::VolumeParameter*>*>&
UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_ParametersDefaultState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParametersDefaultState;
}
constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*, ::Array<::UnityEngine::Rendering::VolumeParameter*>*> const&
UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_ParametersDefaultState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParametersDefaultState;
}
constexpr void
UnityEngine::Rendering::VolumeManager::__cordl_internal_set_m_ParametersDefaultState(::ArrayW<::UnityEngine::Rendering::VolumeParameter*, ::Array<::UnityEngine::Rendering::VolumeParameter*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ParametersDefaultState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_TempColliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_TempColliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempColliders;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set_m_TempColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TempColliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::VolumeStack*& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_DefaultStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStack;
}
constexpr ::UnityEngine::Rendering::VolumeStack* const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_DefaultStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStack;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set_m_DefaultStack(::UnityEngine::Rendering::VolumeStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>*& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_CreatedVolumeStacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreatedVolumeStacks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_CreatedVolumeStacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreatedVolumeStacks;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set_m_CreatedVolumeStacks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CreatedVolumeStacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__isInitialized_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__isInitialized_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set__isInitialized_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized_k__BackingField = value;
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_k_ProfilerMarkerUpdate(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerUpdate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Rendering::VolumeManager::getStaticF_k_ProfilerMarkerUpdate() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerUpdate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_k_ProfilerMarkerReplaceData(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerReplaceData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Rendering::VolumeManager::getStaticF_k_ProfilerMarkerReplaceData() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerReplaceData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_k_ProfilerMarkerEvaluateVolumeDefaultState(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerEvaluateVolumeDefaultState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Rendering::VolumeManager::getStaticF_k_ProfilerMarkerEvaluateVolumeDefaultState() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerEvaluateVolumeDefaultState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>*, "s_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>(
      std::forward<::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>*>(value));
}
inline ::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* UnityEngine::Rendering::VolumeManager::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>*, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_s_SupportedVolumeComponentsForRenderPipeline(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*,
                                    "s_SupportedVolumeComponentsForRenderPipeline", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*
UnityEngine::Rendering::VolumeManager::getStaticF_s_SupportedVolumeComponentsForRenderPipeline() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*,
                                           "s_SupportedVolumeComponentsForRenderPipeline", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get>();
}
inline void UnityEngine::Rendering::VolumeManager::Register(::UnityEngine::Rendering::Volume* volume, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume, layer);
}
inline void UnityEngine::Rendering::VolumeManager::Unregister(::UnityEngine::Rendering::Volume* volume, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume, layer);
}
inline ::UnityEngine::Rendering::VolumeManager* UnityEngine::Rendering::VolumeManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeManager*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::VolumeManager::get_stack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "get_stack",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeStack*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_stack(::UnityEngine::Rendering::VolumeStack* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_stack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::VolumeManager::get_baseComponentTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "get_baseComponentTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*
UnityEngine::Rendering::VolumeManager::GetVolumeComponentsForDisplay(::System::Type* currentPipelineAssetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "GetVolumeComponentsForDisplay",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*, false>(this, ___internal_method, currentPipelineAssetType);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*
UnityEngine::Rendering::VolumeManager::BuildVolumeComponentDisplayList(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "BuildVolumeComponentDisplayList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*, false>(this, ___internal_method, types);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> UnityEngine::Rendering::VolumeManager::get_baseComponentTypeArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "get_baseComponentTypeArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_baseComponentTypeArray(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_baseComponentTypeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::VolumeManager::get_globalDefaultProfile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "get_globalDefaultProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_globalDefaultProfile(::UnityEngine::Rendering::VolumeProfile* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_globalDefaultProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::VolumeManager::get_qualityDefaultProfile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "get_qualityDefaultProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_qualityDefaultProfile(::UnityEngine::Rendering::VolumeProfile* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_qualityDefaultProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* UnityEngine::Rendering::VolumeManager::get_customDefaultProfiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "get_customDefaultProfiles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_customDefaultProfiles(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_customDefaultProfiles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> UnityEngine::Rendering::VolumeManager::GetVolumeComponentDefaultState(::System::Type* volumeComponentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "GetVolumeComponentDefaultState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeComponent>, false>(this, ___internal_method, volumeComponentType);
}
inline void UnityEngine::Rendering::VolumeManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeManager::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_isInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "set_isInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::VolumeManager::Initialize(::UnityEngine::Rendering::VolumeProfile* globalDefaultVolumeProfile,
                                                              ::UnityEngine::Rendering::VolumeProfile* qualityDefaultVolumeProfile) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, globalDefaultVolumeProfile, qualityDefaultVolumeProfile);
}
inline void UnityEngine::Rendering::VolumeManager::Deinitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Deinitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::SetGlobalDefaultProfile(::UnityEngine::Rendering::VolumeProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "SetGlobalDefaultProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline void UnityEngine::Rendering::VolumeManager::SetQualityDefaultProfile(::UnityEngine::Rendering::VolumeProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "SetQualityDefaultProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline void UnityEngine::Rendering::VolumeManager::SetCustomDefaultProfiles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* profiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "SetCustomDefaultProfiles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profiles);
}
inline void UnityEngine::Rendering::VolumeManager::OnVolumeProfileChanged(::UnityEngine::Rendering::VolumeProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "OnVolumeProfileChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline void UnityEngine::Rendering::VolumeManager::OnVolumeComponentChanged(::UnityEngine::Rendering::VolumeComponent* component) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "OnVolumeComponentChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeComponent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component);
}
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::VolumeManager::CreateStack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "CreateStack",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeStack*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::ResetMainStack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "ResetMainStack",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::DestroyStack(::UnityEngine::Rendering::VolumeStack* stack) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "DestroyStack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stack);
}
inline bool UnityEngine::Rendering::VolumeManager::IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline(::System::Type* t, ::System::Type* pipelineAssetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t, pipelineAssetType);
}
inline void UnityEngine::Rendering::VolumeManager::LoadBaseTypes(::System::Type* pipelineAssetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "LoadBaseTypes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pipelineAssetType);
}
inline void UnityEngine::Rendering::VolumeManager::InitializeVolumeComponents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "InitializeVolumeComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::EvaluateVolumeDefaultState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "EvaluateVolumeDefaultState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::Register(::UnityEngine::Rendering::Volume* volume) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void UnityEngine::Rendering::VolumeManager::Unregister(::UnityEngine::Rendering::Volume* volume) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeManager::IsComponentActiveInMask(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "IsComponentActiveInMask",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, layerMask);
}
inline void UnityEngine::Rendering::VolumeManager::SetLayerDirty(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "SetLayerDirty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layer);
}
inline void UnityEngine::Rendering::VolumeManager::UpdateVolumeLayer(::UnityEngine::Rendering::Volume* volume, int32_t prevLayer, int32_t newLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "UpdateVolumeLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume, prevLayer, newLayer);
}
inline void UnityEngine::Rendering::VolumeManager::OverrideData(::UnityEngine::Rendering::VolumeStack* stack,
                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* components, float_t interpFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "OverrideData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stack, components, interpFactor);
}
inline void UnityEngine::Rendering::VolumeManager::ReplaceData(::UnityEngine::Rendering::VolumeStack* stack) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "ReplaceData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stack);
}
inline void UnityEngine::Rendering::VolumeManager::CheckDefaultVolumeState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(),
                                                                             "CheckDefaultVolumeState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::CheckStack(::UnityEngine::Rendering::VolumeStack* stack) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "CheckStack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stack);
}
inline bool UnityEngine::Rendering::VolumeManager::CheckUpdateRequired(::UnityEngine::Rendering::VolumeStack* stack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "CheckUpdateRequired", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stack);
}
inline void UnityEngine::Rendering::VolumeManager::Update(::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trigger, layerMask);
}
inline void UnityEngine::Rendering::VolumeManager::Update(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stack, trigger, layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*>
UnityEngine::Rendering::VolumeManager::GetVolumes(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "GetVolumes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*>, false>(this, ___internal_method, layerMask);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* UnityEngine::Rendering::VolumeManager::GrabVolumes(::UnityEngine::LayerMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "GrabVolumes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*, false>(this, ___internal_method, mask);
}
inline bool UnityEngine::Rendering::VolumeManager::IsVolumeRenderedByCamera(::UnityEngine::Rendering::Volume* volume, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "IsVolumeRenderedByCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, volume, camera);
}
inline void UnityEngine::Rendering::VolumeManager::_EvaluateVolumeDefaultState_g__ApplyDefaultProfile_58_0(
    ::UnityEngine::Rendering::VolumeProfile* profile, ::ByRef<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeManager*>::get(), "<EvaluateVolumeDefaultState>g__ApplyDefaultProfile|58_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, profile, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::VolumeManager* UnityEngine::Rendering::VolumeManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::VolumeManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeManager::VolumeManager() {}
