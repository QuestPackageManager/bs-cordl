#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_impl.hpp"
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
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager___c::*)()>(&::UnityEngine::Rendering::VolumeManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6781f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c._BuildVolumeComponentDisplayList_b__16_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::VolumeManager___c::*)(::System::ValueTuple_2<::StringW, ::System::Type*>)>(
    &::UnityEngine::Rendering::VolumeManager___c::_BuildVolumeComponentDisplayList_b__16_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6781f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(),
                                                             { "<BuildVolumeComponentDisplayList>b__16_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, ::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c._SetCustomDefaultProfiles_b__49_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeManager___c::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager___c::_SetCustomDefaultProfiles_b__49_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6781f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(),
                                                             { "<SetCustomDefaultProfiles>b__49_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c._GetVolumes_b__71_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeManager___c::*)(::UnityEngine::Rendering::Volume*)>(
    &::UnityEngine::Rendering::VolumeManager___c::_GetVolumes_b__71_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6781fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(), { "<GetVolumes>b__71_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c.__cctor_b__74_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VolumeManager* (::UnityEngine::Rendering::VolumeManager___c::*)()>(
    &::UnityEngine::Rendering::VolumeManager___c::__cctor_b__74_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x678204c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(), { "<.cctor>b__74_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::VolumeManager___c::setStaticF___9(::UnityEngine::Rendering::VolumeManager___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::VolumeManager___c*, "<>9", ::UnityEngine::Rendering::VolumeManager___c*>(
      std::forward<::UnityEngine::Rendering::VolumeManager___c*>(value));
}
inline ::UnityEngine::Rendering::VolumeManager___c* UnityEngine::Rendering::VolumeManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VolumeManager___c*, "<>9", ::UnityEngine::Rendering::VolumeManager___c*>();
}
inline void UnityEngine::Rendering::VolumeManager___c::setStaticF___9__16_0(::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>*, "<>9__16_0", ::UnityEngine::Rendering::VolumeManager___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>* UnityEngine::Rendering::VolumeManager___c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>*, "<>9__16_0", ::UnityEngine::Rendering::VolumeManager___c*>();
}
inline void UnityEngine::Rendering::VolumeManager___c::setStaticF___9__49_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*, "<>9__49_0", ::UnityEngine::Rendering::VolumeManager___c*>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* UnityEngine::Rendering::VolumeManager___c::getStaticF___9__49_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*, "<>9__49_0", ::UnityEngine::Rendering::VolumeManager___c*>();
}
inline void UnityEngine::Rendering::VolumeManager___c::setStaticF___9__71_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>*, "<>9__71_0", ::UnityEngine::Rendering::VolumeManager___c*>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* UnityEngine::Rendering::VolumeManager___c::getStaticF___9__71_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>*, "<>9__71_0", ::UnityEngine::Rendering::VolumeManager___c*>();
}
inline void UnityEngine::Rendering::VolumeManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::VolumeManager___c::_BuildVolumeComponentDisplayList_b__16_0(::System::ValueTuple_2<::StringW, ::System::Type*> i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(),
                                                           { "<BuildVolumeComponentDisplayList>b__16_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, ::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline bool UnityEngine::Rendering::VolumeManager___c::_SetCustomDefaultProfiles_b__49_0(::UnityEngine::Rendering::VolumeProfile* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(),
                                                                                         { "<SetCustomDefaultProfiles>b__49_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool UnityEngine::Rendering::VolumeManager___c::_GetVolumes_b__71_0(::UnityEngine::Rendering::Volume* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(), { "<GetVolumes>b__71_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, v);
}
inline ::UnityEngine::Rendering::VolumeManager* UnityEngine::Rendering::VolumeManager___c::__cctor_b__74_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c*>(), { "<.cctor>b__74_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeManager*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeManager___c* UnityEngine::Rendering::VolumeManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeManager___c*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::*)()>(
    &::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67820a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1._EvaluateVolumeDefaultState_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::*)(::UnityEngine::Rendering::VolumeComponent*)>(
    &::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::_EvaluateVolumeDefaultState_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67820a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>(),
                                                             { "<EvaluateVolumeDefaultState>b__1", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeComponent*>() } })));
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
  this->___profileComponent = value;
}
inline void UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::_EvaluateVolumeDefaultState_b__1(::UnityEngine::Rendering::VolumeComponent* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>(),
                                                           { "<EvaluateVolumeDefaultState>b__1", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeComponent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1* UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_1::VolumeManager___c__DisplayClass58_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int32_t)>(
    &::UnityEngine::Rendering::VolumeManager::Register)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x676a62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                           { "Register", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int32_t)>(
    &::UnityEngine::Rendering::VolumeManager::Unregister)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x676a8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                           { "Unregister", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VolumeManager* (*)()>(&::UnityEngine::Rendering::VolumeManager::get_instance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6757d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_stack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VolumeStack* (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::get_stack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676ab74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_stack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_stack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::set_stack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676ab7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "set_stack", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_baseComponentTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_baseComponentTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676ab84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_baseComponentTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.GetVolumeComponentsForDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (
    ::UnityEngine::Rendering::VolumeManager::*)(::System::Type*)>(&::UnityEngine::Rendering::VolumeManager::GetVolumeComponentsForDisplay)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6757de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "GetVolumeComponentsForDisplay", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.BuildVolumeComponentDisplayList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (
    ::UnityEngine::Rendering::VolumeManager::*)(::ArrayW<::System::Type*>)>(&::UnityEngine::Rendering::VolumeManager::BuildVolumeComponentDisplayList)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x676b0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "BuildVolumeComponentDisplayList", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_baseComponentTypeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_baseComponentTypeArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_baseComponentTypeArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_baseComponentTypeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::ArrayW<::System::Type*>)>(
    &::UnityEngine::Rendering::VolumeManager::set_baseComponentTypeArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "set_baseComponentTypeArray", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_globalDefaultProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_globalDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_globalDefaultProfile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_globalDefaultProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::set_globalDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                           { "set_globalDefaultProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_qualityDefaultProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::VolumeManager::*)()>(
    &::UnityEngine::Rendering::VolumeManager::get_qualityDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_qualityDefaultProfile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_qualityDefaultProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::set_qualityDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                           { "set_qualityDefaultProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_customDefaultProfiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* (
    ::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::get_customDefaultProfiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_customDefaultProfiles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_customDefaultProfiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*)>(&::UnityEngine::Rendering::VolumeManager::set_customDefaultProfiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                            { "set_customDefaultProfiles", {}, { ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.GetVolumeComponentDefaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (::UnityEngine::Rendering::VolumeManager::*)(::System::Type*)>(
    &::UnityEngine::Rendering::VolumeManager::GetVolumeComponentDefaultState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x676b4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "GetVolumeComponentDefaultState", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x676b5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.get_isInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_isInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.set_isInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(bool)>(&::UnityEngine::Rendering::VolumeManager::set_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676b6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "set_isInitialized", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*, ::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x676b6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Deinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::Deinitialize)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x676c0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "Deinitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.SetGlobalDefaultProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::SetGlobalDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                           { "SetGlobalDefaultProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.SetQualityDefaultProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::SetQualityDefaultProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676c2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                           { "SetQualityDefaultProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.SetCustomDefaultProfiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*)>(
    &::UnityEngine::Rendering::VolumeManager::SetCustomDefaultProfiles)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x676c2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                { "SetCustomDefaultProfiles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.OnVolumeProfileChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::VolumeManager::OnVolumeProfileChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x676c488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                           { "OnVolumeProfileChanged", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.OnVolumeComponentChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeComponent*)>(
    &::UnityEngine::Rendering::VolumeManager::OnVolumeComponentChanged)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x676c574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                           { "OnVolumeComponentChanged", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeComponent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.CreateStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VolumeStack* (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::CreateStack)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x676c014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "CreateStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.ResetMainStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::ResetMainStack)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x676c7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "ResetMainStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.DestroyStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::DestroyStack)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x676c264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "DestroyStack", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeManager::*)(::System::Type*, ::System::Type*)>(
    &::UnityEngine::Rendering::VolumeManager::IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x676c804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                { "IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.LoadBaseTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::System::Type*)>(&::UnityEngine::Rendering::VolumeManager::LoadBaseTypes)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x676ab8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "LoadBaseTypes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.InitializeVolumeComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::InitializeVolumeComponents)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x676b754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "InitializeVolumeComponents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.EvaluateVolumeDefaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::EvaluateVolumeDefaultState)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x676b81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "EvaluateVolumeDefaultState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*)>(&::UnityEngine::Rendering::VolumeManager::Register)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x676a880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*)>(&::UnityEngine::Rendering::VolumeManager::Unregister)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x676ab24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "Unregister", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.SetLayerDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(int32_t)>(&::UnityEngine::Rendering::VolumeManager::SetLayerDirty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676cbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "SetLayerDirty", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.UpdateVolumeLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::VolumeManager::UpdateVolumeLayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                { "UpdateVolumeLayer", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.OverrideData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(
    ::UnityEngine::Rendering::VolumeStack*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*, float_t)>(
    &::UnityEngine::Rendering::VolumeManager::OverrideData)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x676cc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                { "OverrideData",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.ReplaceData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::ReplaceData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x676cd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "ReplaceData", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.CheckDefaultVolumeState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)()>(&::UnityEngine::Rendering::VolumeManager::CheckDefaultVolumeState)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x676cf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "CheckDefaultVolumeState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.CheckStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::CheckStack)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x676d00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "CheckStack", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.CheckUpdateRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::VolumeManager::CheckUpdateRequired)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x676d1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "CheckUpdateRequired", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Transform*, ::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::VolumeManager::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x676d234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                             { "Update", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Transform*, ::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::VolumeManager::Update)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x676d248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                            { "Update", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.GetVolumes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>> (::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::VolumeManager::GetVolumes)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x676d850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "GetVolumes", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.GrabVolumes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* (
    ::UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::VolumeManager::GrabVolumes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x676d834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "GrabVolumes", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager.IsVolumeRenderedByCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Volume*, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::VolumeManager::IsVolumeRenderedByCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676d998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                             { "IsVolumeRenderedByCamera", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeManager._EvaluateVolumeDefaultState_g__ApplyDefaultProfile_58_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::VolumeProfile*, ::by_ref<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0>)>(
    &::UnityEngine::Rendering::VolumeManager::_EvaluateVolumeDefaultState_g__ApplyDefaultProfile_58_0)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x676c9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                            { "<EvaluateVolumeDefaultState>g__ApplyDefaultProfile|58_0",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0>>() } })));
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
  this->____stack_k__BackingField = value;
}
constexpr ::ArrayW<::System::Type*>& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__baseComponentTypeArray_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseComponentTypeArray_k__BackingField;
}
constexpr ::ArrayW<::System::Type*> const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get__baseComponentTypeArray_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseComponentTypeArray_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set__baseComponentTypeArray_k__BackingField(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseComponentTypeArray_k__BackingField = value;
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
  this->____globalDefaultProfile_k__BackingField = value;
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
  this->____qualityDefaultProfile_k__BackingField = value;
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
  this->____customDefaultProfiles_k__BackingField = value;
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
  this->___m_VolumeCollection = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>>& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_ComponentsDefaultState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComponentsDefaultState;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>> const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_ComponentsDefaultState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComponentsDefaultState;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set_m_ComponentsDefaultState(::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ComponentsDefaultState = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*>& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_ParametersDefaultState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParametersDefaultState;
}
constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*> const& UnityEngine::Rendering::VolumeManager::__cordl_internal_get_m_ParametersDefaultState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParametersDefaultState;
}
constexpr void UnityEngine::Rendering::VolumeManager::__cordl_internal_set_m_ParametersDefaultState(::ArrayW<::UnityEngine::Rendering::VolumeParameter*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParametersDefaultState = value;
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
  this->___m_TempColliders = value;
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
  this->___m_DefaultStack = value;
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
  this->___m_CreatedVolumeStacks = value;
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
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerUpdate", ::UnityEngine::Rendering::VolumeManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Rendering::VolumeManager::getStaticF_k_ProfilerMarkerUpdate() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerUpdate", ::UnityEngine::Rendering::VolumeManager*>();
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_k_ProfilerMarkerReplaceData(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerReplaceData", ::UnityEngine::Rendering::VolumeManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Rendering::VolumeManager::getStaticF_k_ProfilerMarkerReplaceData() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerReplaceData", ::UnityEngine::Rendering::VolumeManager*>();
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_k_ProfilerMarkerEvaluateVolumeDefaultState(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerEvaluateVolumeDefaultState", ::UnityEngine::Rendering::VolumeManager*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Rendering::VolumeManager::getStaticF_k_ProfilerMarkerEvaluateVolumeDefaultState() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ProfilerMarkerEvaluateVolumeDefaultState", ::UnityEngine::Rendering::VolumeManager*>();
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>*, "s_Instance", ::UnityEngine::Rendering::VolumeManager*>(
      std::forward<::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>*>(value));
}
inline ::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* UnityEngine::Rendering::VolumeManager::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>*, "s_Instance", ::UnityEngine::Rendering::VolumeManager*>();
}
inline void UnityEngine::Rendering::VolumeManager::setStaticF_s_SupportedVolumeComponentsForRenderPipeline(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*,
                                    "s_SupportedVolumeComponentsForRenderPipeline", ::UnityEngine::Rendering::VolumeManager*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*
UnityEngine::Rendering::VolumeManager::getStaticF_s_SupportedVolumeComponentsForRenderPipeline() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*,
                                           "s_SupportedVolumeComponentsForRenderPipeline", ::UnityEngine::Rendering::VolumeManager*>();
}
inline void UnityEngine::Rendering::VolumeManager::Register(::UnityEngine::Rendering::Volume* volume, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                         { "Register", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, layer);
}
inline void UnityEngine::Rendering::VolumeManager::Unregister(::UnityEngine::Rendering::Volume* volume, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                         { "Unregister", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, layer);
}
inline ::UnityEngine::Rendering::VolumeManager* UnityEngine::Rendering::VolumeManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeManager*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::VolumeManager::get_stack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_stack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeStack*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_stack(::UnityEngine::Rendering::VolumeStack* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "set_stack", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::VolumeManager::get_baseComponentTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_baseComponentTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*
UnityEngine::Rendering::VolumeManager::GetVolumeComponentsForDisplay(::System::Type* currentPipelineAssetType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "GetVolumeComponentsForDisplay", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>(this, ___internal_method, currentPipelineAssetType);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*
UnityEngine::Rendering::VolumeManager::BuildVolumeComponentDisplayList(::ArrayW<::System::Type*> types) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "BuildVolumeComponentDisplayList", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>(this, ___internal_method, types);
}
inline ::ArrayW<::System::Type*> UnityEngine::Rendering::VolumeManager::get_baseComponentTypeArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_baseComponentTypeArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_baseComponentTypeArray(::ArrayW<::System::Type*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "set_baseComponentTypeArray", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::VolumeManager::get_globalDefaultProfile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_globalDefaultProfile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_globalDefaultProfile(::UnityEngine::Rendering::VolumeProfile* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                         { "set_globalDefaultProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::VolumeManager::get_qualityDefaultProfile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_qualityDefaultProfile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_qualityDefaultProfile(::UnityEngine::Rendering::VolumeProfile* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                         { "set_qualityDefaultProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* UnityEngine::Rendering::VolumeManager::get_customDefaultProfiles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_customDefaultProfiles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_customDefaultProfiles(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                          { "set_customDefaultProfiles", {}, { ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> UnityEngine::Rendering::VolumeManager::GetVolumeComponentDefaultState(::System::Type* volumeComponentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "GetVolumeComponentDefaultState", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeComponent>>(this, ___internal_method, volumeComponentType);
}
inline void UnityEngine::Rendering::VolumeManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeManager::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "get_isInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::set_isInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "set_isInitialized", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::VolumeManager::Initialize(::UnityEngine::Rendering::VolumeProfile* globalDefaultVolumeProfile,
                                                              ::UnityEngine::Rendering::VolumeProfile* qualityDefaultVolumeProfile) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                              { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, globalDefaultVolumeProfile, qualityDefaultVolumeProfile);
}
inline void UnityEngine::Rendering::VolumeManager::Deinitialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "Deinitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::SetGlobalDefaultProfile(::UnityEngine::Rendering::VolumeProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                         { "SetGlobalDefaultProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profile);
}
inline void UnityEngine::Rendering::VolumeManager::SetQualityDefaultProfile(::UnityEngine::Rendering::VolumeProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                         { "SetQualityDefaultProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profile);
}
inline void UnityEngine::Rendering::VolumeManager::SetCustomDefaultProfiles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* profiles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                              { "SetCustomDefaultProfiles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profiles);
}
inline void UnityEngine::Rendering::VolumeManager::OnVolumeProfileChanged(::UnityEngine::Rendering::VolumeProfile* profile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "OnVolumeProfileChanged", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profile);
}
inline void UnityEngine::Rendering::VolumeManager::OnVolumeComponentChanged(::UnityEngine::Rendering::VolumeComponent* component) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                                                         { "OnVolumeComponentChanged", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeComponent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::VolumeManager::CreateStack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "CreateStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeStack*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::ResetMainStack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "ResetMainStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::DestroyStack(::UnityEngine::Rendering::VolumeStack* stack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "DestroyStack", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack);
}
inline bool UnityEngine::Rendering::VolumeManager::IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline(::System::Type* t, ::System::Type* pipelineAssetType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                              { "IsSupportedByObsoleteVolumeComponentMenuForRenderPipeline", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t, pipelineAssetType);
}
inline void UnityEngine::Rendering::VolumeManager::LoadBaseTypes(::System::Type* pipelineAssetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "LoadBaseTypes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pipelineAssetType);
}
inline void UnityEngine::Rendering::VolumeManager::InitializeVolumeComponents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "InitializeVolumeComponents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::EvaluateVolumeDefaultState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "EvaluateVolumeDefaultState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::Register(::UnityEngine::Rendering::Volume* volume) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
inline void UnityEngine::Rendering::VolumeManager::Unregister(::UnityEngine::Rendering::Volume* volume) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "Unregister", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeManager::IsComponentActiveInMask(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "IsComponentActiveInMask", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerMask);
}
inline void UnityEngine::Rendering::VolumeManager::SetLayerDirty(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "SetLayerDirty", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layer);
}
inline void UnityEngine::Rendering::VolumeManager::UpdateVolumeLayer(::UnityEngine::Rendering::Volume* volume, int32_t prevLayer, int32_t newLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                              { "UpdateVolumeLayer", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, prevLayer, newLayer);
}
inline void UnityEngine::Rendering::VolumeManager::OverrideData(::UnityEngine::Rendering::VolumeStack* stack,
                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* components, float_t interpFactor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                              { "OverrideData",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack, components, interpFactor);
}
inline void UnityEngine::Rendering::VolumeManager::ReplaceData(::UnityEngine::Rendering::VolumeStack* stack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "ReplaceData", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack);
}
inline void UnityEngine::Rendering::VolumeManager::CheckDefaultVolumeState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "CheckDefaultVolumeState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeManager::CheckStack(::UnityEngine::Rendering::VolumeStack* stack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "CheckStack", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack);
}
inline bool UnityEngine::Rendering::VolumeManager::CheckUpdateRequired(::UnityEngine::Rendering::VolumeStack* stack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "CheckUpdateRequired", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stack);
}
inline void UnityEngine::Rendering::VolumeManager::Update(::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, layerMask);
}
inline void UnityEngine::Rendering::VolumeManager::Update(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                          { "Update", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack, trigger, layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>> UnityEngine::Rendering::VolumeManager::GetVolumes(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "GetVolumes", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>>>(this, ___internal_method, layerMask);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* UnityEngine::Rendering::VolumeManager::GrabVolumes(::UnityEngine::LayerMask mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(), { "GrabVolumes", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(this, ___internal_method, mask);
}
inline bool UnityEngine::Rendering::VolumeManager::IsVolumeRenderedByCamera(::UnityEngine::Rendering::Volume* volume, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                                           { "IsVolumeRenderedByCamera", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, volume, camera);
}
inline void UnityEngine::Rendering::VolumeManager::_EvaluateVolumeDefaultState_g__ApplyDefaultProfile_58_0(
    ::UnityEngine::Rendering::VolumeProfile* profile, ::by_ref<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeManager*>(),
                                       { "<EvaluateVolumeDefaultState>g__ApplyDefaultProfile|58_0",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VolumeManager___c__DisplayClass58_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, profile, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::VolumeManager* UnityEngine::Rendering::VolumeManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeManager::VolumeManager() {}
