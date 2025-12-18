#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroup.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchBufferTarget_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroupCreateInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x69601cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::*)(
    ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::Invoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6960314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup,
                                                                                                    ::UnityEngine::Rendering::BatchCullingContext cullingContext,
                                                                                                    ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroup, cullingContext, cullingOutput, userContext);
}
inline ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::BatchRendererGroup_OnPerformCulling() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x696038c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::*)(::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69603f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::Invoke(::System::IntPtr customCullingResult) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customCullingResult);
}
inline ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::BatchRendererGroup_OnFinishedCulling() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Rendering::BatchRendererGroup*)>(
    &::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x696040c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller*>::get(), "ConvertToNative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get() })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller::ConvertToNative(::UnityEngine::Rendering::BatchRendererGroup* batchRendererGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller*>::get(), "ConvertToNative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, batchRendererGroup);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller::BatchRendererGroup_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchRendererGroupCreateInfo)>(
    &::UnityEngine::Rendering::BatchRendererGroup::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x695f660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroupCreateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)()>(&::UnityEngine::Rendering::BatchRendererGroup::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x695f710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.AddDrawCommandBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::BatchID (::UnityEngine::Rendering::BatchRendererGroup::*)(
    ::System::IntPtr, int32_t, ::UnityEngine::GraphicsBufferHandle, uint32_t, uint32_t)>(&::UnityEngine::Rendering::BatchRendererGroup::AddDrawCommandBatch)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x695f794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "AddDrawCommandBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.AddBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::BatchID (::UnityEngine::Rendering::BatchRendererGroup::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::BatchRendererGroup::AddBatch)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x695f8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "AddBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RemoveDrawCommandBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchID)>(
    &::UnityEngine::Rendering::BatchRendererGroup::RemoveDrawCommandBatch)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x695f920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RemoveDrawCommandBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchID>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RemoveBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchID)>(
    &::UnityEngine::Rendering::BatchRendererGroup::RemoveBatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x695f9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RemoveBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchID>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RegisterMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(
    ::System::ReadOnlySpan_1<int32_t>, ::System::Span_1<::UnityEngine::Rendering::BatchMaterialID>)>(&::UnityEngine::Rendering::BatchRendererGroup::RegisterMaterials)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x695f9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RegisterMaterials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::Rendering::BatchMaterialID>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.UnregisterMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchMaterialID)>(
    &::UnityEngine::Rendering::BatchRendererGroup::UnregisterMaterial)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x695fb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "UnregisterMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchMaterialID>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RegisterMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(
    ::System::ReadOnlySpan_1<int32_t>, ::System::Span_1<::UnityEngine::Rendering::BatchMeshID>)>(&::UnityEngine::Rendering::BatchRendererGroup::RegisterMeshes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x695fbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RegisterMeshes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::Rendering::BatchMeshID>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.UnregisterMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchMeshID)>(
    &::UnityEngine::Rendering::BatchRendererGroup::UnregisterMesh)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x695fd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "UnregisterMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchMeshID>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.GetBufferTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::BatchBufferTarget (*)()>(&::UnityEngine::Rendering::BatchRendererGroup::GetBufferTarget)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x695fde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                                                               "GetBufferTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.get_BufferTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::BatchBufferTarget (*)()>(&::UnityEngine::Rendering::BatchRendererGroup::get_BufferTarget)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x695fe08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                                                               "get_BufferTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Rendering::BatchRendererGroup*, void*)>(
    &::UnityEngine::Rendering::BatchRendererGroup::Create)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x695f6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::BatchRendererGroup::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x695f758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.InvokeOnPerformCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>,
                                                                                           ::ByRef<::UnityEngine::Rendering::LODParameters>, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x695fe30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "InvokeOnPerformCulling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LODParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.InvokeOnFinishedCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup::InvokeOnFinishedCulling)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6960074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "InvokeOnFinishedCulling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.OcclusionTestAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::UnityEngine::Bounds)>(
    &::UnityEngine::Rendering::BatchRendererGroup::OcclusionTestAABB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6960144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "OcclusionTestAABB", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.AddDrawCommandBatch_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::ByRef<::UnityEngine::GraphicsBufferHandle>, uint32_t, uint32_t, ::ByRef<::UnityEngine::Rendering::BatchID>)>(
        &::UnityEngine::Rendering::BatchRendererGroup::AddDrawCommandBatch_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x695f828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "AddDrawCommandBatch_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::GraphicsBufferHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchID>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RemoveDrawCommandBatch_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Rendering::BatchID>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::RemoveDrawCommandBatch_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x695f97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RemoveDrawCommandBatch_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchID>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RegisterMaterials_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
        &::UnityEngine::Rendering::BatchRendererGroup::RegisterMaterials_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x695fae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RegisterMaterials_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.UnregisterMaterial_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Rendering::BatchMaterialID>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::UnregisterMaterial_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x695fb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "UnregisterMaterial_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchMaterialID>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RegisterMeshes_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
        &::UnityEngine::Rendering::BatchRendererGroup::RegisterMeshes_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x695fcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RegisterMeshes_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.UnregisterMesh_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Rendering::BatchMeshID>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::UnregisterMesh_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x695fd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "UnregisterMesh_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchMeshID>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.OcclusionTestAABB_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::ByRef<::UnityEngine::Bounds>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::OcclusionTestAABB_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6960188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "OcclusionTestAABB_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bounds>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_GroupHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupHandle;
}
constexpr ::System::IntPtr const& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_GroupHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupHandle;
}
constexpr void UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_set_m_GroupHandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GroupHandle = value;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_PerformCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformCulling;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* const& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_PerformCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformCulling;
}
constexpr void UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_set_m_PerformCulling(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PerformCulling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_FinishedCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinishedCulling;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* const& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_FinishedCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinishedCulling;
}
constexpr void UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_set_m_FinishedCulling(::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FinishedCulling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::BatchRendererGroup::_ctor(::UnityEngine::Rendering::BatchRendererGroupCreateInfo info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroupCreateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info);
}
inline void UnityEngine::Rendering::BatchRendererGroup::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::BatchID UnityEngine::Rendering::BatchRendererGroup::AddDrawCommandBatch(::System::IntPtr values, int32_t count, ::UnityEngine::GraphicsBufferHandle buffer,
                                                                                                         uint32_t bufferOffset, uint32_t windowSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "AddDrawCommandBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchID, false>(this, ___internal_method, values, count, buffer, bufferOffset, windowSize);
}
inline ::UnityEngine::Rendering::BatchID UnityEngine::Rendering::BatchRendererGroup::AddBatch(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> batchMetadata,
                                                                                              ::UnityEngine::GraphicsBufferHandle buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "AddBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchID, false>(this, ___internal_method, batchMetadata, buffer);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RemoveDrawCommandBatch(::UnityEngine::Rendering::BatchID batchID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RemoveDrawCommandBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchID>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batchID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RemoveBatch(::UnityEngine::Rendering::BatchID batchID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RemoveBatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchID>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batchID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RegisterMaterials(::System::ReadOnlySpan_1<int32_t> materialID, ::System::Span_1<::UnityEngine::Rendering::BatchMaterialID> batchMaterialID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RegisterMaterials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::Rendering::BatchMaterialID>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, materialID, batchMaterialID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::UnregisterMaterial(::UnityEngine::Rendering::BatchMaterialID material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "UnregisterMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchMaterialID>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RegisterMeshes(::System::ReadOnlySpan_1<int32_t> meshID, ::System::Span_1<::UnityEngine::Rendering::BatchMeshID> batchMeshID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RegisterMeshes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::Rendering::BatchMeshID>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshID, batchMeshID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::UnregisterMesh(::UnityEngine::Rendering::BatchMeshID mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "UnregisterMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchMeshID>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh);
}
inline ::UnityEngine::Rendering::BatchBufferTarget UnityEngine::Rendering::BatchRendererGroup::GetBufferTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                                                             "GetBufferTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchBufferTarget, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::BatchBufferTarget UnityEngine::Rendering::BatchRendererGroup::get_BufferTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                                                             "get_BufferTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchBufferTarget, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Rendering::BatchRendererGroup::Create(::UnityEngine::Rendering::BatchRendererGroup* group, void* userContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, group, userContext);
}
inline void UnityEngine::Rendering::BatchRendererGroup::Destroy(::System::IntPtr groupHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, groupHandle);
}
inline void UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* group,
                                                                               ::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput> context,
                                                                               ::ByRef<::UnityEngine::Rendering::LODParameters> lodParameters, ::System::IntPtr userContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "InvokeOnPerformCulling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LODParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group, context, lodParameters, userContext);
}
inline void UnityEngine::Rendering::BatchRendererGroup::InvokeOnFinishedCulling(::UnityEngine::Rendering::BatchRendererGroup* group, ::System::IntPtr customCullingResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "InvokeOnFinishedCulling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group, customCullingResult);
}
inline bool UnityEngine::Rendering::BatchRendererGroup::OcclusionTestAABB(::System::IntPtr occlusionBuffer, ::UnityEngine::Bounds aabb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "OcclusionTestAABB", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, occlusionBuffer, aabb);
}
inline void UnityEngine::Rendering::BatchRendererGroup::AddDrawCommandBatch_Injected(::System::IntPtr _unity_self, ::System::IntPtr values, int32_t count,
                                                                                     ::ByRef<::UnityEngine::GraphicsBufferHandle> buffer, uint32_t bufferOffset, uint32_t windowSize,
                                                                                     ::ByRef<::UnityEngine::Rendering::BatchID> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "AddDrawCommandBatch_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::GraphicsBufferHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchID>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, values, count, buffer, bufferOffset, windowSize, ret);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RemoveDrawCommandBatch_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::BatchID> batchID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RemoveDrawCommandBatch_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchID>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, batchID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RegisterMaterials_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> materialID,
                                                                                   ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> batchMaterialID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RegisterMaterials_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, materialID, batchMaterialID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::UnregisterMaterial_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::BatchMaterialID> material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "UnregisterMaterial_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchMaterialID>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, material);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RegisterMeshes_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> meshID,
                                                                                ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> batchMeshID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "RegisterMeshes_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, meshID, batchMeshID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::UnregisterMesh_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::BatchMeshID> mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "UnregisterMesh_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchMeshID>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, mesh);
}
inline bool UnityEngine::Rendering::BatchRendererGroup::OcclusionTestAABB_Injected(::System::IntPtr occlusionBuffer, ::ByRef<::UnityEngine::Bounds> aabb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "OcclusionTestAABB_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bounds>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, occlusionBuffer, aabb);
}
inline ::UnityEngine::Rendering::BatchRendererGroup* UnityEngine::Rendering::BatchRendererGroup::New_ctor(::UnityEngine::Rendering::BatchRendererGroupCreateInfo info) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::BatchRendererGroup*>(info));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::BatchRendererGroup::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::BatchRendererGroup::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup::BatchRendererGroup() {}
