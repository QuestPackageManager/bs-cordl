#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_impl.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_impl.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "System/zzzz__Action_8_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType::ObjectDispatcher_TransformTrackingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType::ObjectDispatcher_TransformTrackingType() {}
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType UnityEngine::ObjectDispatcher_TransformTrackingType::GlobalTRS{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType UnityEngine::ObjectDispatcher_TransformTrackingType::LocalTRS{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType UnityEngine::ObjectDispatcher_TransformTrackingType::Hierarchy{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags::ObjectDispatcher_TypeTrackingFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags::ObjectDispatcher_TypeTrackingFlags() {}
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::SceneObjects{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::Assets{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::EditorOnlyObjects{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::Default{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::All{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher___c::*)()>(&::UnityEngine::ObjectDispatcher___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x690b4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher___c.__cctor_b__64_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher___c::*)(
    ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*)>(
    &::UnityEngine::ObjectDispatcher___c::__cctor_b__64_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x690b4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher___c*>::get(), "<.cctor>b__64_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TypeDispatchData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher___c.__cctor_b__64_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher___c::*)(
    ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*)>(
    &::UnityEngine::ObjectDispatcher___c::__cctor_b__64_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x690b550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher___c*>::get(), "<.cctor>b__64_1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 8>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TransformDispatchData>*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ObjectDispatcher___c::setStaticF___9(::UnityEngine::ObjectDispatcher___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ObjectDispatcher___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher___c*>::get>(
      std::forward<::UnityEngine::ObjectDispatcher___c*>(value));
}
inline ::UnityEngine::ObjectDispatcher___c* UnityEngine::ObjectDispatcher___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ObjectDispatcher___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher___c*>::get>();
}
inline void UnityEngine::ObjectDispatcher___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher___c::__cctor_b__64_0(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> changed, ::System::IntPtr changedID, ::System::IntPtr destroyedID,
                                                               int32_t changedCount, int32_t destroyedCount, ::System::Action_1<::UnityEngine::TypeDispatchData>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher___c*>::get(), "<.cctor>b__64_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TypeDispatchData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, changed, changedID, destroyedID, changedCount, destroyedCount, callback);
}
inline void UnityEngine::ObjectDispatcher___c::__cctor_b__64_1(::System::IntPtr transformed, ::System::IntPtr parents, ::System::IntPtr localToWorldMatrices, ::System::IntPtr positions,
                                                               ::System::IntPtr rotations, ::System::IntPtr scales, int32_t count, ::System::Action_1<::UnityEngine::TransformDispatchData>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher___c*>::get(), "<.cctor>b__64_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TransformDispatchData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformed, parents, localToWorldMatrices, positions, rotations, scales, count, callback);
}
inline ::UnityEngine::ObjectDispatcher___c* UnityEngine::ObjectDispatcher___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ObjectDispatcher___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher___c::ObjectDispatcher___c() {}
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.get_valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6909cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "get_valid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6909ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6909ef0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6909fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(bool)>(&::UnityEngine::ObjectDispatcher::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6909f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.ValidateSystemHandleAndThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::ValidateSystemHandleAndThrow)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x690a064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(),
                                                                               "ValidateSystemHandleAndThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.ValidateTypeAndThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::System::Type*)>(&::UnityEngine::ObjectDispatcher::ValidateTypeAndThrow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x690a0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "ValidateTypeAndThrow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.ValidateComponentTypeAndThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::System::Type*)>(
    &::UnityEngine::ObjectDispatcher::ValidateComponentTypeAndThrow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x690a190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "ValidateComponentTypeAndThrow",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::UnityEngine::TypeDispatchData)>(
    &::UnityEngine::ObjectDispatcher::DispatchCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x690a264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TypeDispatchData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::UnityEngine::TransformDispatchData)>(
    &::UnityEngine::ObjectDispatcher::DispatchCallback)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x690a310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TransformDispatchData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*>)>(
    &::UnityEngine::ObjectDispatcher::DispatchCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690a48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchTypeChangesAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::System::Type*, ::System::Action_1<::UnityEngine::TypeDispatchData>*, bool,
                                                                                                                            bool)>(&::UnityEngine::ObjectDispatcher::DispatchTypeChangesAndClear)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x690a494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchTypeChangesAndClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TypeDispatchData>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchTransformChangesAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ObjectDispatcher::*)(::System::Type*, ::UnityEngine::ObjectDispatcher_TransformTrackingType, ::System::Action_1<::UnityEngine::TransformDispatchData>*)>(
        &::UnityEngine::ObjectDispatcher::DispatchTransformChangesAndClear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x690a5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchTransformChangesAndClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TransformDispatchData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.GetTypeChangesAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TypeDispatchData (::UnityEngine::ObjectDispatcher::*)(
    ::System::Type*, ::Unity::Collections::Allocator, bool, bool)>(&::UnityEngine::ObjectDispatcher::GetTypeChangesAndClear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x690a704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "GetTypeChangesAndClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.GetTransformChangesAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TransformDispatchData (::UnityEngine::ObjectDispatcher::*)(
    ::System::Type*, ::UnityEngine::ObjectDispatcher_TransformTrackingType, ::Unity::Collections::Allocator)>(&::UnityEngine::ObjectDispatcher::GetTransformChangesAndClear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x690a740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "GetTransformChangesAndClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.EnableTypeTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(
    ::UnityEngine::ObjectDispatcher_TypeTrackingFlags, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::ObjectDispatcher::EnableTypeTracking)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x690a778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTypeTracking", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.EnableTransformTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(
    ::UnityEngine::ObjectDispatcher_TransformTrackingType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::ObjectDispatcher::EnableTransformTracking)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x690a8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTransformTracking", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.CreateDispatchSystemHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::ObjectDispatcher::CreateDispatchSystemHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6909ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(),
                                                                               "CreateDispatchSystemHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DestroyDispatchSystemHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ObjectDispatcher::DestroyDispatchSystemHandle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x690a028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DestroyDispatchSystemHandle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.EnableTypeTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Type*, ::UnityEngine::ObjectDispatcher_TypeTrackingFlags)>(
    &::UnityEngine::ObjectDispatcher::EnableTypeTracking)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x690a87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTypeTracking", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.EnableTransformTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Type*, ::UnityEngine::ObjectDispatcher_TransformTrackingType)>(
    &::UnityEngine::ObjectDispatcher::EnableTransformTracking)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x690a9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTransformTracking", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchTypeChangesAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, ::System::Type*,
                         ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                                            ::System::Action_1<::UnityEngine::TypeDispatchData>*>*,
                         bool, bool, ::System::Action_1<::UnityEngine::TypeDispatchData>*)>(&::UnityEngine::ObjectDispatcher::DispatchTypeChangesAndClear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x690a560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchTypeChangesAndClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr,
                                                                                     ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TypeDispatchData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchTransformDataChangesAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::IntPtr, ::System::Type*, ::UnityEngine::ObjectDispatcher_TransformTrackingType,
    ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*>*,
    ::System::Action_1<::UnityEngine::TransformDispatchData>*)>(&::UnityEngine::ObjectDispatcher::DispatchTransformDataChangesAndClear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x690a698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchTransformDataChangesAndClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr,
                                                                                     int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TransformDispatchData>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::Unity::Collections::Allocator& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_DispatchAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchAllocator;
}
constexpr ::Unity::Collections::Allocator const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_DispatchAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchAllocator;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_DispatchAllocator(::Unity::Collections::Allocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DispatchAllocator = value;
}
constexpr ::UnityEngine::TypeDispatchData& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TypeDispatchData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeDispatchData;
}
constexpr ::UnityEngine::TypeDispatchData const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TypeDispatchData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeDispatchData;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TypeDispatchData(::UnityEngine::TypeDispatchData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TypeDispatchData = value;
}
constexpr ::UnityEngine::TransformDispatchData& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformDispatchData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformDispatchData;
}
constexpr ::UnityEngine::TransformDispatchData const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformDispatchData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformDispatchData;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TransformDispatchData(::UnityEngine::TransformDispatchData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformDispatchData = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformedComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformedComponents;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformedComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformedComponents;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TransformedComponents(::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformedComponents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::TypeDispatchData>*& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TypeDataCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeDataCallback;
}
constexpr ::System::Action_1<::UnityEngine::TypeDispatchData>* const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TypeDataCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeDataCallback;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TypeDataCallback(::System::Action_1<::UnityEngine::TypeDispatchData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TypeDataCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::TransformDispatchData>*& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformDataCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformDataCallback;
}
constexpr ::System::Action_1<::UnityEngine::TransformDispatchData>* const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformDataCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformDataCallback;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TransformDataCallback(::System::Action_1<::UnityEngine::TransformDispatchData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformDataCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>>*&
UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformComponentCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformComponentCallback;
}
constexpr ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>>* const&
UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformComponentCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformComponentCallback;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TransformComponentCallback(
    ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformComponentCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ObjectDispatcher::setStaticF_s_TypeDispatch(::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr,
                                                                                        ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                                                       ::System::Action_1<::UnityEngine::TypeDispatchData>*>*,
                                    "s_TypeDispatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get>(
      std::forward<::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                                      ::System::Action_1<::UnityEngine::TypeDispatchData>*>*>(value));
}
inline ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                          ::System::Action_1<::UnityEngine::TypeDispatchData>*>*
UnityEngine::ObjectDispatcher::getStaticF_s_TypeDispatch() {
  return ::cordl_internals::getStaticField<::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                              int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>*,
                                           "s_TypeDispatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get>();
}
inline void UnityEngine::ObjectDispatcher::setStaticF_s_TransformDispatch(::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr,
                                                                                             int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                       ::System::Action_1<::UnityEngine::TransformDispatchData>*>*,
                                    "s_TransformDispatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get>(
      std::forward<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                      ::System::Action_1<::UnityEngine::TransformDispatchData>*>*>(value));
}
inline ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                          ::System::Action_1<::UnityEngine::TransformDispatchData>*>*
UnityEngine::ObjectDispatcher::getStaticF_s_TransformDispatch() {
  return ::cordl_internals::getStaticField<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                              ::System::Action_1<::UnityEngine::TransformDispatchData>*>*,
                                           "s_TransformDispatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get>();
}
inline bool UnityEngine::ObjectDispatcher::get_valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "get_valid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::ObjectDispatcher::ValidateSystemHandleAndThrow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(),
                                                                             "ValidateSystemHandleAndThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::ValidateTypeAndThrow(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "ValidateTypeAndThrow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void UnityEngine::ObjectDispatcher::ValidateComponentTypeAndThrow(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "ValidateComponentTypeAndThrow",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void UnityEngine::ObjectDispatcher::DispatchCallback(::UnityEngine::TypeDispatchData data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TypeDispatchData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::ObjectDispatcher::DispatchCallback(::UnityEngine::TransformDispatchData data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TransformDispatchData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::ObjectDispatcher::DispatchCallback(::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> components) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, components);
}
inline void UnityEngine::ObjectDispatcher::DispatchTypeChangesAndClear(::System::Type* type, ::System::Action_1<::UnityEngine::TypeDispatchData>* callback, bool sortByInstanceID,
                                                                       bool noScriptingArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchTypeChangesAndClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TypeDispatchData>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback, sortByInstanceID, noScriptingArray);
}
inline void UnityEngine::ObjectDispatcher::DispatchTransformChangesAndClear(::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                            ::System::Action_1<::UnityEngine::TransformDispatchData>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchTransformChangesAndClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TransformDispatchData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, trackingType, callback);
}
inline ::UnityEngine::TypeDispatchData UnityEngine::ObjectDispatcher::GetTypeChangesAndClear(::System::Type* type, ::Unity::Collections::Allocator allocator, bool sortByInstanceID,
                                                                                             bool noScriptingArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "GetTypeChangesAndClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TypeDispatchData, false>(this, ___internal_method, type, allocator, sortByInstanceID, noScriptingArray);
}
inline ::UnityEngine::TransformDispatchData UnityEngine::ObjectDispatcher::GetTransformChangesAndClear(::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                                                       ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "GetTransformChangesAndClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransformDispatchData, false>(this, ___internal_method, type, trackingType, allocator);
}
inline void UnityEngine::ObjectDispatcher::EnableTypeTracking(::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTypeTracking", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeTrackingMask, types);
}
inline void UnityEngine::ObjectDispatcher::EnableTransformTracking(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTransformTracking", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackingType, types);
}
template <typename T>
inline ::UnityEngine::TypeDispatchData UnityEngine::ObjectDispatcher::GetTypeChangesAndClear(::Unity::Collections::Allocator allocator, bool sortByInstanceID, bool noScriptingArray) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "GetTypeChangesAndClear",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TypeDispatchData, false>(this, ___internal_method, allocator, sortByInstanceID, noScriptingArray);
}
template <typename T>
inline ::UnityEngine::TransformDispatchData UnityEngine::ObjectDispatcher::GetTransformChangesAndClear(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                                                       ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "GetTransformChangesAndClear",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransformDispatchData, false>(this, ___internal_method, trackingType, allocator);
}
template <typename T> inline void UnityEngine::ObjectDispatcher::EnableTypeTracking(::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTypeTracking",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeTrackingMask);
}
template <typename T> inline void UnityEngine::ObjectDispatcher::EnableTransformTracking(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTransformTracking",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackingType);
}
inline ::System::IntPtr UnityEngine::ObjectDispatcher::CreateDispatchSystemHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(),
                                                                             "CreateDispatchSystemHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::DestroyDispatchSystemHandle(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DestroyDispatchSystemHandle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::ObjectDispatcher::EnableTypeTracking(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTypeTracking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr, type, typeTrackingMask);
}
inline void UnityEngine::ObjectDispatcher::EnableTransformTracking(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "EnableTransformTracking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr, type, trackingType);
}
inline void UnityEngine::ObjectDispatcher::DispatchTypeChangesAndClear(::System::IntPtr ptr, ::System::Type* type,
                                                                       ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr,
                                                                                          ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* callback,
                                                                       bool sortByInstanceID, bool noScriptingArray, ::System::Action_1<::UnityEngine::TypeDispatchData>* param) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchTypeChangesAndClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr,
                                                                                   ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TypeDispatchData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr, type, callback, sortByInstanceID, noScriptingArray, param);
}
inline void UnityEngine::ObjectDispatcher::DispatchTransformDataChangesAndClear(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                                ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr,
                                                                                                   ::System::IntPtr, int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*>* callback,
                                                                                ::System::Action_1<::UnityEngine::TransformDispatchData>* param) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectDispatcher*>::get(), "DispatchTransformDataChangesAndClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ObjectDispatcher_TransformTrackingType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                                   ::System::Action_1<::UnityEngine::TransformDispatchData>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TransformDispatchData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr, type, trackingType, callback, param);
}
inline ::UnityEngine::ObjectDispatcher* UnityEngine::ObjectDispatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ObjectDispatcher*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::ObjectDispatcher::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::ObjectDispatcher::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher::ObjectDispatcher() {}
