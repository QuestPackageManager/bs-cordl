#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BatchRendererGroup.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b2b510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::*)(
    ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::Invoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b2b658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup,
                                                                                                    ::UnityEngine::Rendering::BatchCullingContext cullingContext,
                                                                                                    ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, rendererGroup, cullingContext, cullingOutput, userContext);
}
inline ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::BatchRendererGroup_OnPerformCulling() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b2b6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::*)(::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b2b73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::Invoke(::System::IntPtr customCullingResult) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customCullingResult);
}
inline ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling::BatchRendererGroup_OnFinishedCulling() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Rendering::BatchRendererGroup*)>(
    &::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b2b750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller::ConvertToNative(::UnityEngine::Rendering::BatchRendererGroup* batchRendererGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, batchRendererGroup);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller::BatchRendererGroup_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchRendererGroupCreateInfo)>(
    &::UnityEngine::Rendering::BatchRendererGroup::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b2a9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupCreateInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)()>(&::UnityEngine::Rendering::BatchRendererGroup::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b2aa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.AddDrawCommandBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchID (::UnityEngine::Rendering::BatchRendererGroup::*)(
    ::System::IntPtr, int32_t, ::UnityEngine::GraphicsBufferHandle, uint32_t, uint32_t)>(&::UnityEngine::Rendering::BatchRendererGroup::AddDrawCommandBatch)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b2aad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                             { "AddDrawCommandBatch",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.AddBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchID (::UnityEngine::Rendering::BatchRendererGroup::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::BatchRendererGroup::AddBatch)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b2abf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
            { "AddBatch", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RemoveDrawCommandBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchID)>(
    &::UnityEngine::Rendering::BatchRendererGroup::RemoveDrawCommandBatch)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b2ac64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "RemoveDrawCommandBatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchID>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RemoveBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchID)>(
    &::UnityEngine::Rendering::BatchRendererGroup::RemoveBatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2ad04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "RemoveBatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchID>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RegisterMaterials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(
    ::System::ReadOnlySpan_1<int32_t>, ::System::Span_1<::UnityEngine::Rendering::BatchMaterialID>)>(&::UnityEngine::Rendering::BatchRendererGroup::RegisterMaterials)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b2ad0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                            { "RegisterMaterials", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::BatchMaterialID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.UnregisterMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchMaterialID)>(
    &::UnityEngine::Rendering::BatchRendererGroup::UnregisterMaterial)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b2ae78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                                                           { "UnregisterMaterial", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RegisterMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(
    ::System::ReadOnlySpan_1<int32_t>, ::System::Span_1<::UnityEngine::Rendering::BatchMeshID>)>(&::UnityEngine::Rendering::BatchRendererGroup::RegisterMeshes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b2af18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                            { "RegisterMeshes", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::BatchMeshID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.UnregisterMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup::*)(::UnityEngine::Rendering::BatchMeshID)>(
    &::UnityEngine::Rendering::BatchRendererGroup::UnregisterMesh)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b2b084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "UnregisterMesh", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.GetBufferTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchBufferTarget (*)()>(&::UnityEngine::Rendering::BatchRendererGroup::GetBufferTarget)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b2b124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "GetBufferTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.get_BufferTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchBufferTarget (*)()>(&::UnityEngine::Rendering::BatchRendererGroup::get_BufferTarget)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b2b14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "get_BufferTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Rendering::BatchRendererGroup*, void*)>(&::UnityEngine::Rendering::BatchRendererGroup::Create)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2aa10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                             { "Create", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::BatchRendererGroup::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.InvokeOnPerformCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::by_ref<::UnityEngine::Rendering::BatchRendererCullingOutput>,
                                                                ::by_ref<::UnityEngine::Rendering::LODParameters>, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6b2b174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                { "InvokeOnPerformCulling",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchRendererCullingOutput>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LODParameters>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.InvokeOnFinishedCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup::InvokeOnFinishedCulling)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b2b3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                { "InvokeOnFinishedCulling", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.OcclusionTestAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::UnityEngine::Bounds)>(&::UnityEngine::Rendering::BatchRendererGroup::OcclusionTestAABB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2b488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                             { "OcclusionTestAABB", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.AddDrawCommandBatch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::by_ref<::UnityEngine::GraphicsBufferHandle>, uint32_t, uint32_t,
                                                                ::by_ref<::UnityEngine::Rendering::BatchID>)>(&::UnityEngine::Rendering::BatchRendererGroup::AddDrawCommandBatch_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b2ab6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                                                           { "AddDrawCommandBatch_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBufferHandle>>(), ::i2c::type_of<uint32_t>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RemoveDrawCommandBatch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::BatchID>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::RemoveDrawCommandBatch_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2acc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                { "RemoveDrawCommandBatch_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RegisterMaterials_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::RegisterMaterials_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b2ae24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                             { "RegisterMaterials_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.UnregisterMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::BatchMaterialID>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::UnregisterMaterial_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2aed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                { "UnregisterMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchMaterialID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.RegisterMeshes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::RegisterMeshes_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b2b030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                             { "RegisterMeshes_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.UnregisterMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::BatchMeshID>)>(
    &::UnityEngine::Rendering::BatchRendererGroup::UnregisterMesh_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2b0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                { "UnregisterMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchMeshID>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.OcclusionTestAABB_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Rendering::BatchRendererGroup::OcclusionTestAABB_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2b4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                             { "OcclusionTestAABB_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
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
  this->___m_PerformCulling = value;
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
  this->___m_FinishedCulling = value;
}
inline void UnityEngine::Rendering::BatchRendererGroup::_ctor(::UnityEngine::Rendering::BatchRendererGroupCreateInfo info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupCreateInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void UnityEngine::Rendering::BatchRendererGroup::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::BatchID UnityEngine::Rendering::BatchRendererGroup::AddDrawCommandBatch(::System::IntPtr values, int32_t count, ::UnityEngine::GraphicsBufferHandle buffer,
                                                                                                         uint32_t bufferOffset, uint32_t windowSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                           { "AddDrawCommandBatch",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchID>(this, ___internal_method, values, count, buffer, bufferOffset, windowSize);
}
inline ::UnityEngine::Rendering::BatchID UnityEngine::Rendering::BatchRendererGroup::AddBatch(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> batchMetadata,
                                                                                              ::UnityEngine::GraphicsBufferHandle buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                       { "AddBatch", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchID>(this, ___internal_method, batchMetadata, buffer);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RemoveDrawCommandBatch(::UnityEngine::Rendering::BatchID batchID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "RemoveDrawCommandBatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchID>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, batchID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RemoveBatch(::UnityEngine::Rendering::BatchID batchID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "RemoveBatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchID>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, batchID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RegisterMaterials(::System::ReadOnlySpan_1<int32_t> materialID, ::System::Span_1<::UnityEngine::Rendering::BatchMaterialID> batchMaterialID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                          { "RegisterMaterials", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::BatchMaterialID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialID, batchMaterialID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::UnregisterMaterial(::UnityEngine::Rendering::BatchMaterialID material) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                                                         { "UnregisterMaterial", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RegisterMeshes(::System::ReadOnlySpan_1<int32_t> meshID, ::System::Span_1<::UnityEngine::Rendering::BatchMeshID> batchMeshID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                       { "RegisterMeshes", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::BatchMeshID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshID, batchMeshID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::UnregisterMesh(::UnityEngine::Rendering::BatchMeshID mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "UnregisterMesh", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline ::UnityEngine::Rendering::BatchBufferTarget UnityEngine::Rendering::BatchRendererGroup::GetBufferTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "GetBufferTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchBufferTarget>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::BatchBufferTarget UnityEngine::Rendering::BatchRendererGroup::get_BufferTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "get_BufferTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchBufferTarget>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Rendering::BatchRendererGroup::Create(::UnityEngine::Rendering::BatchRendererGroup* group, void* userContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, group, userContext);
}
inline void UnityEngine::Rendering::BatchRendererGroup::Destroy(::System::IntPtr groupHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, groupHandle);
}
inline void UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* group,
                                                                               ::by_ref<::UnityEngine::Rendering::BatchRendererCullingOutput> context,
                                                                               ::by_ref<::UnityEngine::Rendering::LODParameters> lodParameters, ::System::IntPtr userContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                              { "InvokeOnPerformCulling",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchRendererCullingOutput>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LODParameters>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, group, context, lodParameters, userContext);
}
inline void UnityEngine::Rendering::BatchRendererGroup::InvokeOnFinishedCulling(::UnityEngine::Rendering::BatchRendererGroup* group, ::System::IntPtr customCullingResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                              { "InvokeOnFinishedCulling", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, group, customCullingResult);
}
inline bool UnityEngine::Rendering::BatchRendererGroup::OcclusionTestAABB(::System::IntPtr occlusionBuffer, ::UnityEngine::Bounds aabb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                           { "OcclusionTestAABB", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, occlusionBuffer, aabb);
}
inline void UnityEngine::Rendering::BatchRendererGroup::AddDrawCommandBatch_Injected(::System::IntPtr _unity_self, ::System::IntPtr values, int32_t count,
                                                                                     ::by_ref<::UnityEngine::GraphicsBufferHandle> buffer, uint32_t bufferOffset, uint32_t windowSize,
                                                                                     ::by_ref<::UnityEngine::Rendering::BatchID> ret) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                                                         { "AddDrawCommandBatch_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBufferHandle>>(), ::i2c::type_of<uint32_t>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, values, count, buffer, bufferOffset, windowSize, ret);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RemoveDrawCommandBatch_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::BatchID> batchID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                              { "RemoveDrawCommandBatch_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, batchID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RegisterMaterials_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> materialID,
                                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> batchMaterialID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                           { "RegisterMaterials_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, materialID, batchMaterialID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::UnregisterMaterial_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::BatchMaterialID> material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                              { "UnregisterMaterial_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchMaterialID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, material);
}
inline void UnityEngine::Rendering::BatchRendererGroup::RegisterMeshes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> meshID,
                                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> batchMeshID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                           { "RegisterMeshes_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, meshID, batchMeshID);
}
inline void UnityEngine::Rendering::BatchRendererGroup::UnregisterMesh_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::BatchMeshID> mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                              { "UnregisterMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchMeshID>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, mesh);
}
inline bool UnityEngine::Rendering::BatchRendererGroup::OcclusionTestAABB_Injected(::System::IntPtr occlusionBuffer, ::by_ref<::UnityEngine::Bounds> aabb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroup*>(),
                                                           { "OcclusionTestAABB_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, occlusionBuffer, aabb);
}
inline ::UnityEngine::Rendering::BatchRendererGroup* UnityEngine::Rendering::BatchRendererGroup::New_ctor(::UnityEngine::Rendering::BatchRendererGroupCreateInfo info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BatchRendererGroup*>(info));
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
