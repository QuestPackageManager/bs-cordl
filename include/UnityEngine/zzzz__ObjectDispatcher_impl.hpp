#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "System/zzzz__Action_8_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
//  Writing Method size for method: ::UnityEngine::__ObjectDispatcher____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ObjectDispatcher____c::*)()>(&::UnityEngine::__ObjectDispatcher____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4842570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ObjectDispatcher____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ObjectDispatcher____c.__cctor_b__54_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ObjectDispatcher____c::*)(
    ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*)>(
    &::UnityEngine::__ObjectDispatcher____c::__cctor_b__54_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4842578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ObjectDispatcher____c*>::get(), "<.cctor>b__54_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TypeDispatchData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ObjectDispatcher____c.__cctor_b__54_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ObjectDispatcher____c::*)(
    ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*)>(
    &::UnityEngine::__ObjectDispatcher____c::__cctor_b__54_1)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x4842648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ObjectDispatcher____c*>::get(), "<.cctor>b__54_1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 8>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TransformDispatchData>*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ObjectDispatcher____c::setStaticF___9(::UnityEngine::__ObjectDispatcher____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__ObjectDispatcher____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ObjectDispatcher____c*>::get>(
      std::forward<::UnityEngine::__ObjectDispatcher____c*>(value));
}
inline ::UnityEngine::__ObjectDispatcher____c* UnityEngine::__ObjectDispatcher____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::__ObjectDispatcher____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ObjectDispatcher____c*>::get>();
}
inline ::UnityEngine::__ObjectDispatcher____c* UnityEngine::__ObjectDispatcher____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__ObjectDispatcher____c*>());
}
inline void UnityEngine::__ObjectDispatcher____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ObjectDispatcher____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::__ObjectDispatcher____c::__cctor_b__54_0(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> changed, ::System::IntPtr changedID, ::System::IntPtr destroyedID,
                                                                  int32_t changedCount, int32_t destroyedCount, ::System::Action_1<::UnityEngine::TypeDispatchData>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ObjectDispatcher____c*>::get(), "<.cctor>b__54_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TypeDispatchData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, changed, changedID, destroyedID, changedCount, destroyedCount, callback);
}
inline void UnityEngine::__ObjectDispatcher____c::__cctor_b__54_1(::System::IntPtr transformed, ::System::IntPtr parents, ::System::IntPtr localToWorldMatrices, ::System::IntPtr positions,
                                                                  ::System::IntPtr rotations, ::System::IntPtr scales, int32_t count,
                                                                  ::System::Action_1<::UnityEngine::TransformDispatchData>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ObjectDispatcher____c*>::get(), "<.cctor>b__54_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::TransformDispatchData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformed, parents, localToWorldMatrices, positions, rotations, scales, count, callback);
}
// Ctor Parameters []
constexpr ::UnityEngine::__ObjectDispatcher____c::__ObjectDispatcher____c() {}
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
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher::ObjectDispatcher() {}
