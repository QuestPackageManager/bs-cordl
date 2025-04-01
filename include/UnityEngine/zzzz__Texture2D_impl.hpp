#pragma once
// IWYU pragma private; include "UnityEngine/Texture2D.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureColorSpace_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextureFormat (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_format)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_format",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_ignoreMipmapLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_ignoreMipmapLimit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bf5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_ignoreMipmapLimit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_ignoreMipmapLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::set_ignoreMipmapLimit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488bf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "set_ignoreMipmapLimit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_mipmapLimitGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_mipmapLimitGroup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488bfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_mipmapLimitGroup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_activeMipmapLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_activeMipmapLimit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_activeMipmapLimit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_whiteTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_whiteTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488c054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_whiteTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_blackTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_blackTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488c07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_blackTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_redTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_redTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488c0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_redTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_grayTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_grayTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488c0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_grayTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_linearGrayTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_linearGrayTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488c0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_linearGrayTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_normalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::UnityEngine::Texture2D::get_normalTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488c11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_normalTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Compress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::Compress)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Compress", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Internal_CreateImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Texture2D*, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace,
                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr, ::StringW)>(&::UnityEngine::Texture2D::Internal_CreateImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x488c188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Internal_CreateImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 9>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureColorSpace>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Internal_Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Texture2D*, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace,
                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr, ::StringW)>(&::UnityEngine::Texture2D::Internal_Create)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x488c224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Internal_Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 9>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureColorSpace>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_isReadable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_isReadable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c318;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_vtOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_vtOnly)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488c354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_vtOnly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ApplyImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(bool, bool)>(&::UnityEngine::Texture2D::ApplyImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488c390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ApplyImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::ReinitializeImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488c3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReinitializeImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Color)>(
    &::UnityEngine::Texture2D::SetPixelImpl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x488c438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::GetPixelImpl)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x488c530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelBilinearImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(int32_t, int32_t, float_t, float_t)>(
    &::UnityEngine::Texture2D::GetPixelBilinearImpl)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x488c62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelBilinearImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeWithFormatImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(
    &::UnityEngine::Texture2D::ReinitializeWithFormatImpl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488c728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReinitializeWithFormatImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReinitializeWithTextureFormatImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(
    &::UnityEngine::Texture2D::ReinitializeWithTextureFormatImpl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488c794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReinitializeWithTextureFormatImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReadPixelsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Rect, int32_t, int32_t, bool)>(
    &::UnityEngine::Texture2D::ReadPixelsImpl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488c800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReadPixelsImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, int32_t, int32_t)>(&::UnityEngine::Texture2D::SetPixelsImpl)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488c8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelsImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureDataImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(::System::IntPtr, uint64_t)>(&::UnityEngine::Texture2D::LoadRawTextureDataImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488c96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureDataImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureDataImplArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::UnityEngine::Texture2D::LoadRawTextureDataImplArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488c9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureDataImplArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelDataImplArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(::System::Array*, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::SetPixelDataImplArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488ca04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelDataImplArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelDataImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::SetPixelDataImpl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488ca78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelDataImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetWritableImageData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::UnityEngine::Texture2D::*)(int32_t)>(&::UnityEngine::Texture2D::GetWritableImageData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488caec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetWritableImageData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetRawImageDataSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::GetRawImageDataSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetRawImageDataSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GenerateAtlasImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, int32_t, int32_t, ::ByRef<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*>>)>(
        &::UnityEngine::Texture2D::GenerateAtlasImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488cb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GenerateAtlasImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_isPreProcessed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_isPreProcessed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_isPreProcessed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_streamingMipmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_streamingMipmaps)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_streamingMipmaps",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_streamingMipmapsPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_streamingMipmapsPriority)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_streamingMipmapsPriority",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_requestedMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_requestedMipmapLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_requestedMipmapLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_requestedMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t)>(&::UnityEngine::Texture2D::set_requestedMipmapLevel)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488ccb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "set_requestedMipmapLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_minimumMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_minimumMipmapLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488ccfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_minimumMipmapLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_minimumMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t)>(&::UnityEngine::Texture2D::set_minimumMipmapLevel)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488cd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "set_minimumMipmapLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadAllMips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_loadAllMips)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_loadAllMips",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.set_loadAllMips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::set_loadAllMips)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488cdb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "set_loadAllMips", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_calculatedMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_calculatedMipmapLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cdfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_calculatedMipmapLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_desiredMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_desiredMipmapLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488ce38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_desiredMipmapLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadingMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_loadingMipmapLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488ce74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_loadingMipmapLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.get_loadedMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::get_loadedMipmapLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488ceb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_loadedMipmapLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ClearRequestedMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::ClearRequestedMipmapLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488ceec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ClearRequestedMipmapLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.IsRequestedMipmapLevelLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::IsRequestedMipmapLevelLoaded)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "IsRequestedMipmapLevelLoaded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ClearMinimumMipmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::ClearMinimumMipmapLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488cf64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ClearMinimumMipmapLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.UpdateExternalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::System::IntPtr)>(&::UnityEngine::Texture2D::UpdateExternalTexture)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488cfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "UpdateExternalTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetAllPixels32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, int32_t)>(
    &::UnityEngine::Texture2D::SetAllPixels32)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488cfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetAllPixels32", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetBlockOfPixels32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, int32_t)>(&::UnityEngine::Texture2D::SetBlockOfPixels32)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x488d038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetBlockOfPixels32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetRawTextureData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::GetRawTextureData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x488d0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetRawTextureData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::GetPixels)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488d0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::GetPixels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x488d16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> (::UnityEngine::Texture2D::*)(int32_t)>(
    &::UnityEngine::Texture2D::GetPixels32)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488d1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> (::UnityEngine::Texture2D::*)()>(
    &::UnityEngine::Texture2D::GetPixels32)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x488d220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels32",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.PackTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> (::UnityEngine::Texture2D::*)(
    ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>, int32_t, int32_t, bool)>(&::UnityEngine::Texture2D::PackTextures)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488d260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "PackTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.PackTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> (::UnityEngine::Texture2D::*)(
    ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>, int32_t, int32_t)>(&::UnityEngine::Texture2D::PackTextures)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x488d2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "PackTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.PackTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> (::UnityEngine::Texture2D::*)(
    ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>, int32_t)>(&::UnityEngine::Texture2D::PackTextures)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488d32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "PackTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ValidateFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(::UnityEngine::TextureFormat, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::ValidateFormat)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x488d388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ValidateFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ValidateFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, int32_t)>(
    &::UnityEngine::Texture2D::ValidateFormat)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x488d468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ValidateFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t, ::System::IntPtr, ::StringW)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x488d594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x488d688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::DefaultFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, int32_t, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488d778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::DefaultFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, int32_t, ::StringW, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488d7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::DefaultFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x488d6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x488d854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::StringW, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x488d880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, ::System::IntPtr, bool, bool, ::StringW)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x488d8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x488da4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x488da78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool, bool, ::StringW)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x488daa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x488dad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool, bool)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x488db98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(
    &::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x488dc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x488dd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.CreateExternalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool, ::System::IntPtr)>(
    &::UnityEngine::Texture2D::CreateExternalTexture)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x488ddbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "CreateExternalTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Color)>(&::UnityEngine::Texture2D::SetPixel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x488dec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Color, int32_t)>(
    &::UnityEngine::Texture2D::SetPixel)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x488df64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, int32_t)>(&::UnityEngine::Texture2D::SetPixels)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x488e00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(&::UnityEngine::Texture2D::SetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488e0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, int32_t)>(
    &::UnityEngine::Texture2D::SetPixels)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x488e0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(
    &::UnityEngine::Texture2D::SetPixels)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x488e14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::GetPixel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488e1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2D::GetPixel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x488e214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelBilinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(float_t, float_t)>(&::UnityEngine::Texture2D::GetPixelBilinear)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x488e28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelBilinear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelBilinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Texture2D::*)(float_t, float_t, int32_t)>(
    &::UnityEngine::Texture2D::GetPixelBilinear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488e2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelBilinear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::System::IntPtr, int32_t)>(&::UnityEngine::Texture2D::LoadRawTextureData)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x488e368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.LoadRawTextureData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::UnityEngine::Texture2D::LoadRawTextureData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x488e4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(bool, bool)>(&::UnityEngine::Texture2D::Apply)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488e5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(bool)>(&::UnityEngine::Texture2D::Apply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x488e668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)()>(&::UnityEngine::Texture2D::Apply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x488e674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Apply",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Reinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::Reinitialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488e680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Reinitialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Reinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(
    &::UnityEngine::Texture2D::Reinitialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488e70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Reinitialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Reinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(
    &::UnityEngine::Texture2D::Reinitialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x488e778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Reinitialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Resize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t)>(&::UnityEngine::Texture2D::Resize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x488e81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Resize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Resize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(
    &::UnityEngine::Texture2D::Resize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488e820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Resize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.Resize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Texture2D::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(
    &::UnityEngine::Texture2D::Resize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488e88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Resize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReadPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Rect, int32_t, int32_t, bool)>(
    &::UnityEngine::Texture2D::ReadPixels)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x488e894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReadPixels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReadPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::UnityEngine::Rect, int32_t, int32_t)>(&::UnityEngine::Texture2D::ReadPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488e934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReadPixels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GenerateAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, int32_t, int32_t,
                                                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rect>*)>(&::UnityEngine::Texture2D::GenerateAtlas)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x488e93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GenerateAtlas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rect>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, int32_t)>(
    &::UnityEngine::Texture2D::SetPixels32)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x488eaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels32", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>)>(
    &::UnityEngine::Texture2D::SetPixels32)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x488eb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(
    int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, int32_t)>(&::UnityEngine::Texture2D::SetPixels32)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x488eb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixels32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>)>(&::UnityEngine::Texture2D::SetPixels32)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x488ec18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (::UnityEngine::Texture2D::*)(int32_t)>(
    &::UnityEngine::Texture2D::GetPixels)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x488ec90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (::UnityEngine::Texture2D::*)()>(
    &::UnityEngine::Texture2D::GetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x488ed1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.SetPixelImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ByRef<::UnityEngine::Color>)>(
    &::UnityEngine::Texture2D::SetPixelImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488c4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelImpl_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, int32_t, int32_t, ::ByRef<::UnityEngine::Color>)>(
    &::UnityEngine::Texture2D::GetPixelImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488c5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelImpl_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.GetPixelBilinearImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(int32_t, int32_t, float_t, float_t, ::ByRef<::UnityEngine::Color>)>(
    &::UnityEngine::Texture2D::GetPixelBilinearImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x488c6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelBilinearImpl_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2D.ReadPixelsImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Texture2D::*)(::ByRef<::UnityEngine::Rect>, int32_t, int32_t, bool)>(
    &::UnityEngine::Texture2D::ReadPixelsImpl_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x488c874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReadPixelsImpl_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::TextureFormat UnityEngine::Texture2D::get_format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_format",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat, false>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::get_ignoreMipmapLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_ignoreMipmapLimit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::set_ignoreMipmapLimit(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "set_ignoreMipmapLimit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Texture2D::get_mipmapLimitGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_mipmapLimitGroup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_activeMipmapLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_activeMipmapLimit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_whiteTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_whiteTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_blackTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_blackTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_redTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_redTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_grayTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_grayTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_linearGrayTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_linearGrayTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::get_normalTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_normalTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Texture2D::Compress(bool highQuality) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Compress", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, highQuality);
}
inline bool UnityEngine::Texture2D::Internal_CreateImpl(::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                        ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex,
                                                        ::StringW mipmapLimitGroupName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Internal_CreateImpl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 9>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureColorSpace>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mono, w, h, mipCount, format, colorSpace, flags, nativeTex, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2D::Internal_Create(::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                    ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex,
                                                    ::StringW mipmapLimitGroupName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Internal_Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 9>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureColorSpace>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mono, w, h, mipCount, format, colorSpace, flags, nativeTex, mipmapLimitGroupName);
}
inline bool UnityEngine::Texture2D::get_isReadable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::get_vtOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_vtOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ApplyImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline bool UnityEngine::Texture2D::ReinitializeImpl(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReinitializeImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height);
}
inline void UnityEngine::Texture2D::SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, image, mip, x, y, color);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, image, mip, x, y);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixelBilinearImpl(int32_t image, int32_t mip, float_t u, float_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelBilinearImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, image, mip, u, v);
}
inline bool UnityEngine::Texture2D::ReinitializeWithFormatImpl(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReinitializeWithFormatImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::ReinitializeWithTextureFormatImpl(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReinitializeWithTextureFormatImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height, textureFormat, hasMipMap);
}
inline void UnityEngine::Texture2D::ReadPixelsImpl(::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReadPixelsImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destX, destY, recalculateMipMaps);
}
inline void UnityEngine::Texture2D::SetPixelsImpl(int32_t x, int32_t y, int32_t w, int32_t h, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> pixel, int32_t miplevel, int32_t frame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelsImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, w, h, pixel, miplevel, frame);
}
inline bool UnityEngine::Texture2D::LoadRawTextureDataImpl(::System::IntPtr data, uint64_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureDataImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, size);
}
inline bool UnityEngine::Texture2D::LoadRawTextureDataImplArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureDataImplArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
inline bool UnityEngine::Texture2D::SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelDataImplArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
}
inline bool UnityEngine::Texture2D::SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelDataImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
}
inline ::System::IntPtr UnityEngine::Texture2D::GetWritableImageData(int32_t frame) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetWritableImageData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, frame);
}
inline uint64_t UnityEngine::Texture2D::GetRawImageDataSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetRawImageDataSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::GenerateAtlasImpl(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> sizes, int32_t padding, int32_t atlasSize,
                                                      ::ByRef<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*>> rect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GenerateAtlasImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sizes, padding, atlasSize, rect);
}
inline bool UnityEngine::Texture2D::get_isPreProcessed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_isPreProcessed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::get_streamingMipmaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_streamingMipmaps",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_streamingMipmapsPriority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_streamingMipmapsPriority",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_requestedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_requestedMipmapLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::set_requestedMipmapLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "set_requestedMipmapLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Texture2D::get_minimumMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_minimumMipmapLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::set_minimumMipmapLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "set_minimumMipmapLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Texture2D::get_loadAllMips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_loadAllMips",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::set_loadAllMips(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "set_loadAllMips", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Texture2D::get_calculatedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_calculatedMipmapLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_desiredMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_desiredMipmapLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_loadingMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_loadingMipmapLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Texture2D::get_loadedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "get_loadedMipmapLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::ClearRequestedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ClearRequestedMipmapLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::IsRequestedMipmapLevelLoaded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "IsRequestedMipmapLevelLoaded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::ClearMinimumMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ClearMinimumMipmapLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::UpdateExternalTexture(::System::IntPtr nativeTex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "UpdateExternalTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativeTex);
}
inline void UnityEngine::Texture2D::SetAllPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetAllPixels32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetBlockOfPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors,
                                                       int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetBlockOfPixels32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, blockWidth, blockHeight, colors, miplevel);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::Texture2D::GetRawTextureData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetRawTextureData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::Texture2D::GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method, x, y, blockWidth, blockHeight, miplevel);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::Texture2D::GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method, x, y, blockWidth, blockHeight);
}
inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> UnityEngine::Texture2D::GetPixels32(int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, false>(this, ___internal_method, miplevel);
}
inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> UnityEngine::Texture2D::GetPixels32() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels32",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> UnityEngine::Texture2D::PackTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> textures,
                                                                                                         int32_t padding, int32_t maximumAtlasSize, bool makeNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "PackTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*>, false>(this, ___internal_method, textures, padding, maximumAtlasSize, makeNoLongerReadable);
}
inline ::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> UnityEngine::Texture2D::PackTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> textures,
                                                                                                         int32_t padding, int32_t maximumAtlasSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "PackTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*>, false>(this, ___internal_method, textures, padding, maximumAtlasSize);
}
inline ::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> UnityEngine::Texture2D::PackTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> textures,
                                                                                                         int32_t padding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "PackTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*>, false>(this, ___internal_method, textures, padding);
}
inline bool UnityEngine::Texture2D::ValidateFormat(::UnityEngine::TextureFormat format, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ValidateFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, format, width, height);
}
inline bool UnityEngine::Texture2D::ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ValidateFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, format, width, height);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, ::System::IntPtr nativeTex, ::StringW mipmapLimitGroupName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, format, flags, mipCount, nativeTex, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::DefaultFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, format, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::DefaultFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, format, mipCount, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount, ::StringW mipmapLimitGroupName,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::DefaultFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, format, mipCount, mipmapLimitGroupName, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, format, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, format, mipCount, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount, ::StringW mipmapLimitGroupName,
                                          ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::TextureCreationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, format, mipCount, mipmapLimitGroupName, flags);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, ::System::IntPtr nativeTex,
                                          bool createUninitialized, bool ignoreMipmapLimit, ::StringW mipmapLimitGroupName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, textureFormat, mipCount, linear, nativeTex, createUninitialized, ignoreMipmapLimit,
                                                          mipmapLimitGroupName);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, textureFormat, mipCount, linear);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, textureFormat, mipCount, linear, createUninitialized);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized, bool ignoreMipmapLimit,
                                          ::StringW mipmapLimitGroupName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, textureFormat, mipCount, linear, createUninitialized, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, textureFormat, mipChain, linear);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear, bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, textureFormat, mipChain, linear, createUninitialized);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, textureFormat, mipChain);
}
inline void UnityEngine::Texture2D::_ctor(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Texture2D::CreateExternalTexture(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool mipChain, bool linear,
                                                                                        ::System::IntPtr nativeTex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "CreateExternalTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method, width, height, format, mipChain, linear, nativeTex);
}
inline void UnityEngine::Texture2D::SetPixel(int32_t x, int32_t y, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, color);
}
inline void UnityEngine::Texture2D::SetPixel(int32_t x, int32_t y, ::UnityEngine::Color color, int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, color, mipLevel);
}
inline void UnityEngine::Texture2D::SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, blockWidth, blockHeight, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, blockWidth, blockHeight, colors);
}
inline void UnityEngine::Texture2D::SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixel(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, x, y);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixel(int32_t x, int32_t y, int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, x, y, mipLevel);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixelBilinear(float_t u, float_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelBilinear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, u, v);
}
inline ::UnityEngine::Color UnityEngine::Texture2D::GetPixelBilinear(float_t u, float_t v, int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelBilinear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, u, v, mipLevel);
}
inline void UnityEngine::Texture2D::LoadRawTextureData(::System::IntPtr data, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, size);
}
inline void UnityEngine::Texture2D::LoadRawTextureData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
template <typename T> inline void UnityEngine::Texture2D::LoadRawTextureData(::Unity::Collections::NativeArray_1<T> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "LoadRawTextureData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
template <typename T> inline void UnityEngine::Texture2D::SetPixelData(::ArrayW<T, ::Array<T>*> data, int32_t mipLevel, int32_t sourceDataStartIndex) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelData",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, mipLevel, sourceDataStartIndex);
}
template <typename T> inline void UnityEngine::Texture2D::SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, int32_t sourceDataStartIndex) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelData",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, mipLevel, sourceDataStartIndex);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Texture2D::GetPixelData(int32_t mipLevel) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelData",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method, mipLevel);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Texture2D::GetRawTextureData() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetRawTextureData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::Apply(bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Texture2D::Apply(bool updateMipmaps) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateMipmaps);
}
inline void UnityEngine::Texture2D::Apply() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Apply",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Texture2D::Reinitialize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Reinitialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height);
}
inline bool UnityEngine::Texture2D::Reinitialize(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Reinitialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::Reinitialize(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Reinitialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::Resize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Resize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height);
}
inline bool UnityEngine::Texture2D::Resize(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Resize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height, format, hasMipMap);
}
inline bool UnityEngine::Texture2D::Resize(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "Resize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height, format, hasMipMap);
}
inline void UnityEngine::Texture2D::ReadPixels(::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReadPixels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destX, destY, recalculateMipMaps);
}
inline void UnityEngine::Texture2D::ReadPixels(::UnityEngine::Rect source, int32_t destX, int32_t destY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReadPixels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destX, destY);
}
inline bool UnityEngine::Texture2D::GenerateAtlas(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> sizes, int32_t padding, int32_t atlasSize,
                                                  ::System::Collections::Generic::List_1<::UnityEngine::Rect>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GenerateAtlas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rect>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sizes, padding, atlasSize, results);
}
inline void UnityEngine::Texture2D::SetPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors);
}
inline void UnityEngine::Texture2D::SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors,
                                                int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, blockWidth, blockHeight, colors, miplevel);
}
inline void UnityEngine::Texture2D::SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixels32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, blockWidth, blockHeight, colors);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::Texture2D::GetPixels(int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method, miplevel);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::Texture2D::GetPixels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixels",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Texture2D::SetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ::ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "SetPixelImpl_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, image, mip, x, y, color);
}
inline void UnityEngine::Texture2D::GetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ::ByRef<::UnityEngine::Color> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelImpl_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, image, mip, x, y, ret);
}
inline void UnityEngine::Texture2D::GetPixelBilinearImpl_Injected(int32_t image, int32_t mip, float_t u, float_t v, ::ByRef<::UnityEngine::Color> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "GetPixelBilinearImpl_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, image, mip, u, v, ret);
}
inline void UnityEngine::Texture2D::ReadPixelsImpl_Injected(::ByRef<::UnityEngine::Rect> source, int32_t destX, int32_t destY, bool recalculateMipMaps) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Texture2D*>::get(), "ReadPixelsImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destX, destY, recalculateMipMaps);
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, ::System::IntPtr nativeTex,
                                                                  ::StringW mipmapLimitGroupName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, format, flags, mipCount, nativeTex, mipmapLimitGroupName));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, format, flags));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, format, mipCount, flags));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t mipCount,
                                                                  ::StringW mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, format, mipCount, mipmapLimitGroupName, flags));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, format, flags));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, format, mipCount, flags));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                                                  ::StringW mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, format, mipCount, mipmapLimitGroupName, flags));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, ::System::IntPtr nativeTex,
                                                                  bool createUninitialized, bool ignoreMipmapLimit, ::StringW mipmapLimitGroupName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear, nativeTex, createUninitialized, ignoreMipmapLimit, mipmapLimitGroupName));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear, createUninitialized));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized,
                                                                  bool ignoreMipmapLimit, ::StringW mipmapLimitGroupName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, textureFormat, mipCount, linear, createUninitialized, ignoreMipmapLimit, mipmapLimitGroupName));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, textureFormat, mipChain, linear));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear, bool createUninitialized) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, textureFormat, mipChain, linear, createUninitialized));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height, textureFormat, mipChain));
}
inline ::UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int32_t width, int32_t height) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Texture2D*>(width, height));
}
// Ctor Parameters []
constexpr ::UnityEngine::Texture2D::Texture2D() {}
