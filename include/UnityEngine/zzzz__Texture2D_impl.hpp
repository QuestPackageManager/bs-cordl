#pragma once
// IWYU pragma private; include "UnityEngine/Texture2D.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MipmapLimitDescriptor_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureColorSpace_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Texture2D_EXRFlags::Texture2D_EXRFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Texture2D_EXRFlags::Texture2D_EXRFlags() {}
constexpr ::UnityEngine::Texture2D_EXRFlags UnityEngine::Texture2D_EXRFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Texture2D_EXRFlags UnityEngine::Texture2D_EXRFlags::OutputAsFloat{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Texture2D_EXRFlags UnityEngine::Texture2D_EXRFlags::CompressZIP{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Texture2D_EXRFlags UnityEngine::Texture2D_EXRFlags::CompressRLE{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Texture2D_EXRFlags UnityEngine::Texture2D_EXRFlags::CompressPIZ{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::Texture2D.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_format)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f0ff1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.IgnoreMipmapLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::IgnoreMipmapLimit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f0ffd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "IgnoreMipmapLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetIgnoreMipmapLimitAndReload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::SetIgnoreMipmapLimitAndReload)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f10094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetIgnoreMipmapLimitAndReload", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_mipmapLimitGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_mipmapLimitGroup)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6f10168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_mipmapLimitGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_activeMipmapLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_activeMipmapLimit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f102e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_activeMipmapLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_whiteTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_whiteTexture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f1039c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_whiteTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_blackTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_blackTexture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f104d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_blackTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_redTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_redTexture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f10614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_redTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_grayTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_grayTexture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f10750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_grayTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_linearGrayTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_linearGrayTexture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f1088c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_linearGrayTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_normalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_normalTexture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f109c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_normalTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Compress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::Compress)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f10b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Compress", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Internal_CreateEmptyImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::Texture2D::Internal_CreateEmptyImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f10bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Internal_CreateEmptyImpl", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Internal_CreateImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr, bool, ::StringW)>(
    &::UnityEngine::Texture2D::Internal_CreateImpl)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6f10c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "Internal_CreateImpl",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr, bool, ::StringW)>(
    &::UnityEngine::Texture2D::Internal_Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f10e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "Internal_Create",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_isReadable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_isReadable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f10ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { ::i2c::class_of<::UnityEngine::Texture2D*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_vtOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_vtOnly)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f10f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_vtOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ApplyImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(bool, bool)>(&::UnityEngine::Texture2D::ApplyImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f11048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ApplyImpl", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::ReinitializeImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f11134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReinitializeImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Color)>(&::UnityEngine::Texture2D::SetPixelImpl)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6f11220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { "SetPixelImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::GetPixelImpl)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6f1135c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "GetPixelImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelBilinearImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(int32_t, int32_t, float_t, float_t)>(&::UnityEngine::Texture2D::GetPixelBilinearImpl)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6f1149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { "GetPixelBilinearImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeWithFormatImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(
    &::UnityEngine::Texture2D::ReinitializeWithFormatImpl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f115dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                            { "ReinitializeWithFormatImpl",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeWithTextureFormatImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(
    &::UnityEngine::Texture2D::ReinitializeWithTextureFormatImpl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f116f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { "ReinitializeWithTextureFormatImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReadPixelsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Rect, int32_t, int32_t, bool)>(&::UnityEngine::Texture2D::ReadPixelsImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f11814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { "ReadPixelsImpl", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color>, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::SetPixelsImpl)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6f11940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixelsImpl",
                                                                            {},
                                                                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                              ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureDataImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(::System::IntPtr, uint64_t)>(&::UnityEngine::Texture2D::LoadRawTextureDataImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f11b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureDataImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureDataImplArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(::ArrayW<uint8_t>)>(&::UnityEngine::Texture2D::LoadRawTextureDataImplArray)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6f11c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureDataImplArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelDataImplArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(::System::Array*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::SetPixelDataImplArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f11d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { "SetPixelDataImplArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelDataImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::SetPixelDataImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f11e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { "SetPixelDataImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetWritableImageData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Texture2D::*)(int32_t)>(&::UnityEngine::Texture2D::GetWritableImageData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f11fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetWritableImageData", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetImageDataSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::GetImageDataSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f1208c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetImageDataSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GenerateAtlasImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector2>, int32_t, int32_t, ::by_ref<::ArrayW<::UnityEngine::Rect>>)>(
    &::UnityEngine::Texture2D::GenerateAtlasImpl)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6f12148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GenerateAtlasImpl",
                                                                                                {},
                                                                                                { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rect>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_isPreProcessed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_isPreProcessed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_isPreProcessed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_streamingMipmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_streamingMipmaps)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f1241c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_streamingMipmaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_streamingMipmapsPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_streamingMipmapsPriority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f124d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_streamingMipmapsPriority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_requestedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_requestedMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_requestedMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_requestedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t)>(&::UnityEngine::Texture2D::set_requestedMipmapLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f12650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_requestedMipmapLevel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_minimumMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_minimumMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_minimumMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_minimumMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t)>(&::UnityEngine::Texture2D::set_minimumMipmapLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f127e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_minimumMipmapLevel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadAllMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_loadAllMips)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f128b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadAllMips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_loadAllMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::set_loadAllMips)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f12970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_loadAllMips", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_calculatedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_calculatedMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_calculatedMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_desiredMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_desiredMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_desiredMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadingMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_loadingMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadingMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_loadedMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadedMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ClearRequestedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::ClearRequestedMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ClearRequestedMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.IsRequestedMipmapLevelLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::IsRequestedMipmapLevelLoaded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "IsRequestedMipmapLevelLoaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ClearMinimumMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::ClearMinimumMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f12eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ClearMinimumMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.UpdateExternalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::System::IntPtr)>(&::UnityEngine::Texture2D::UpdateExternalTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f12f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "UpdateExternalTexture", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetAllPixels32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color32>, int32_t)>(&::UnityEngine::Texture2D::SetAllPixels32)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6f1303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetAllPixels32", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetBlockOfPixels32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color32>, int32_t)>(
    &::UnityEngine::Texture2D::SetBlockOfPixels32)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6f1319c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetBlockOfPixels32",
                                                                                         {},
                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetRawTextureData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::GetRawTextureData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f1335c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetRawTextureData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::GetPixels)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f13418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                            { "GetPixels", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::GetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f1354c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "GetPixels", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (::UnityEngine::Texture2D::*)(int32_t)>(&::UnityEngine::Texture2D::GetPixels32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f13554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels32", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::GetPixels32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f13628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.PackTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rect> (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Texture2D*>, int32_t, int32_t, bool)>(
    &::UnityEngine::Texture2D::PackTextures)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f13630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                            { "PackTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.PackTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rect> (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Texture2D*>, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::PackTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f1374c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "PackTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.PackTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rect> (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Texture2D*>, int32_t)>(
    &::UnityEngine::Texture2D::PackTextures)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f13754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "PackTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels_Full
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Texture*)>(&::UnityEngine::Texture2D::CopyPixels_Full)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6f13760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CopyPixels_Full", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels_Slice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::CopyPixels_Slice)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6f13864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                         { "CopyPixels_Slice", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels_Region
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::CopyPixels_Region)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6f139b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                         { "CopyPixels_Region",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ValidateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(::UnityEngine::TextureFormat, int32_t, int32_t)>(&::UnityEngine::Texture2D::ValidateFormat)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6f13b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ValidateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::ValidateFormat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6f13c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                            { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t,
                                                   ::System::IntPtr, ::UnityEngine::MipmapLimitDescriptor)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f13dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat,
                                                                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f13ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, int32_t,
                                                                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f13ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, int32_t, ::StringW,
                                                                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6f14080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, int32_t,
                                                                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::UnityEngine::MipmapLimitDescriptor)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6f14120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f13f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t,
                                                                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6f141c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::StringW,
                                                                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6f141ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t,
                                                                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::UnityEngine::MipmapLimitDescriptor)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f14220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, ::System::IntPtr, bool,
                                                                                          ::UnityEngine::MipmapLimitDescriptor)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6f14250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f14414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f14438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { ".ctor",
                                                                                                {},
                                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool, ::UnityEngine::MipmapLimitDescriptor)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f1445c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool, bool, ::StringW)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6f14470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6f144a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Texture2D*>(),
                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool, bool)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6f14568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { ".ctor",
                                                                                                {},
                                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6f14630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6f146e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CreateExternalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool, ::System::IntPtr)>(
    &::UnityEngine::Texture2D::CreateExternalTexture)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6f14830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CreateExternalTexture",
                                                                                                {},
                                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Color)>(&::UnityEngine::Texture2D::SetPixel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f14934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Color, int32_t)>(&::UnityEngine::Texture2D::SetPixel)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f149d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { "SetPixel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color>, int32_t)>(
    &::UnityEngine::Texture2D::SetPixels)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f14a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels",
                                                                                         {},
                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color>)>(&::UnityEngine::Texture2D::SetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f14b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { "SetPixels", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color>, int32_t)>(&::UnityEngine::Texture2D::SetPixels)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f14b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color>)>(&::UnityEngine::Texture2D::SetPixels)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f14ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::GetPixel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f14bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::GetPixel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f14c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelBilinear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(float_t, float_t)>(&::UnityEngine::Texture2D::GetPixelBilinear)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f14ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelBilinear", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelBilinear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(float_t, float_t, int32_t)>(&::UnityEngine::Texture2D::GetPixelBilinear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f14d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelBilinear", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::System::IntPtr, int32_t)>(&::UnityEngine::Texture2D::LoadRawTextureData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6f14dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureData", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<uint8_t>)>(&::UnityEngine::Texture2D::LoadRawTextureData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6f14edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(bool, bool)>(&::UnityEngine::Texture2D::Apply)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f14ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Apply", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::Apply)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f1505c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Apply", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::Apply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f15064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Apply", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Reinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::Reinitialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f15070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Reinitialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Reinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(&::UnityEngine::Texture2D::Reinitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f150d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                         { "Reinitialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Reinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(
    &::UnityEngine::Texture2D::Reinitialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f150d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { "Reinitialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::Resize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f15154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(&::UnityEngine::Texture2D::Resize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f15158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(
    &::UnityEngine::Texture2D::Resize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f1515c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReadPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Rect, int32_t, int32_t, bool)>(&::UnityEngine::Texture2D::ReadPixels)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6f15160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { "ReadPixels", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReadPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Rect, int32_t, int32_t)>(&::UnityEngine::Texture2D::ReadPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f15200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReadPixels", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GenerateAtlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector2>, int32_t, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*)>(
    &::UnityEngine::Texture2D::GenerateAtlas)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6f15208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GenerateAtlas",
                                                                                         {},
                                                                                         { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rect>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color32>, int32_t)>(&::UnityEngine::Texture2D::SetPixels32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f153bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels32", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color32>)>(&::UnityEngine::Texture2D::SetPixels32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f153c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels32", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color32>, int32_t)>(
    &::UnityEngine::Texture2D::SetPixels32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f153c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels32",
                                                                                         {},
                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color32>)>(
    &::UnityEngine::Texture2D::SetPixels32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f153cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels32",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Texture2D::*)(int32_t)>(&::UnityEngine::Texture2D::GetPixels)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f153d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::GetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f15440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Texture*)>(&::UnityEngine::Texture2D::CopyPixels)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f15448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CopyPixels", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::CopyPixels)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6f154c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { "CopyPixels", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::CopyPixels)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6f15568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                         { "CopyPixels",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_ignoreMipmapLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_ignoreMipmapLimit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f15650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_ignoreMipmapLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_ignoreMipmapLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::set_ignoreMipmapLimit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f15654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_ignoreMipmapLimit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_format_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_format_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f0ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_format_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.IgnoreMipmapLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::IgnoreMipmapLimit_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f10058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "IgnoreMipmapLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetIgnoreMipmapLimitAndReload_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Texture2D::SetIgnoreMipmapLimitAndReload_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f10124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetIgnoreMipmapLimitAndReload_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_mipmapLimitGroup_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Texture2D::get_mipmapLimitGroup_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f1029c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                         { "get_mipmapLimitGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_activeMipmapLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_activeMipmapLimit_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f10360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_activeMipmapLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_whiteTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Texture2D::get_whiteTexture_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f104b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_whiteTexture_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_blackTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Texture2D::get_blackTexture_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f105ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_blackTexture_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_redTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Texture2D::get_redTexture_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f10728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_redTexture_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_grayTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Texture2D::get_grayTexture_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f10864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_grayTexture_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_linearGrayTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Texture2D::get_linearGrayTexture_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f109a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_linearGrayTexture_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_normalTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Texture2D::get_normalTexture_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f10adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_normalTexture_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Compress_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Texture2D::Compress_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f10b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Compress_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Internal_CreateImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr, bool,
                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Texture2D::Internal_CreateImpl_Injected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f10db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "Internal_CreateImpl_Injected",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_isReadable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_isReadable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f10f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_isReadable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_vtOnly_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_vtOnly_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f1100c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_vtOnly_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ApplyImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, bool)>(&::UnityEngine::Texture2D::ApplyImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f110e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ApplyImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Texture2D::ReinitializeImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f111cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "ReinitializeImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Color>)>(
    &::UnityEngine::Texture2D::SetPixelImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f112e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixelImpl_Injected",
                                                                            {},
                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Color>)>(
    &::UnityEngine::Texture2D::GetPixelImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f11428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelImpl_Injected",
                                                                            {},
                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelBilinearImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, float_t, float_t, ::by_ref<::UnityEngine::Color>)>(
    &::UnityEngine::Texture2D::GetPixelBilinearImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f11568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelBilinearImpl_Injected",
                                                                            {},
                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeWithFormatImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(
    &::UnityEngine::Texture2D::ReinitializeWithFormatImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f1168c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReinitializeWithFormatImpl_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeWithTextureFormatImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(
    &::UnityEngine::Texture2D::ReinitializeWithTextureFormatImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f117a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReinitializeWithTextureFormatImpl_Injected",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                               ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReadPixelsImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>, int32_t, int32_t, bool)>(&::UnityEngine::Texture2D::ReadPixelsImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f118d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReadPixelsImpl_Injected",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(),
                                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelsImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::SetPixelsImpl_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f11a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { "SetPixelsImpl_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureDataImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::UnityEngine::Texture2D::LoadRawTextureDataImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f11bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                { "LoadRawTextureDataImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureDataImplArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Texture2D::LoadRawTextureDataImplArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f11d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                            { "LoadRawTextureDataImplArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelDataImplArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::Array*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::SetPixelDataImplArray_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f11e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixelDataImplArray_Injected",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelDataImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::SetPixelDataImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f11f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixelDataImpl_Injected",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetWritableImageData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Texture2D::GetWritableImageData_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f12048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetWritableImageData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetImageDataSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::GetImageDataSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f1210c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetImageDataSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GenerateAtlasImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::Texture2D::GenerateAtlasImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f12304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GenerateAtlasImpl_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_isPreProcessed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_isPreProcessed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f123e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_isPreProcessed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_streamingMipmaps_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_streamingMipmaps_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f1249c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_streamingMipmaps_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_streamingMipmapsPriority_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_streamingMipmapsPriority_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_streamingMipmapsPriority_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_requestedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_requestedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_requestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_requestedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Texture2D::set_requestedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f126e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_requestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_minimumMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_minimumMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f127a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_minimumMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_minimumMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Texture2D::set_minimumMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f12870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_minimumMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadAllMips_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_loadAllMips_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadAllMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_loadAllMips_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Texture2D::set_loadAllMips_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f12a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_loadAllMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_calculatedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_calculatedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_calculatedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_desiredMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_desiredMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_desiredMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadingMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_loadingMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadingMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::get_loadedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ClearRequestedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::ClearRequestedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ClearRequestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.IsRequestedMipmapLevelLoaded_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::IsRequestedMipmapLevelLoaded_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "IsRequestedMipmapLevelLoaded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ClearMinimumMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::ClearMinimumMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f12f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ClearMinimumMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.UpdateExternalTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Texture2D::UpdateExternalTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f12ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "UpdateExternalTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetAllPixels32_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
    &::UnityEngine::Texture2D::SetAllPixels32_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f13148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Texture2D*>(),
            { "SetAllPixels32_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetBlockOfPixels32_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
    &::UnityEngine::Texture2D::SetBlockOfPixels32_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f132d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                             { "SetBlockOfPixels32_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetRawTextureData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr)>(&::UnityEngine::Texture2D::GetRawTextureData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f133dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetRawTextureData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::GetPixels_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f134d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels_Injected",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels32_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Texture2D::GetPixels32_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f135e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels32_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.PackTextures_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rect> (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Texture2D*>, int32_t, int32_t, bool)>(
    &::UnityEngine::Texture2D::PackTextures_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f136e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "PackTextures_Injected",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels_Full_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Texture2D::CopyPixels_Full_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f13820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CopyPixels_Full_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels_Slice_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::CopyPixels_Slice_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f13944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CopyPixels_Slice_Injected",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CopyPixels_Region_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::CopyPixels_Region_Injected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f13ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                            { "CopyPixels_Region_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::TextureFormat UnityEngine::Texture2D::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::IgnoreMipmapLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "IgnoreMipmapLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::SetIgnoreMipmapLimitAndReload(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetIgnoreMipmapLimitAndReload", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Texture2D::get_mipmapLimitGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_mipmapLimitGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_activeMipmapLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_activeMipmapLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_whiteTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_whiteTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_blackTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_blackTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_redTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_redTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_grayTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_grayTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_linearGrayTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_linearGrayTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_normalTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_normalTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline void UnityEngine::Texture2D::Compress(bool highQuality) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Compress", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highQuality);
}
inline bool UnityEngine::Texture2D::Internal_CreateEmptyImpl(/* [Writable] */ ::UnityEngine::Texture2D* mono) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Internal_CreateEmptyImpl", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono);
}
inline bool UnityEngine::Texture2D::Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount,
                                                        ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureColorSpace colorSpace,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex, bool ignoreMipmapLimit,
                                                        ::StringW mipmapLimitGroupName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "Internal_CreateImpl",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, w, h, mipCount, format, colorSpace, flags, nativeTex, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2D::Internal_Create(/* [Writable] */ ::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount,
                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureColorSpace colorSpace,
                                                    ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex, bool ignoreMipmapLimit,
                                                    ::StringW mipmapLimitGroupName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "Internal_Create",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mono, w, h, mipCount, format, colorSpace, flags, nativeTex, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline bool UnityEngine::Texture2D::get_isReadable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Texture2D*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::get_vtOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_vtOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ApplyImpl", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline bool UnityEngine::Texture2D::ReinitializeImpl(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReinitializeImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height);
}
inline void UnityEngine::Texture2D::SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Texture2D*>(),
          { "SetPixelImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, image, mip, x, y, color);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "GetPixelImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, image, mip, x, y);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixelBilinearImpl(int32_t image, int32_t mip, float_t u, float_t v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "GetPixelBilinearImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, image, mip, u, v);
}
inline bool UnityEngine::Texture2D::ReinitializeWithFormatImpl(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReinitializeWithFormatImpl",
                                                                                              {},
                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::ReinitializeWithTextureFormatImpl(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool hasMipMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Texture2D*>(),
                       { "ReinitializeWithTextureFormatImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height, textureFormat, hasMipMap);
}
inline void UnityEngine::Texture2D::ReadPixelsImpl(::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "ReadPixelsImpl", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destX, destY, recalculateMipMaps);
}
inline void UnityEngine::Texture2D::SetPixelsImpl(int32_t x, int32_t y, int32_t w, int32_t h, ::ArrayW<::UnityEngine::Color> pixel, int32_t miplevel, int32_t frame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixelsImpl",
                                                                                       {},
                                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, w, h, pixel, miplevel, frame);
}
inline bool UnityEngine::Texture2D::LoadRawTextureDataImpl(::System::IntPtr data, uint64_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureDataImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, size);
}
inline bool UnityEngine::Texture2D::LoadRawTextureDataImplArray(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureDataImplArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool UnityEngine::Texture2D::SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Texture2D*>(),
          { "SetPixelDataImplArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
}
inline bool UnityEngine::Texture2D::SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Texture2D*>(),
          { "SetPixelDataImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
}
inline ::System::IntPtr UnityEngine::Texture2D::GetWritableImageData(int32_t frame) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetWritableImageData", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, frame);
}
inline uint64_t UnityEngine::Texture2D::GetImageDataSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetImageDataSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::GenerateAtlasImpl(::ArrayW<::UnityEngine::Vector2> sizes, int32_t padding, int32_t atlasSize, ::by_ref<::ArrayW<::UnityEngine::Rect>> rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GenerateAtlasImpl",
                                                                                              {},
                                                                                              { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rect>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sizes, padding, atlasSize, rect);
}
inline bool UnityEngine::Texture2D::get_isPreProcessed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_isPreProcessed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::get_streamingMipmaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_streamingMipmaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_streamingMipmapsPriority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_streamingMipmapsPriority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_requestedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_requestedMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::set_requestedMipmapLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_requestedMipmapLevel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Texture2D::get_minimumMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_minimumMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::set_minimumMipmapLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_minimumMipmapLevel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Texture2D::get_loadAllMips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadAllMips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::set_loadAllMips(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_loadAllMips", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Texture2D::get_calculatedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_calculatedMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_desiredMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_desiredMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_loadingMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadingMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_loadedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadedMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::ClearRequestedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ClearRequestedMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::IsRequestedMipmapLevelLoaded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "IsRequestedMipmapLevelLoaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::ClearMinimumMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ClearMinimumMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::UpdateExternalTexture(::System::IntPtr nativeTex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "UpdateExternalTexture", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeTex);
}
inline void UnityEngine::Texture2D::SetAllPixels32(::ArrayW<::UnityEngine::Color32> colors, int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetAllPixels32", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetBlockOfPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32> colors, int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetBlockOfPixels32",
                                                                                       {},
                                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, blockWidth, blockHeight, colors, miplevel);
}
inline ::ArrayW<uint8_t> UnityEngine::Texture2D::GetRawTextureData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetRawTextureData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2D::GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, /* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                          { "GetPixels", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, x, y, blockWidth, blockHeight, miplevel);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2D::GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "GetPixels", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, x, y, blockWidth, blockHeight);
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Texture2D::GetPixels32(/* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels32", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(this, ___internal_method, miplevel);
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Texture2D::GetPixels32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rect> UnityEngine::Texture2D::PackTextures(::ArrayW<::UnityEngine::Texture2D*> textures, int32_t padding, int32_t maximumAtlasSize, bool makeNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                          { "PackTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect>>(this, ___internal_method, textures, padding, maximumAtlasSize, makeNoLongerReadable);
}
inline ::ArrayW<::UnityEngine::Rect> UnityEngine::Texture2D::PackTextures(::ArrayW<::UnityEngine::Texture2D*> textures, int32_t padding, int32_t maximumAtlasSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "PackTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect>>(this, ___internal_method, textures, padding, maximumAtlasSize);
}
inline ::ArrayW<::UnityEngine::Rect> UnityEngine::Texture2D::PackTextures(::ArrayW<::UnityEngine::Texture2D*> textures, int32_t padding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "PackTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect>>(this, ___internal_method, textures, padding);
}
inline void UnityEngine::Texture2D::CopyPixels_Full(::UnityEngine::Texture* src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CopyPixels_Full", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void UnityEngine::Texture2D::CopyPixels_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstMip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                       { "CopyPixels_Slice", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, dstMip);
}
inline void UnityEngine::Texture2D::CopyPixels_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstMip,
                                                      int32_t dstX, int32_t dstY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "CopyPixels_Region",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstMip, dstX, dstY);
}
inline bool UnityEngine::Texture2D::ValidateFormat(::UnityEngine::TextureFormat format, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format, width, height);
}
inline bool UnityEngine::Texture2D::ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                       { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format, width, height);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, ::System::IntPtr nativeTex,
                                          ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, flags, mipCount, nativeTex, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, mipCount, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount, ::StringW mipmapLimitGroupName,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, mipCount, mipmapLimitGroupName, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, mipCount, flags, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, mipCount, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount, ::StringW mipmapLimitGroupName,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, mipCount, mipmapLimitGroupName, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, mipCount, flags, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, ::System::IntPtr nativeTex,
                                          bool createUninitialized, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, textureFormat, mipCount, linear, nativeTex, createUninitialized, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                          /* [DefaultValue("-1")] */ int32_t mipCount, /* [DefaultValue("false")] */ bool linear) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Texture2D*>(),
                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, textureFormat, mipCount, linear);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                          /* [DefaultValue("-1")] */ int32_t mipCount, /* [DefaultValue("false")] */ bool linear, /* [DefaultValue("false")] */ bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, textureFormat, mipCount, linear, createUninitialized);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                          /* [DefaultValue("-1")] */ int32_t mipCount, /* [DefaultValue("false")] */ bool linear, /* [DefaultValue("false")] */ bool createUninitialized,
                                          ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, textureFormat, mipCount, linear, createUninitialized, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                          /* [DefaultValue("-1")] */ int32_t mipCount, /* [DefaultValue("false")] */ bool linear, /* [DefaultValue("false")] */ bool createUninitialized,
                                          /* [DefaultValue("true")] */ bool ignoreMipmapLimit, /* [DefaultValue("null")] */ ::StringW mipmapLimitGroupName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, textureFormat, mipCount, linear, createUninitialized, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                          /* [DefaultValue("true")] */ bool mipChain, /* [DefaultValue("false")] */ bool linear) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, textureFormat, mipChain, linear);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                          /* [DefaultValue("true")] */ bool mipChain, /* [DefaultValue("false")] */ bool linear, /* [DefaultValue("false")] */ bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, textureFormat, mipChain, linear, createUninitialized);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, textureFormat, mipChain);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::CreateExternalTexture(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool mipChain, bool linear,
                                                                                        ::System::IntPtr nativeTex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CreateExternalTexture",
                                                                                              {},
                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, width, height, format, mipChain, linear, nativeTex);
}
inline void UnityEngine::Texture2D::SetPixel(int32_t x, int32_t y, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, color);
}
inline void UnityEngine::Texture2D::SetPixel(int32_t x, int32_t y, ::UnityEngine::Color color, /* [DefaultValue("0")] */ int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "SetPixel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, color, mipLevel);
}
inline void UnityEngine::Texture2D::SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color> colors, /* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels",
                                                                                       {},
                                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, blockWidth, blockHeight, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color> colors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Texture2D*>(),
          { "SetPixels", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, blockWidth, blockHeight, colors);
}
inline void UnityEngine::Texture2D::SetPixels(::ArrayW<::UnityEngine::Color> colors, /* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetPixels(::ArrayW<::UnityEngine::Color> colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixel(int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, x, y);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixel(int32_t x, int32_t y, /* [DefaultValue("0")] */ int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, x, y, mipLevel);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixelBilinear(float_t u, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelBilinear", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, u, v);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixelBilinear(float_t u, float_t v, /* [DefaultValue("0")] */ int32_t mipLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelBilinear", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, u, v, mipLevel);
}
inline void UnityEngine::Texture2D::LoadRawTextureData(::System::IntPtr data, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureData", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, size);
}
inline void UnityEngine::Texture2D::LoadRawTextureData(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Texture2D::LoadRawTextureData(::Unity::Collections::NativeArray_1<T> data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "LoadRawTextureData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template <typename T> inline void UnityEngine::Texture2D::SetPixelData(::ArrayW<T> data, int32_t mipLevel, /* [DefaultValue("0")] */ int32_t sourceDataStartIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "SetPixelData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, mipLevel, sourceDataStartIndex);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Texture2D::SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, /* [DefaultValue("0")] */ int32_t sourceDataStartIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                          { "SetPixelData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, mipLevel, sourceDataStartIndex);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Texture2D::GetPixelData(int32_t mipLevel) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelData", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method, mipLevel);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Texture2D::GetRawTextureData() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetRawTextureData", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::Apply(/* [DefaultValue("true")] */ bool updateMipmaps, /* [DefaultValue("false")] */ bool makeNoLongerReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Apply", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Texture2D::Apply(bool updateMipmaps) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Apply", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps);
}
inline void UnityEngine::Texture2D::Apply() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Apply", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::Reinitialize(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Reinitialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height);
}
inline bool UnityEngine::Texture2D::Reinitialize(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool hasMipMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                       { "Reinitialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::Reinitialize(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Texture2D*>(),
          { "Reinitialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::Resize(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height);
}
inline bool UnityEngine::Texture2D::Resize(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::Resize(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Texture2D*>(),
                       { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height, format, hasMipMap);
}
inline void UnityEngine::Texture2D::ReadPixels(::UnityEngine::Rect source, int32_t destX, int32_t destY, /* [DefaultValue("true")] */ bool recalculateMipMaps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "ReadPixels", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destX, destY, recalculateMipMaps);
}
inline void UnityEngine::Texture2D::ReadPixels(::UnityEngine::Rect source, int32_t destX, int32_t destY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReadPixels", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destX, destY);
}
inline bool UnityEngine::Texture2D::GenerateAtlas(::ArrayW<::UnityEngine::Vector2> sizes, int32_t padding, int32_t atlasSize, ::System::Collections::Generic::List_1<::UnityEngine::Rect>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GenerateAtlas",
                                                                                       {},
                                                                                       { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rect>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sizes, padding, atlasSize, results);
}
inline void UnityEngine::Texture2D::SetPixels32(::ArrayW<::UnityEngine::Color32> colors, /* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels32", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetPixels32(::ArrayW<::UnityEngine::Color32> colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels32", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void UnityEngine::Texture2D::SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32> colors, /* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixels32",
                                                                                       {},
                                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, blockWidth, blockHeight, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32> colors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Texture2D*>(),
          { "SetPixels32", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, blockWidth, blockHeight, colors);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2D::GetPixels(/* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, miplevel);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2D::GetPixels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::CopyPixels(::UnityEngine::Texture* src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CopyPixels", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void UnityEngine::Texture2D::CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstMip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "CopyPixels", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, dstMip);
}
inline void UnityEngine::Texture2D::CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstMip,
                                               int32_t dstX, int32_t dstY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "CopyPixels",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstMip, dstX, dstY);
}
inline bool UnityEngine::Texture2D::get_ignoreMipmapLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_ignoreMipmapLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::set_ignoreMipmapLimit(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_ignoreMipmapLimit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextureFormat UnityEngine::Texture2D::get_format_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_format_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2D::IgnoreMipmapLimit_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "IgnoreMipmapLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::SetIgnoreMipmapLimitAndReload_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetIgnoreMipmapLimitAndReload_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Texture2D::get_mipmapLimitGroup_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                       { "get_mipmapLimitGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline int32_t UnityEngine::Texture2D::get_activeMipmapLimit_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_activeMipmapLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Texture2D::get_whiteTexture_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_whiteTexture_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Texture2D::get_blackTexture_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_blackTexture_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Texture2D::get_redTexture_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_redTexture_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Texture2D::get_grayTexture_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_grayTexture_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Texture2D::get_linearGrayTexture_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_linearGrayTexture_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Texture2D::get_normalTexture_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_normalTexture_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Texture2D::Compress_Injected(::System::IntPtr _unity_self, bool highQuality) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "Compress_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, highQuality);
}
inline bool UnityEngine::Texture2D::Internal_CreateImpl_Injected(/* [Writable] */ ::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount,
                                                                 ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureColorSpace colorSpace,
                                                                 ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex, bool ignoreMipmapLimit,
                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> mipmapLimitGroupName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "Internal_CreateImpl_Injected",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, w, h, mipCount, format, colorSpace, flags, nativeTex, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline bool UnityEngine::Texture2D::get_isReadable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_isReadable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2D::get_vtOnly_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_vtOnly_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ApplyImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, updateMipmaps, makeNoLongerReadable);
}
inline bool UnityEngine::Texture2D::ReinitializeImpl_Injected(::System::IntPtr _unity_self, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "ReinitializeImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, width, height);
}
inline void UnityEngine::Texture2D::SetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, int32_t x, int32_t y, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixelImpl_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, image, mip, x, y, color);
}
inline void UnityEngine::Texture2D::GetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, int32_t x, int32_t y, ::by_ref<::UnityEngine::Color> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelImpl_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, image, mip, x, y, ret);
}
inline void UnityEngine::Texture2D::GetPixelBilinearImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, float_t u, float_t v, ::by_ref<::UnityEngine::Color> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixelBilinearImpl_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, image, mip, u, v, ret);
}
inline bool UnityEngine::Texture2D::ReinitializeWithFormatImpl_Injected(::System::IntPtr _unity_self, int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                        bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReinitializeWithFormatImpl_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::ReinitializeWithTextureFormatImpl_Injected(::System::IntPtr _unity_self, int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat,
                                                                               bool hasMipMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReinitializeWithTextureFormatImpl_Injected",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, width, height, textureFormat, hasMipMap);
}
inline void UnityEngine::Texture2D::ReadPixelsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> source, int32_t destX, int32_t destY, bool recalculateMipMaps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ReadPixelsImpl_Injected",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, source, destX, destY, recalculateMipMaps);
}
inline void UnityEngine::Texture2D::SetPixelsImpl_Injected(::System::IntPtr _unity_self, int32_t x, int32_t y, int32_t w, int32_t h, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> pixel,
                                                           int32_t miplevel, int32_t frame) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "SetPixelsImpl_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, x, y, w, h, pixel, miplevel, frame);
}
inline bool UnityEngine::Texture2D::LoadRawTextureDataImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, uint64_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                              { "LoadRawTextureDataImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data, size);
}
inline bool UnityEngine::Texture2D::LoadRawTextureDataImplArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                          { "LoadRawTextureDataImplArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data);
}
inline bool UnityEngine::Texture2D::SetPixelDataImplArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize,
                                                                   int32_t sourceDataStartIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixelDataImplArray_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
}
inline bool UnityEngine::Texture2D::SetPixelDataImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize,
                                                              int32_t sourceDataStartIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "SetPixelDataImpl_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
}
inline ::System::IntPtr UnityEngine::Texture2D::GetWritableImageData_Injected(::System::IntPtr _unity_self, int32_t frame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetWritableImageData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, frame);
}
inline uint64_t UnityEngine::Texture2D::GetImageDataSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetImageDataSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::GenerateAtlasImpl_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sizes, int32_t padding, int32_t atlasSize,
                                                               ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GenerateAtlasImpl_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sizes, padding, atlasSize, rect);
}
inline bool UnityEngine::Texture2D::get_isPreProcessed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_isPreProcessed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2D::get_streamingMipmaps_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_streamingMipmaps_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Texture2D::get_streamingMipmapsPriority_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_streamingMipmapsPriority_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Texture2D::get_requestedMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_requestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::set_requestedMipmapLevel_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_requestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Texture2D::get_minimumMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_minimumMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::set_minimumMipmapLevel_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_minimumMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Texture2D::get_loadAllMips_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadAllMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::set_loadAllMips_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "set_loadAllMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Texture2D::get_calculatedMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_calculatedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Texture2D::get_desiredMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_desiredMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Texture2D::get_loadingMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadingMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Texture2D::get_loadedMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "get_loadedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::ClearRequestedMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ClearRequestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2D::IsRequestedMipmapLevelLoaded_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "IsRequestedMipmapLevelLoaded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::ClearMinimumMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "ClearMinimumMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Texture2D::UpdateExternalTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr nativeTex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "UpdateExternalTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, nativeTex);
}
inline void UnityEngine::Texture2D::SetAllPixels32_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Texture2D*>(),
                       { "SetAllPixels32_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetBlockOfPixels32_Injected(::System::IntPtr _unity_self, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight,
                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                                                           { "SetBlockOfPixels32_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, x, y, blockWidth, blockHeight, colors, miplevel);
}
inline ::ArrayW<uint8_t> UnityEngine::Texture2D::GetRawTextureData_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetRawTextureData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2D::GetPixels_Injected(::System::IntPtr _unity_self, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight,
                                                                                 /* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels_Injected",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(nullptr, ___internal_method, _unity_self, x, y, blockWidth, blockHeight, miplevel);
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Texture2D::GetPixels32_Injected(::System::IntPtr _unity_self, /* [DefaultValue("0")] */ int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "GetPixels32_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(nullptr, ___internal_method, _unity_self, miplevel);
}
inline ::ArrayW<::UnityEngine::Rect> UnityEngine::Texture2D::PackTextures_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Texture2D*> textures, int32_t padding,
                                                                                   int32_t maximumAtlasSize, bool makeNoLongerReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "PackTextures_Injected",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect>>(nullptr, ___internal_method, _unity_self, textures, padding, maximumAtlasSize, makeNoLongerReadable);
}
inline void UnityEngine::Texture2D::CopyPixels_Full_Injected(::System::IntPtr _unity_self, ::System::IntPtr src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CopyPixels_Full_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src);
}
inline void UnityEngine::Texture2D::CopyPixels_Slice_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t dstMip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(), { "CopyPixels_Slice_Injected",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src, srcElement, srcMip, dstMip);
}
inline void UnityEngine::Texture2D::CopyPixels_Region_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth,
                                                               int32_t srcHeight, int32_t dstMip, int32_t dstX, int32_t dstY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Texture2D*>(),
                          { "CopyPixels_Region_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstMip, dstX, dstY);
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, ::System::IntPtr nativeTex,
                                                                  ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, flags, mipCount, nativeTex, mipmapLimitDescriptor));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, flags));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, mipCount, flags));
}
/// [ExcludeFromDocs]
/// @brief [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount,
                                                                  ::StringW mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, mipCount, mipmapLimitGroupName, flags));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, mipCount, flags, mipmapLimitDescriptor));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, flags));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, mipCount, flags));
}
/// [ExcludeFromDocs]
/// @brief [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                                                  ::StringW mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, mipCount, mipmapLimitGroupName, flags));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, format, mipCount, flags, mipmapLimitDescriptor));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, ::System::IntPtr nativeTex,
                                                                  bool createUninitialized, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear, nativeTex, createUninitialized, mipmapLimitDescriptor));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                                                  /* [DefaultValue("-1")] */ int32_t mipCount, /* [DefaultValue("false")] */ bool linear) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                                                  /* [DefaultValue("-1")] */ int32_t mipCount, /* [DefaultValue("false")] */ bool linear,
                                                                  /* [DefaultValue("false")] */ bool createUninitialized) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear, createUninitialized));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                                                  /* [DefaultValue("-1")] */ int32_t mipCount, /* [DefaultValue("false")] */ bool linear,
                                                                  /* [DefaultValue("false")] */ bool createUninitialized, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear, createUninitialized, mipmapLimitDescriptor));
}
/// @brief [Obsolete("Please provide mipmap limit information using a MipmapLimitDescriptor argument", false)]
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                                                  /* [DefaultValue("-1")] */ int32_t mipCount, /* [DefaultValue("false")] */ bool linear,
                                                                  /* [DefaultValue("false")] */ bool createUninitialized, /* [DefaultValue("true")] */ bool ignoreMipmapLimit,
                                                                  /* [DefaultValue("null")] */ ::StringW mipmapLimitGroupName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear, createUninitialized, ignoreMipmapLimit, mipmapLimitGroupName));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                                                  /* [DefaultValue("true")] */ bool mipChain, /* [DefaultValue("false")] */ bool linear) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, textureFormat, mipChain, linear));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, /* [DefaultValue("TextureFormat.RGBA32")] */ ::UnityEngine::TextureFormat textureFormat,
                                                                  /* [DefaultValue("true")] */ bool mipChain, /* [DefaultValue("false")] */ bool linear,
                                                                  /* [DefaultValue("false")] */ bool createUninitialized) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, textureFormat, mipChain, linear, createUninitialized));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height, textureFormat, mipChain));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2D*>(width, height));
}
// Ctor Parameters []
constexpr ::UnityEngine::Texture2D::Texture2D() {}
