#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphObjectPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c2494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c2498;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>::get(), 4));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase::Clear() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase* UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase::RenderGraphObjectPool_SharedObjectPoolBase() {}
template <typename T>
inline void UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>::setStaticF___9(
    ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*>(value));
}
template <typename T>
inline ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*
UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*>::get>();
}
template <typename T> inline void UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>::setStaticF___9__1_0(::System::Func_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<T>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*>::get>(
      std::forward<::System::Func_1<T>*>(value));
}
template <typename T> inline ::System::Func_1<T>* UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_1<T>*, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*>::get>();
}
template <typename T> inline void UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>::_AllocatePool_b__1_0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*>::get(),
                                  "<AllocatePool>b__1_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*
UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>::SharedObjectPool_1_RenderGraphObjectPool___c() {}
template <typename T> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<T>*, "s_Pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::Pool::ObjectPool_1<T>* UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<T>*, "s_Pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>*>::get>();
}
template <typename T> inline ::UnityEngine::Pool::ObjectPool_1<T>* UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::AllocatePool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>*>::get(),
                                               "AllocatePool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::ObjectPool_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::Clear() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::Get() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>*>::get(),
                                               "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::Release(T toRelease) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>*>::get(), "Release",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
template <typename T> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>* UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>::RenderGraphObjectPool_SharedObjectPool_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x65c1d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool.GetTempMaterialPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::GetTempMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x65c1e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                                 "GetTempMaterialPropertyBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool.ReleaseAllTempAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::ReleaseAllTempAlloc)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x65c1f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                                 "ReleaseAllTempAlloc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::Cleanup)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x65c2260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_ArrayPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArrayPool;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_ArrayPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArrayPool;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_set_m_ArrayPool(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ArrayPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_AllocatedArrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocatedArrays;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_AllocatedArrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocatedArrays;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_set_m_AllocatedArrays(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllocatedArrays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_AllocatedMaterialPropertyBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocatedMaterialPropertyBlocks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_get_m_AllocatedMaterialPropertyBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocatedMaterialPropertyBlocks;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::__cordl_internal_set_m_AllocatedMaterialPropertyBlocks(
    ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllocatedMaterialPropertyBlocks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::setStaticF_s_AllocatedPools(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>*, "s_AllocatedPools",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get>(
      std::forward<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>*>(value));
}
inline ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>*
UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::getStaticF_s_AllocatedPools() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>*, "s_AllocatedPools",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::GetTempArray(int32_t size) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(), "GetTempArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, size);
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::GetTempMaterialPropertyBlock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                               "GetTempMaterialPropertyBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::ReleaseAllTempAlloc() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(),
                                               "ReleaseAllTempAlloc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::Get() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(), "Get",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::Release(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(), "Release",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool::RenderGraphObjectPool() {}
