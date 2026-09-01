#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CoreUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CoreUtils___c::*)()>(&::UnityEngine::Rendering::CoreUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c2668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils___c._GetAllAssemblyTypes_b__97_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::UnityEngine::Rendering::CoreUtils___c::*)(::System::Reflection::Assembly*)>(
    &::UnityEngine::Rendering::CoreUtils___c::_GetAllAssemblyTypes_b__97_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67c266c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c*>(), { "<GetAllAssemblyTypes>b__97_0", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CoreUtils___c::setStaticF___9(::UnityEngine::Rendering::CoreUtils___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::CoreUtils___c*, "<>9", ::UnityEngine::Rendering::CoreUtils___c*>(std::forward<::UnityEngine::Rendering::CoreUtils___c*>(value));
}
inline ::UnityEngine::Rendering::CoreUtils___c* UnityEngine::Rendering::CoreUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CoreUtils___c*, "<>9", ::UnityEngine::Rendering::CoreUtils___c*>();
}
inline void UnityEngine::Rendering::CoreUtils___c::setStaticF___9__97_0(::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__97_0",
                                    ::UnityEngine::Rendering::CoreUtils___c*>(
      std::forward<::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*>(value));
}
inline ::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* UnityEngine::Rendering::CoreUtils___c::getStaticF___9__97_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__97_0",
                                           ::UnityEngine::Rendering::CoreUtils___c*>();
}
inline void UnityEngine::Rendering::CoreUtils___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils___c::_GetAllAssemblyTypes_b__97_0(::System::Reflection::Assembly* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c*>(), { "<GetAllAssemblyTypes>b__97_0", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method, t);
}
inline ::UnityEngine::Rendering::CoreUtils___c* UnityEngine::Rendering::CoreUtils___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CoreUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils___c::CoreUtils___c() {}
template <typename T> inline void UnityEngine::Rendering::CoreUtils___c__98_1<T>::setStaticF___9(::UnityEngine::Rendering::CoreUtils___c__98_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*, "<>9", ::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>(
      std::forward<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::CoreUtils___c__98_1<T>* UnityEngine::Rendering::CoreUtils___c__98_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*, "<>9", ::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>();
}
template <typename T> inline void UnityEngine::Rendering::CoreUtils___c__98_1<T>::setStaticF___9__98_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__98_0", ::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>(
      std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Type*, bool>* UnityEngine::Rendering::CoreUtils___c__98_1<T>::getStaticF___9__98_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__98_0", ::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>();
}
template <typename T> inline void UnityEngine::Rendering::CoreUtils___c__98_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::CoreUtils___c__98_1<T>::_GetAllTypesDerivedFrom_b__98_0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>(), { "<GetAllTypesDerivedFrom>b__98_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
template <typename T> inline ::UnityEngine::Rendering::CoreUtils___c__98_1<T>* UnityEngine::Rendering::CoreUtils___c__98_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CoreUtils___c__98_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::CoreUtils___c__98_1<T>::CoreUtils___c__98_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_blackCubeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_blackCubeTexture)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x67be090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_blackCubeTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_magentaCubeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_magentaCubeTexture)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x67be220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_magentaCubeTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_magentaCubeTextureArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CubemapArray> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_magentaCubeTextureArray)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x67be3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_magentaCubeTextureArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_whiteCubeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_whiteCubeTexture)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x67be590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_whiteCubeTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_emptyUAV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_emptyUAV)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x67be720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_emptyUAV", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_emptyBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)()>(&::UnityEngine::Rendering::CoreUtils::get_emptyBuffer)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x67be85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_emptyBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_blackVolumeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_blackVolumeTexture)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x67be984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_blackVolumeTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_whiteVolumeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_whiteVolumeTexture)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x67beb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_whiteVolumeTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ClearRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::CoreUtils::ClearRenderTarget)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67beca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                            { "ClearRenderTarget",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.FixupDepthSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::CoreUtils::FixupDepthSlice)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67bed2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "FixupDepthSlice", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.FixupDepthSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::CubemapFace)>(&::UnityEngine::Rendering::CoreUtils::FixupDepthSlice)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67bed70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                           { "FixupDepthSlice", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag,
                                                                ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67bed84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetRenderTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag,
                                                                int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x67bee84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                            { "SetRenderTarget",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67bef48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetRenderTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x67bf138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetRenderTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier,
                         ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x67bf020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                    ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>,
                                                                ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67bf214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "SetRenderTarget",
                                                                                                                        {},
                                                                                                                        { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                                                                          ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>,
                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x67bf39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>,
                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67bf2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                    ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67bf448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67bf52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67bf600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67bf708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetRenderTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x67bf7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                    ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67bf8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(),
                                                    ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag,
    ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x67bf9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                    ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67bfb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x67bfc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetViewportAndClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag,
                                                                ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetViewportAndClear)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67bfd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetViewportAndClear",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag,
                                                                ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67bfe20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetRenderTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, int32_t,
                                                                ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67badb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                            { "SetRenderTarget",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, int32_t,
                                                                ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x67bff2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                            { "SetRenderTarget",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
                                                                ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x67c0108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetRenderTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
                                                                ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x67bffd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                    ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction,
                                                                ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t,
                                                                ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67bb2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color,
    int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x67c01b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                    ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>,
                                                                ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67c0344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "SetRenderTarget",
                                                                                                                        {},
                                                                                                                        { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                                                                          ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>,
                                                                ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67c03f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>,
                                                                ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67c04b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                            { "SetRenderTarget",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::CoreUtils::SetViewport)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67bfdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetViewport", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples)>(
    &::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x67aff04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "GetRenderTargetAutoName",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::StringW, bool, bool,
                                                                     ::UnityEngine::Rendering::MSAASamples)>(&::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x67c0950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                         { "GetRenderTargetAutoName",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::TextureDimension,
                                                                     ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples, bool, bool)>(
    &::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x67af68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                         { "GetRenderTargetAutoName",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::StringW, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, bool,
                                                                     ::UnityEngine::Rendering::MSAASamples, bool, bool)>(&::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x67c05ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "GetRenderTargetAutoName",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::UnityEngine::TextureFormat, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67c0a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "GetTextureAutoName",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::TextureDimension, ::StringW,
                                                                     bool, int32_t)>(&::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67c0f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "GetTextureAutoName",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::StringW, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x67c0b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "GetTextureAutoName",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ClearCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Color, bool)>(
    &::UnityEngine::Rendering::CoreUtils::ClearCubemap)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x67c1014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "ClearCubemap",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(),
                                                                                         ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x67c11d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                           { "DrawFullScreen",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                               ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67c1280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "DrawFullScreen",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                         ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67c130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                           { "DrawFullScreen",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                                               ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x67c13e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "DrawFullScreen",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                 ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>,
                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(
    &::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x67c14d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "DrawFullScreen",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                    ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>,
                                                                ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x67c15b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                           { "DrawFullScreen",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                                                               ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ConvertSRGBToActiveColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::ConvertSRGBToActiveColorSpace)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67c166c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "ConvertSRGBToActiveColorSpace", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ConvertLinearToActiveColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::ConvertLinearToActiveColorSpace)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67c1740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "ConvertLinearToActiveColorSpace", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateEngineMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::StringW)>(&::UnityEngine::Rendering::CoreUtils::CreateEngineMaterial)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x67c1814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "CreateEngineMaterial", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateEngineMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Shader*)>(&::UnityEngine::Rendering::CoreUtils::CreateEngineMaterial)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67b8c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "CreateEngineMaterial", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67c19a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::StringW, bool)>(
    &::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67c19cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                            { "SetKeyword",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BaseCommandBuffer*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67c1a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67c1a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Rendering::LocalKeyword, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67c1ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                         { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ComputeShader*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67c1b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Rendering::CoreUtils::Destroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67ab438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetAllAssemblyTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(&::UnityEngine::Rendering::CoreUtils::GetAllAssemblyTypes)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x67c1b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetAllAssemblyTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SafeRelease
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::CoreUtils::SafeRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c1ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "SafeRelease", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SafeRelease
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::CoreUtils::SafeRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c1cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "SafeRelease", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateCubeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Rendering::CoreUtils::CreateCubeMesh)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x67c1cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "CreateCubeMesh", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ArePostProcessesEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::ArePostProcessesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c20ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "ArePostProcessesEnabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.AreAnimatedMaterialsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::AreAnimatedMaterialsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c20b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "AreAnimatedMaterialsEnabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneLightingDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsSceneLightingDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c20bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsSceneLightingDisabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsLightOverlapDebugEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsLightOverlapDebugEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c20c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsLightOverlapDebugEnabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneViewFogEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsSceneViewFogEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c20cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsSceneViewFogEnabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneFilteringEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::CoreUtils::IsSceneFilteringEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c20d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsSceneFilteringEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneViewPrefabStageContextHidden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::CoreUtils::IsSceneViewPrefabStageContextHidden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c20dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsSceneViewPrefabStageContextHidden", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RendererList)>(
    &::UnityEngine::Rendering::CoreUtils::DrawRendererList)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67c20e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                             { "DrawRendererList",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::CoreUtils::GetTextureHash)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x67b28cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetTextureHash", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.PreviousPowerOfTwo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::CoreUtils::PreviousPowerOfTwo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67c211c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "PreviousPowerOfTwo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetMipCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::CoreUtils::GetMipCount)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67c2148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetMipCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetMipCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::UnityEngine::Rendering::CoreUtils::GetMipCount)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67b16b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetMipCount", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DivRoundUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DivRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67c2214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "DivRoundUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetCorePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Rendering::CoreUtils::GetCorePath)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67c2224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetCorePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CalculateViewSpaceCorners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::Matrix4x4, float_t)>(&::UnityEngine::Rendering::CoreUtils::CalculateViewSpaceCorners)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x67c2268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "CalculateViewSpaceCorners", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CoreUtils::setStaticF_lookAtList(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "lookAtList", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::CoreUtils::getStaticF_lookAtList() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "lookAtList", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_upVectorList(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "upVectorList", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::CoreUtils::getStaticF_upVectorList() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "upVectorList", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_BlackCubeTexture(::UnityW<::UnityEngine::Cubemap> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_BlackCubeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_BlackCubeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_BlackCubeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_MagentaCubeTexture(::UnityW<::UnityEngine::Cubemap> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_MagentaCubeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_MagentaCubeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_MagentaCubeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_MagentaCubeTextureArray(::UnityW<::UnityEngine::CubemapArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::CubemapArray>, "m_MagentaCubeTextureArray", ::UnityEngine::Rendering::CoreUtils*>(
      std::forward<::UnityW<::UnityEngine::CubemapArray>>(value));
}
inline ::UnityW<::UnityEngine::CubemapArray> UnityEngine::Rendering::CoreUtils::getStaticF_m_MagentaCubeTextureArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::CubemapArray>, "m_MagentaCubeTextureArray", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_WhiteCubeTexture(::UnityW<::UnityEngine::Cubemap> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_WhiteCubeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_WhiteCubeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_WhiteCubeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_EmptyUAV(::UnityW<::UnityEngine::RenderTexture> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::RenderTexture>, "m_EmptyUAV", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::RenderTexture>>(value));
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::CoreUtils::getStaticF_m_EmptyUAV() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::RenderTexture>, "m_EmptyUAV", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_EmptyBuffer(::UnityEngine::GraphicsBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GraphicsBuffer*, "m_EmptyBuffer", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityEngine::GraphicsBuffer*>(value));
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::CoreUtils::getStaticF_m_EmptyBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::GraphicsBuffer*, "m_EmptyBuffer", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_BlackVolumeTexture(::UnityW<::UnityEngine::Texture3D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackVolumeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::getStaticF_m_BlackVolumeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackVolumeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_WhiteVolumeTexture(::UnityW<::UnityEngine::Texture3D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_WhiteVolumeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::getStaticF_m_WhiteVolumeTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_WhiteVolumeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "m_AssemblyTypes", ::UnityEngine::Rendering::CoreUtils*>(
      std::forward<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::getStaticF_m_AssemblyTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "m_AssemblyTypes", ::UnityEngine::Rendering::CoreUtils*>();
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_blackCubeTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_blackCubeTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_magentaCubeTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_magentaCubeTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::CubemapArray> UnityEngine::Rendering::CoreUtils::get_magentaCubeTextureArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_magentaCubeTextureArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CubemapArray>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_whiteCubeTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_whiteCubeTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::CoreUtils::get_emptyUAV() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_emptyUAV", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::CoreUtils::get_emptyBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_emptyBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::get_blackVolumeTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_blackVolumeTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::get_whiteVolumeTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "get_whiteVolumeTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
          { "ClearRenderTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, clearFlag, clearColor);
}
inline int32_t UnityEngine::Rendering::CoreUtils::FixupDepthSlice(int32_t depthSlice, ::UnityEngine::Rendering::RTHandle* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "FixupDepthSlice", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, depthSlice, buffer);
}
inline int32_t UnityEngine::Rendering::CoreUtils::FixupDepthSlice(int32_t depthSlice, ::UnityEngine::CubemapFace cubemapFace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                         { "FixupDepthSlice", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, depthSlice, cubemapFace);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                          { "SetRenderTarget",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                              ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                                               ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "SetRenderTarget",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                  ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                          { "SetRenderTarget",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                          { "SetRenderTarget",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag,
                                                   clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, miplevel,
                                                   cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "SetRenderTarget",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                  ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag,
                                                   clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer,
                                                                   ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetViewportAndClear",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                          { "SetRenderTarget",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                              ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                          { "SetRenderTarget",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                          { "SetRenderTarget",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                                               ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                          { "SetRenderTarget",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor,
                                                               int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "SetRenderTarget",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                               ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace,
                                                               int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer,
                                                               ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                               ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                               ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "SetRenderTarget",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                  ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag,
                                                   clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetRenderTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                                               ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                       { "SetRenderTarget",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "SetViewport", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, target);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::StringW name, bool mips,
                                                                            bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "GetRenderTargetAutoName",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, depth, format, name, mips, enableMSAA, msaaSamples);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::StringW name,
                                                                            bool mips, bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                       { "GetRenderTargetAutoName",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, depth, format, name, mips, enableMSAA, msaaSamples);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                            ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, bool enableMSAA,
                                                                            ::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes, bool dynamicResExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                       { "GetRenderTargetAutoName",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, depth, format, dim, name, mips, enableMSAA, msaaSamples, dynamicRes, dynamicResExplicit);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim,
                                                                            ::StringW name, bool mips, bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes,
                                                                            bool dynamicResExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "GetRenderTargetAutoName",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, depth, format, dim, name, mips, enableMSAA, msaaSamples, dynamicRes, dynamicResExplicit);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, ::UnityEngine::Rendering::TextureDimension dim,
                                                                       ::StringW name, bool mips, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "GetTextureAutoName",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                       ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "GetTextureAutoName",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips,
                                                                       int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "GetTextureAutoName",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline void UnityEngine::Rendering::CoreUtils::ClearCubemap(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::Color clearColor,
                                                            bool clearMips) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "ClearCubemap",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(),
                                                                                       ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, renderTexture, clearColor, clearMips);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                         { "DrawFullScreen",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                             ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::RasterCommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "DrawFullScreen",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                       ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                         { "DrawFullScreen",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                                             ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, colorBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer,
                                                              ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "DrawFullScreen",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, colorBuffer, depthStencilBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                                              ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties,
                                                              int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "DrawFullScreen",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                  ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                  ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, colorBuffers, depthStencilBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                                              ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers, ::UnityEngine::MaterialPropertyBlock* properties,
                                                              int32_t shaderPassId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                         { "DrawFullScreen",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                             ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                                                             ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, colorBuffers, properties, shaderPassId);
}
inline ::UnityEngine::Color UnityEngine::Rendering::CoreUtils::ConvertSRGBToActiveColorSpace(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "ConvertSRGBToActiveColorSpace", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color UnityEngine::Rendering::CoreUtils::ConvertLinearToActiveColorSpace(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "ConvertLinearToActiveColorSpace", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::CoreUtils::CreateEngineMaterial(::StringW shaderPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "CreateEngineMaterial", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, shaderPath);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::CoreUtils::CreateEngineMaterial(::UnityEngine::Shader* shader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "CreateEngineMaterial", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, shader);
}
template <typename T> inline bool UnityEngine::Rendering::CoreUtils::HasFlag(T mask, T flag) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "HasFlag", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, flag);
}
template <typename T> inline void UnityEngine::Rendering::CoreUtils::Swap(::by_ref<T> a, ::by_ref<T> b) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                                                              { "Swap", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW keyword, bool state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
          { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::StringW keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Material* material, ::StringW keyword, bool state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                              { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cs, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::Destroy(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::GetAllAssemblyTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetAllAssemblyTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::GetAllTypesDerivedFrom() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetAllTypesDerivedFrom", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::SafeRelease(::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "SafeRelease", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void UnityEngine::Rendering::CoreUtils::SafeRelease(::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "SafeRelease", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::CoreUtils::CreateCubeMesh(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "CreateCubeMesh", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, min, max);
}
inline bool UnityEngine::Rendering::CoreUtils::ArePostProcessesEnabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "ArePostProcessesEnabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::AreAnimatedMaterialsEnabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "AreAnimatedMaterialsEnabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneLightingDisabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsSceneLightingDisabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsLightOverlapDebugEnabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsLightOverlapDebugEnabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneViewFogEnabled(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsSceneViewFogEnabled", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneFilteringEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsSceneFilteringEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneViewPrefabStageContextHidden() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "IsSceneViewPrefabStageContextHidden", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                                                           { "DrawRendererList",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderContext, cmd, rendererList);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetTextureHash(::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetTextureHash", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, texture);
}
inline int32_t UnityEngine::Rendering::CoreUtils::PreviousPowerOfTwo(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "PreviousPowerOfTwo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetMipCount(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetMipCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetMipCount(float_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetMipCount", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::DivRoundUp(int32_t value, int32_t divisor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "DivRoundUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, divisor);
}
template <typename T> inline T UnityEngine::Rendering::CoreUtils::GetLastEnumValue() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetLastEnumValue", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetCorePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "GetCorePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::CoreUtils::CalculateViewSpaceCorners(::UnityEngine::Matrix4x4 proj, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(), { "CalculateViewSpaceCorners", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, proj, z);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils::CoreUtils() {}
