#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullingBatcherBurst.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullingBatcherBurst_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullingBatcherBurst_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c53ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::*)(
    ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c53f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::
        InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>,
                                                                                                ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>,
                                                                                                ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>,
                                                                                                ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>,
                                                                                                ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
                                                                                                ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>,
                                                                                                ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6c53f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c540e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                               ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> drawInstanceIndices,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drawInstanceIndices, drawInstances, rangeHash, batchHash, drawRanges, drawBatches);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::BeginInvoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> drawInstanceIndices,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches,
    ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_7) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, drawInstanceIndices, drawInstances, rangeHash, batchHash, drawRanges, drawBatches,
                                                                      _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*
UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                      ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*>(
                                              _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate::
    InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c540f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*>(),
                                                             { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c54200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>,
                         ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>,
                         ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>,
                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>)>(
        &::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c52ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*>(),
                                                             { "Invoke",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*>();
}
inline void
UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*>(),
                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> drawInstanceIndices,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*>(),
                                                           { "Invoke",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, drawInstanceIndices, drawInstances, rangeHash, batchHash, drawRanges, drawBatches);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c54218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::*)(
    bool, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c54284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::
        InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::*)(bool, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>,
                                                                                        ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>,
                                                                                        ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,
                                                                                                                                               ::UnityEngine::Rendering::BatchMeshID> const>,
                                                                                        ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,
                                                                                                                                               ::UnityEngine::Rendering::BatchMaterialID> const>,
                                                                                        ::by_ref<::Unity::Collections::NativeParallelHashMap_2<
                                                                                            ::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>,
                                                                                        ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>,
                                                                                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
                                                                                        ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>,
                                                                                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>,
                                                                                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>, ::System::AsyncCallback*,
                                                                                        ::System::Object*)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6c542ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c5450c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                       ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::Invoke(
    bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const> instances,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const> rendererData,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const> batchMeshHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDataHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, implicitInstanceIndices, instances, rendererData, batchMeshHash, batchMaterialHash, packedMaterialDataHash, rangeHash,
                                                   drawRanges, batchHash, drawBatches, drawInstances);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::BeginInvoke(
    bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const> instances,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const> rendererData,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const> batchMeshHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDataHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances,
    ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_12) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, implicitInstanceIndices, instances, rendererData, batchMeshHash, batchMaterialHash,
                                                                      packedMaterialDataHash, rangeHash, drawRanges, batchHash, drawBatches, drawInstances, _cordl_fixed_empty_name_whitespace,
                                                                      _cordl_fixed_empty_name_whitespace_param_12);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*
UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                              ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*>(
                                              _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c54518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*>(),
                                                             { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c54624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    bool, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c53a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*>(),
                            { "Invoke",
                              {},
                              { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*>(),
                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::Invoke(
    bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const> instances,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const> rendererData,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const> batchMeshHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDataHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*>(),
                          { "Invoke",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, implicitInstanceIndices, instances, rendererData, batchMeshHash, batchMaterialHash, packedMaterialDataHash, rangeHash,
                                                   drawRanges, batchHash, drawBatches, drawInstances);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.RemoveDrawRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Rendering::RangeKey const>, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>,
                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst::RemoveDrawRange)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6c52ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                             { "RemoveDrawRange",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RangeKey const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.RemoveDrawBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::DrawKey const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
                                                                ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>,
                                                                ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>,
                                                                ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst::RemoveDrawBatch)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6c52c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                             { "RemoveDrawBatch",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawKey const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.RemoveDrawInstanceIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst::RemoveDrawInstanceIndices)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c503ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                             { "RemoveDrawInstanceIndices",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.EditDrawRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::DrawRange> (*)(
    ::by_ref<::UnityEngine::Rendering::RangeKey const>, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst::EditDrawRange)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6c52fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                             { "EditDrawRange",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RangeKey const>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.EditDrawBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::DrawBatch> (*)(
    ::by_ref<::UnityEngine::Rendering::DrawKey const>, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcherBurst::EditDrawBatch)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c53128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                { "EditDrawBatch",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawKey const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.ProcessRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    int32_t, bool, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID>,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst::ProcessRenderer)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x6c532dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                { "ProcessRenderer",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.CreateDrawBatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    bool, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst::CreateDrawBatches)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c52914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                            { "CreateDrawBatches",
                              {},
                              { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.RemoveDrawInstanceIndices$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst::RemoveDrawInstanceIndices$BurstManaged)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6c53bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                             { "RemoveDrawInstanceIndices$BurstManaged",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherBurst.CreateDrawBatches$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    bool, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>)>(&::UnityEngine::Rendering::InstanceCullingBatcherBurst::CreateDrawBatches$BurstManaged)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c53dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                            { "CreateDrawBatches$BurstManaged",
                              {},
                              { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst::RemoveDrawRange(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RangeKey const> key,
                                                                                 ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
                                                                                 ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                           { "RemoveDrawRange",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RangeKey const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, rangeHash, drawRanges);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst::RemoveDrawBatch(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::DrawKey const> key,
                                                                                 ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges,
                                                                                 ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
                                                                                 ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
                                                                                 ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                          { "RemoveDrawBatch",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawKey const>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, drawRanges, rangeHash, batchHash, drawBatches);
}
inline void
UnityEngine::Rendering::InstanceCullingBatcherBurst::RemoveDrawInstanceIndices(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> drawInstanceIndices,
                                                                               ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances,
                                                                               ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
                                                                               ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
                                                                               ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges,
                                                                               ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                           { "RemoveDrawInstanceIndices",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, drawInstanceIndices, drawInstances, rangeHash, batchHash, drawRanges, drawBatches);
}
inline ::by_ref<::UnityEngine::Rendering::DrawRange>
UnityEngine::Rendering::InstanceCullingBatcherBurst::EditDrawRange(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RangeKey const> key,
                                                                   ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash,
                                                                   ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                           { "EditDrawRange",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RangeKey const>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::DrawRange>>(nullptr, ___internal_method, key, rangeHash, drawRanges);
}
inline ::by_ref<::UnityEngine::Rendering::DrawBatch> UnityEngine::Rendering::InstanceCullingBatcherBurst::EditDrawBatch(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::DrawKey const> key, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const> subMeshDescriptor,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                              { "EditDrawBatch",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawKey const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::DrawBatch>>(nullptr, ___internal_method, key, subMeshDescriptor, batchHash, drawBatches);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst::ProcessRenderer(
    int32_t i, bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const> rendererData,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> batchMeshHash,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDataHash,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> batchMaterialHash,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                              { "ProcessRenderer",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, implicitInstanceIndices, rendererData, batchMeshHash, packedMaterialDataHash, batchMaterialHash, instances,
                                                   drawInstances, rangeHash, drawRanges, batchHash, drawBatches);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst::CreateDrawBatches(
    bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const> instances,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const> rendererData,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const> batchMeshHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDataHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                          { "CreateDrawBatches",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, implicitInstanceIndices, instances, rendererData, batchMeshHash, batchMaterialHash, packedMaterialDataHash, rangeHash,
                                                   drawRanges, batchHash, drawBatches, drawInstances);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst::RemoveDrawInstanceIndices$BurstManaged(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> drawInstanceIndices,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                                                           { "RemoveDrawInstanceIndices$BurstManaged",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t> const>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, drawInstanceIndices, drawInstances, rangeHash, batchHash, drawRanges, drawBatches);
}
inline void UnityEngine::Rendering::InstanceCullingBatcherBurst::CreateDrawBatches$BurstManaged(
    bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const> instances,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const> rendererData,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const> batchMeshHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDataHash,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>> rangeHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>> drawRanges,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>> batchHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>> drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>> drawInstances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherBurst*>(),
                          { "CreateDrawBatches$BurstManaged",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> const>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, implicitInstanceIndices, instances, rendererData, batchMeshHash, batchMaterialHash, packedMaterialDataHash, rangeHash,
                                                   drawRanges, batchHash, drawBatches, drawInstances);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherBurst::InstanceCullingBatcherBurst() {}
