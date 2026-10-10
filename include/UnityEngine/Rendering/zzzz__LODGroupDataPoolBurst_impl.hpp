#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupDataPoolBurst.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupDataPoolBurst_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupDataPoolBurst_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c68818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c68898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::
        LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>,
                                                                                 ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
                                                                                 ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
                                                                                 ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>, ::System::AsyncCallback*,
                                                                                 ::System::Object*)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c688ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c689d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> destroyedLODGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, destroyedLODGroupsID, lodGroupsData, lodGroupDataHash, freeLODGroupDataHandles);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::BeginInvoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> destroyedLODGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
    ::System::Object* _cordl_fixed_empty_name_whitespace_param_5) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, destroyedLODGroupsID, lodGroupsData, lodGroupDataHash, freeLODGroupDataHandles,
                                                                      _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*
UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                       ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace,
                                                                                                                                                           _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c689f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*>(),
                                                             { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c68b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>)>(&::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c68124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*>(),
                                                             { "Invoke",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*>(),
                                                                                         { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> destroyedLODGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*>(),
                                                           { "Invoke",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destroyedLODGroupsID, lodGroupsData, lodGroupDataHash, freeLODGroupDataHandles);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c68b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c68b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(),
                                               { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::
        LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>,
                                                                                                   ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
                                                                                                   ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>,
                                                                                                   ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,
                                                                                                                                                          ::UnityEngine::Rendering::GPUInstanceIndex>>,
                                                                                                   ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>,
                                                                                                   ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>,
                                                                                                   ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6c68bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(),
                                               { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c68d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(),
                                               { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                                  ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> lodGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lodGroupsID, lodGroupsData, lodGroupCullingData, lodGroupDataHash, freeLODGroupDataHandles, lodGroupInstances);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::BeginInvoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> lodGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
    ::System::Object* _cordl_fixed_empty_name_whitespace_param_7) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, lodGroupsID, lodGroupsData, lodGroupCullingData, lodGroupDataHash, freeLODGroupDataHandles,
                                                                      lodGroupInstances, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*
UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                         ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*>(
                                              _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate::
    LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c68d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*>(),
                                                             { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c68e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c681ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*>(),
                                                             { "Invoke",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*>();
}
inline void
UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*>(),
                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> lodGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*>(),
                                                           { "Invoke",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lodGroupsID, lodGroupsData, lodGroupCullingData, lodGroupDataHash, freeLODGroupDataHandles, lodGroupInstances);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall::
    LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst.FreeLODGroupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
                            ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
                            ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>)>(&::UnityEngine::Rendering::LODGroupDataPoolBurst::FreeLODGroupData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c67f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst*>(),
                                                             { "FreeLODGroupData",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst.AllocateOrGetLODGroupDataInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst::AllocateOrGetLODGroupDataInstances)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c67f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst*>(),
                                                             { "AllocateOrGetLODGroupDataInstances",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst.FreeLODGroupData$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>)>(&::UnityEngine::Rendering::LODGroupDataPoolBurst::FreeLODGroupData$BurstManaged)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6c682d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst*>(),
                                                             { "FreeLODGroupData$BurstManaged",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPoolBurst.AllocateOrGetLODGroupDataInstances$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>)>(
    &::UnityEngine::Rendering::LODGroupDataPoolBurst::AllocateOrGetLODGroupDataInstances$BurstManaged)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6c68538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst*>(),
                                                             { "AllocateOrGetLODGroupDataInstances$BurstManaged",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
    return ___internal_method;
  }
};
inline int32_t
UnityEngine::Rendering::LODGroupDataPoolBurst::FreeLODGroupData(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> destroyedLODGroupsID,
                                                                ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                                                                ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                                                                ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst*>(),
                                                           { "FreeLODGroupData",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destroyedLODGroupsID, lodGroupsData, lodGroupDataHash, freeLODGroupDataHandles);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst::AllocateOrGetLODGroupDataInstances(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> lodGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst*>(),
                                                           { "AllocateOrGetLODGroupDataInstances",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lodGroupsID, lodGroupsData, lodGroupCullingData, lodGroupDataHash, freeLODGroupDataHandles, lodGroupInstances);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst::FreeLODGroupData$BurstManaged(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> destroyedLODGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst*>(),
                                                           { "FreeLODGroupData$BurstManaged",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destroyedLODGroupsID, lodGroupsData, lodGroupDataHash, freeLODGroupDataHandles);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPoolBurst::AllocateOrGetLODGroupDataInstances$BurstManaged(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> lodGroupsID,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPoolBurst*>(),
                                                           { "AllocateOrGetLODGroupDataInstances$BurstManaged",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lodGroupsID, lodGroupsData, lodGroupCullingData, lodGroupDataHash, freeLODGroupDataHandles, lodGroupInstances);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupDataPoolBurst::LODGroupDataPoolBurst() {}
