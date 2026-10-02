#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerBurst.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerBurst_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerBurst_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallEntityIdArray_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c46b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c46b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>,
                                                                                                         ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<
                                                                                                             ::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>,
                                                                                                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>,
                                                                                                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>,
                                                                                                         ::by_ref<
                                                                                                             ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
                                                                                                         ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6c46bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c46cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                  ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>> batchMaterialHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs, supportedPackedMaterialDatas);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::BeginInvoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>> batchMaterialHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
    ::System::Object* _cordl_fixed_empty_name_whitespace_param_6) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs,
                                                                      supportedPackedMaterialDatas, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*
UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                         ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(
                                              _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c46d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                                                             { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c46e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>,
                         ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>,
                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>,
                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>)>(
        &::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6c460b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                                         { "Invoke",
                                           {},
                                           { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>> batchMaterialHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                                       { "Invoke",
                                         {},
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs, supportedPackedMaterialDatas);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c46e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>,
    ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c46ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::
        GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>,
                                                                                          ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>,
                                                                                          ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>,
                                                                                          ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>, ::System::AsyncCallback*,
                                                                                          ::System::Object*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c46ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c46fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                         ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> unsupportedMaterials,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>> materialIDArrays,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>> rendererGroups,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::BeginInvoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> unsupportedMaterials,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>> materialIDArrays,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>> rendererGroups,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
    ::System::Object* _cordl_fixed_empty_name_whitespace_param_5) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers,
                                                                      _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*
UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(
                                              _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c46ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                                                             { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c470fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>,
                         ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>)>(
        &::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c46198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                                                             { "Invoke",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> unsupportedMaterials,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>> materialIDArrays,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>> rendererGroups,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                                                           { "Invoke",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c47114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
    ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c47194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(),
                                               { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::
        GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>,
                                                                                                       ::by_ref<
                                                                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
                                                                                                       ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<
                                                                                                           ::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
                                                                                                       ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>,
                                                                                                       ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c471a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(),
                                               { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c472d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(),
                                               { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                                      ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialDatas,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialHash,
    ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::BeginInvoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialDatas,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialHash,
    ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
    ::System::Object* _cordl_fixed_empty_name_whitespace_param_5) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials,
                                                                      _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*
UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                             ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(
                                              _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::
    GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c472dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                                                             { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c473e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
                         ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
                         ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>)>(
        &::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6c46260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                            { "Invoke",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GetFunctionPointerDiscard(
    ::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::Invoke(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialDatas,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialHash,
    ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                          { "Invoke",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::
    GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.ClassifyMaterials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>,
                         ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>,
                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>,
                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::ClassifyMaterials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c45b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                                         { "ClassifyMaterials",
                                           {},
                                           { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.FindUnsupportedRenderers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>,
                         ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>)>(
        &::UnityEngine::Rendering::GPUResidentDrawerBurst::FindUnsupportedRenderers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c45b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                                                             { "FindUnsupportedRenderers",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.GetMaterialsWithChangedPackedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
                         ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
                         ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c45b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                            { "GetMaterialsWithChangedPackedMaterial",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.ClassifyMaterials$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::ClassifyMaterials$BurstManaged)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x6c463dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                                         { "ClassifyMaterials$BurstManaged",
                                           {},
                                           { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.FindUnsupportedRenderers$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>,
                         ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>)>(
        &::UnityEngine::Rendering::GPUResidentDrawerBurst::FindUnsupportedRenderers$BurstManaged)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6c4685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                                                             { "FindUnsupportedRenderers$BurstManaged",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.GetMaterialsWithChangedPackedMaterial$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
    ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>,
    ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial$BurstManaged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6c46a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                            { "GetMaterialsWithChangedPackedMaterial$BurstManaged",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                                ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::ClassifyMaterials(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>> batchMaterialHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                                       { "ClassifyMaterials",
                                         {},
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs, supportedPackedMaterialDatas);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::FindUnsupportedRenderers(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> unsupportedMaterials,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>> materialIDArrays,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>> rendererGroups,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                                                           { "FindUnsupportedRenderers",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialDatas,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialHash,
    ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                          { "GetMaterialsWithChangedPackedMaterial",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::ClassifyMaterials$BurstManaged(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>> batchMaterialHash,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                                       { "ClassifyMaterials$BurstManaged",
                                         {},
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs, supportedPackedMaterialDatas);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::FindUnsupportedRenderers$BurstManaged(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> unsupportedMaterials,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>> materialIDArrays,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>> rendererGroups,
    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                                                           { "FindUnsupportedRenderers$BurstManaged",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial$BurstManaged(
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> materialIDs,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialDatas,
    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> packedMaterialHash,
    ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                          { "GetMaterialsWithChangedPackedMaterial$BurstManaged",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(),
                              ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst::GPUResidentDrawerBurst() {}
