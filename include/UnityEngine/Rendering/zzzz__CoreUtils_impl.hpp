#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__CubemapArray_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils_Sections::CoreUtils_Sections() {}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils_Priorities::CoreUtils_Priorities() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CoreUtils___c::*)()>(&::UnityEngine::Rendering::CoreUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x660b500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils___c._GetAllAssemblyTypes_b__97_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (
    ::UnityEngine::Rendering::CoreUtils___c::*)(::System::Reflection::Assembly*)>(&::UnityEngine::Rendering::CoreUtils___c::_GetAllAssemblyTypes_b__97_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x660b504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c*>::get(), "<GetAllAssemblyTypes>b__97_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CoreUtils___c::setStaticF___9(::UnityEngine::Rendering::CoreUtils___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::CoreUtils___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c*>::get>(
      std::forward<::UnityEngine::Rendering::CoreUtils___c*>(value));
}
inline ::UnityEngine::Rendering::CoreUtils___c* UnityEngine::Rendering::CoreUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CoreUtils___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils___c::setStaticF___9__97_0(::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__97_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*>(value));
}
inline ::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* UnityEngine::Rendering::CoreUtils___c::getStaticF___9__97_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__97_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils___c::_GetAllAssemblyTypes_b__97_0(::System::Reflection::Assembly* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c*>::get(), "<GetAllAssemblyTypes>b__97_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method, t);
}
inline ::UnityEngine::Rendering::CoreUtils___c* UnityEngine::Rendering::CoreUtils___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::CoreUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils___c::CoreUtils___c() {}
template <typename T> inline void UnityEngine::Rendering::CoreUtils___c__98_1<T>::setStaticF___9(::UnityEngine::Rendering::CoreUtils___c__98_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>::get>(
      std::forward<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::CoreUtils___c__98_1<T>* UnityEngine::Rendering::CoreUtils___c__98_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::Rendering::CoreUtils___c__98_1<T>::setStaticF___9__98_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__98_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>::get>(
      std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Type*, bool>* UnityEngine::Rendering::CoreUtils___c__98_1<T>::getStaticF___9__98_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__98_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::Rendering::CoreUtils___c__98_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::CoreUtils___c__98_1<T>::_GetAllTypesDerivedFrom_b__98_0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>::get(), "<GetAllTypesDerivedFrom>b__98_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
template <typename T> inline ::UnityEngine::Rendering::CoreUtils___c__98_1<T>* UnityEngine::Rendering::CoreUtils___c__98_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::CoreUtils___c__98_1<T>::CoreUtils___c__98_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_blackCubeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_blackCubeTexture)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6606f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                               "get_blackCubeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_magentaCubeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_magentaCubeTexture)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x66070b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                               "get_magentaCubeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_magentaCubeTextureArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::CubemapArray> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_magentaCubeTextureArray)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6607248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                               "get_magentaCubeTextureArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_whiteCubeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_whiteCubeTexture)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6607428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                               "get_whiteCubeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_emptyUAV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_emptyUAV)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x66075b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "get_emptyUAV",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_emptyBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (*)()>(&::UnityEngine::Rendering::CoreUtils::get_emptyBuffer)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66076f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "get_emptyBuffer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_blackVolumeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_blackVolumeTexture)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x660781c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                               "get_blackVolumeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_whiteVolumeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_whiteVolumeTexture)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x66079ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                               "get_whiteVolumeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ClearRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::CoreUtils::ClearRenderTarget)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6607b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.FixupDepthSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::CoreUtils::FixupDepthSlice)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6607bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "FixupDepthSlice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.FixupDepthSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::UnityEngine::CubemapFace)>(&::UnityEngine::Rendering::CoreUtils::FixupDepthSlice)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6607c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "FixupDepthSlice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                                           ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6607c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                                           ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6607d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                                           ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6607de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier,
                         ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6607fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier,
                         ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6607eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                         ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x66080ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                         ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6608234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                         ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x660814c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x66082e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x66083c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6608498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66085a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6608654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6608770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag,
    ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x660887c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x66089b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6608ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetViewportAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
        &::UnityEngine::Rendering::CoreUtils::SetViewportAndClear)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6608b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetViewportAndClear", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*,
                                                                                           ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6608cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
        &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6603c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
        &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6608dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, int32_t,
                         ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6608fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color,
                         int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6608e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x660413c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color,
    int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6609050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                         ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66091dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                         ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6609290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                         ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6609350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::CoreUtils::SetViewport)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6608c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetViewport", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(
    int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples)>(&::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x65f8d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetRenderTargetAutoName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples)>(
        &::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x66097e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetRenderTargetAutoName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, bool,
                              ::UnityEngine::Rendering::MSAASamples, bool, bool)>(&::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x65f8524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetRenderTargetAutoName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::StringW, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples, bool, bool)>(
        &::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x6609444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetRenderTargetAutoName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, int32_t, ::UnityEngine::TextureFormat, ::UnityEngine::Rendering::TextureDimension, ::StringW,
                                                                                                bool, int32_t)>(&::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x66098ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetTextureAutoName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, int32_t)>(
        &::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6609dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetTextureAutoName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, int32_t, ::StringW, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x66099d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetTextureAutoName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ClearCubemap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Color, bool)>(
    &::UnityEngine::Rendering::CoreUtils::ClearCubemap)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6609eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ClearCubemap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x660a068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Material*,
                                                                                           ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x660a118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(
        &::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x660a1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier,
                         ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x660a27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x660a368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
    ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x660a448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ConvertSRGBToActiveColorSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color)>(
    &::UnityEngine::Rendering::CoreUtils::ConvertSRGBToActiveColorSpace)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x660a504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ConvertSRGBToActiveColorSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ConvertLinearToActiveColorSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color)>(
    &::UnityEngine::Rendering::CoreUtils::ConvertLinearToActiveColorSpace)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x660a5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ConvertLinearToActiveColorSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateEngineMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::StringW)>(&::UnityEngine::Rendering::CoreUtils::CreateEngineMaterial)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x660a6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "CreateEngineMaterial",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateEngineMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::CoreUtils::CreateEngineMaterial)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6601ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "CreateEngineMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::StringW, bool)>(
    &::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x660a838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::StringW, bool)>(
    &::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x660a864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::BaseCommandBuffer*, ::StringW, bool)>(
    &::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x660a8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BaseCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x660a930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Rendering::LocalKeyword, bool)>(
    &::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x660a95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LocalKeyword>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ComputeShader*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x660a9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Rendering::CoreUtils::Destroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65f42d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetAllAssemblyTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(
    &::UnityEngine::Rendering::CoreUtils::GetAllAssemblyTypes)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x660a9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                               "GetAllAssemblyTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SafeRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::CoreUtils::SafeRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x660ab7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SafeRelease", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SafeRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::CoreUtils::SafeRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x660ab88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SafeRelease", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateCubeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::CoreUtils::CreateCubeMesh)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x660ab94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "CreateCubeMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ArePostProcessesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::ArePostProcessesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x660af44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ArePostProcessesEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.AreAnimatedMaterialsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::AreAnimatedMaterialsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x660af4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "AreAnimatedMaterialsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneLightingDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsSceneLightingDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x660af54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "IsSceneLightingDisabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsLightOverlapDebugEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsLightOverlapDebugEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x660af5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "IsLightOverlapDebugEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneViewFogEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsSceneViewFogEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x660af64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "IsSceneViewFogEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneFilteringEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::CoreUtils::IsSceneFilteringEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x660af6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                               "IsSceneFilteringEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneViewPrefabStageContextHidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::CoreUtils::IsSceneViewPrefabStageContextHidden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x660af74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "IsSceneViewPrefabStageContextHidden",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*,
                                                                                           ::UnityEngine::Rendering::RendererList)>(&::UnityEngine::Rendering::CoreUtils::DrawRendererList)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x660af7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawRendererList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::CoreUtils::GetTextureHash)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x65fb764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetTextureHash", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.PreviousPowerOfTwo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::CoreUtils::PreviousPowerOfTwo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x660afb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "PreviousPowerOfTwo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetMipCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::CoreUtils::GetMipCount)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x660afe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetMipCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetMipCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(float_t)>(&::UnityEngine::Rendering::CoreUtils::GetMipCount)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65fa550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetMipCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DivRoundUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DivRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x660b0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DivRoundUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetCorePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Rendering::CoreUtils::GetCorePath)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x660b0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetCorePath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CalculateViewSpaceCorners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (*)(::UnityEngine::Matrix4x4, float_t)>(
    &::UnityEngine::Rendering::CoreUtils::CalculateViewSpaceCorners)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x660b100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "CalculateViewSpaceCorners", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CoreUtils::setStaticF_lookAtList(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "lookAtList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::Rendering::CoreUtils::getStaticF_lookAtList() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "lookAtList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_upVectorList(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "upVectorList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::Rendering::CoreUtils::getStaticF_upVectorList() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "upVectorList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_BlackCubeTexture(::UnityW<::UnityEngine::Cubemap> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_BlackCubeTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_BlackCubeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_BlackCubeTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_MagentaCubeTexture(::UnityW<::UnityEngine::Cubemap> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_MagentaCubeTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_MagentaCubeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_MagentaCubeTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_MagentaCubeTextureArray(::UnityW<::UnityEngine::CubemapArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::CubemapArray>, "m_MagentaCubeTextureArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(std::forward<::UnityW<::UnityEngine::CubemapArray>>(value));
}
inline ::UnityW<::UnityEngine::CubemapArray> UnityEngine::Rendering::CoreUtils::getStaticF_m_MagentaCubeTextureArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::CubemapArray>, "m_MagentaCubeTextureArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_WhiteCubeTexture(::UnityW<::UnityEngine::Cubemap> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_WhiteCubeTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_WhiteCubeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_WhiteCubeTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_EmptyUAV(::UnityW<::UnityEngine::RenderTexture> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::RenderTexture>, "m_EmptyUAV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::UnityW<::UnityEngine::RenderTexture>>(value));
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::CoreUtils::getStaticF_m_EmptyUAV() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::RenderTexture>, "m_EmptyUAV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_EmptyBuffer(::UnityEngine::GraphicsBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GraphicsBuffer*, "m_EmptyBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::UnityEngine::GraphicsBuffer*>(value));
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::CoreUtils::getStaticF_m_EmptyBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::GraphicsBuffer*, "m_EmptyBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_BlackVolumeTexture(::UnityW<::UnityEngine::Texture3D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackVolumeTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::getStaticF_m_BlackVolumeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackVolumeTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_WhiteVolumeTexture(::UnityW<::UnityEngine::Texture3D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_WhiteVolumeTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::getStaticF_m_WhiteVolumeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_WhiteVolumeTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "m_AssemblyTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>(
      std::forward<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::getStaticF_m_AssemblyTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "m_AssemblyTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get>();
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_blackCubeTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                             "get_blackCubeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_magentaCubeTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                             "get_magentaCubeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::CubemapArray> UnityEngine::Rendering::CoreUtils::get_magentaCubeTextureArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                             "get_magentaCubeTextureArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CubemapArray>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_whiteCubeTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                             "get_whiteCubeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::CoreUtils::get_emptyUAV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "get_emptyUAV",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::CoreUtils::get_emptyBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "get_emptyBuffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::get_blackVolumeTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                             "get_blackVolumeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::get_whiteVolumeTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                             "get_whiteVolumeTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, clearFlag, clearColor);
}
inline int32_t UnityEngine::Rendering::CoreUtils::FixupDepthSlice(int32_t depthSlice, ::UnityEngine::Rendering::RTHandle* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "FixupDepthSlice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, depthSlice, buffer);
}
inline int32_t UnityEngine::Rendering::CoreUtils::FixupDepthSlice(int32_t depthSlice, ::UnityEngine::CubemapFace cubemapFace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "FixupDepthSlice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, depthSlice, cubemapFace);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                                               ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                               ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                               ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                               ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag,
                                                          clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, miplevel,
                                                          cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag,
                                                          clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer,
                                                                   ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetViewportAndClear", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                                               ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor,
                                                               int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag,
                                                          clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                               ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                               ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                               ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetViewport", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, target);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::StringW name, bool mips,
                                                                            bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetRenderTargetAutoName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, width, height, depth, format, name, mips, enableMSAA, msaaSamples);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::StringW name,
                                                                            bool mips, bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetRenderTargetAutoName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, width, height, depth, format, name, mips, enableMSAA, msaaSamples);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                            ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, bool enableMSAA,
                                                                            ::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes, bool dynamicResExplicit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetRenderTargetAutoName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, width, height, depth, format, dim, name, mips, enableMSAA, msaaSamples, dynamicRes, dynamicResExplicit);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim,
                                                                            ::StringW name, bool mips, bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes,
                                                                            bool dynamicResExplicit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetRenderTargetAutoName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, width, height, depth, format, dim, name, mips, enableMSAA, msaaSamples, dynamicRes, dynamicResExplicit);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, ::UnityEngine::Rendering::TextureDimension dim,
                                                                       ::StringW name, bool mips, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetTextureAutoName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                       ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetTextureAutoName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips,
                                                                       int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetTextureAutoName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureDimension>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline void UnityEngine::Rendering::CoreUtils::ClearCubemap(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::Color clearColor,
                                                            bool clearMips) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ClearCubemap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, renderTexture, clearColor, clearMips);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, commandBuffer, material, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::RasterCommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, commandBuffer, material, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, commandBuffer, material, colorBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer,
                                                              ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, commandBuffer, material, colorBuffer, depthStencilBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                                              ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties,
                                                              int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, commandBuffer, material, colorBuffers, depthStencilBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                                              ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawFullScreen", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, commandBuffer, material, colorBuffers, properties, shaderPassId);
}
inline ::UnityEngine::Color UnityEngine::Rendering::CoreUtils::ConvertSRGBToActiveColorSpace(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ConvertSRGBToActiveColorSpace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color UnityEngine::Rendering::CoreUtils::ConvertLinearToActiveColorSpace(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ConvertLinearToActiveColorSpace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, color);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::CoreUtils::CreateEngineMaterial(::StringW shaderPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "CreateEngineMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, shaderPath);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::CoreUtils::CreateEngineMaterial(::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "CreateEngineMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, shader);
}
template <typename T> inline bool UnityEngine::Rendering::CoreUtils::HasFlag(T mask, T flag) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "HasFlag",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mask, flag);
}
template <typename T> inline void UnityEngine::Rendering::CoreUtils::Swap(::ByRef<T> a, ::ByRef<T> b) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "Swap",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, cs, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::StringW keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BaseCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Material* material, ::StringW keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LocalKeyword>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cs, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::Destroy(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::GetAllAssemblyTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetAllAssemblyTypes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::GetAllTypesDerivedFrom() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetAllTypesDerivedFrom",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::SafeRelease(::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SafeRelease", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer);
}
inline void UnityEngine::Rendering::CoreUtils::SafeRelease(::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "SafeRelease", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::CoreUtils::CreateCubeMesh(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "CreateCubeMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method, min, max);
}
inline bool UnityEngine::Rendering::CoreUtils::ArePostProcessesEnabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "ArePostProcessesEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::AreAnimatedMaterialsEnabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "AreAnimatedMaterialsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneLightingDisabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "IsSceneLightingDisabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsLightOverlapDebugEnabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "IsLightOverlapDebugEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneViewFogEnabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "IsSceneViewFogEnabled", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneFilteringEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                             "IsSceneFilteringEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneViewPrefabStageContextHidden() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "IsSceneViewPrefabStageContextHidden",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DrawRendererList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderContext, cmd, rendererList);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetTextureHash(::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetTextureHash", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, texture);
}
inline int32_t UnityEngine::Rendering::CoreUtils::PreviousPowerOfTwo(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "PreviousPowerOfTwo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetMipCount(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetMipCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetMipCount(float_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetMipCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::DivRoundUp(int32_t value, int32_t divisor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "DivRoundUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, divisor);
}
template <typename T> inline T UnityEngine::Rendering::CoreUtils::GetLastEnumValue() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetLastEnumValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetCorePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(), "GetCorePath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::Rendering::CoreUtils::CalculateViewSpaceCorners(::UnityEngine::Matrix4x4 proj, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreUtils*>::get(),
                                                                             "CalculateViewSpaceCorners", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(nullptr, ___internal_method, proj, z);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils::CoreUtils() {}
