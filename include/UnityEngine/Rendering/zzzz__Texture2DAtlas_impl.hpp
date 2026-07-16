#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Texture2DAtlas.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__AtlasAllocator_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Texture2DAtlas_BlitType::Texture2DAtlas_BlitType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Texture2DAtlas_BlitType::Texture2DAtlas_BlitType() {}
constexpr ::UnityEngine::Rendering::Texture2DAtlas_BlitType UnityEngine::Rendering::Texture2DAtlas_BlitType::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Texture2DAtlas_BlitType UnityEngine::Rendering::Texture2DAtlas_BlitType::CubeTo2DOctahedral{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Texture2DAtlas_BlitType UnityEngine::Rendering::Texture2DAtlas_BlitType::SingleChannel{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Texture2DAtlas_BlitType UnityEngine::Rendering::Texture2DAtlas_BlitType::CubeTo2DOctahedralSingleChannel{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.get_maxMipLevelPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Texture2DAtlas::get_maxMipLevelPadding)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67ab604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "get_maxMipLevelPadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.get_AtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Texture2DAtlas::*)()>(
    &::UnityEngine::Rendering::Texture2DAtlas::get_AtlasTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67ab660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "get_AtlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, bool, ::StringW, bool)>(&::UnityEngine::Rendering::Texture2DAtlas::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x67ab668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)()>(&::UnityEngine::Rendering::Texture2DAtlas::Release)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67ab9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.ResetAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)()>(&::UnityEngine::Rendering::Texture2DAtlas::ResetAllocator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67aba60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "ResetAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.ClearTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::ClearTarget)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x67abae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "ClearTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetTextureMipmapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::GetTextureMipmapCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67ab95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "GetTextureMipmapCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.Is2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::Texture2DAtlas::Is2D)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x67abf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "Is2D", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.IsSingleChannelBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::IsSingleChannelBlit)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x67ac038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                             { "IsSingleChannelBlit", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.Blit2DTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*,
                                                                                                          ::UnityEngine::Vector4, bool, ::UnityEngine::Rendering::Texture2DAtlas_BlitType)>(
    &::UnityEngine::Rendering::Texture2DAtlas::Blit2DTexture)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x67ac3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                { "Blit2DTexture",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                    ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Texture2DAtlas_BlitType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.MarkGPUTextureValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t, bool)>(&::UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureValid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67acdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "MarkGPUTextureValid", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.MarkGPUTextureInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureInvalid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67ace74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "MarkGPUTextureInvalid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.BlitTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::BlitTexture)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x67aceec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.BlitOctahedralTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
        &::UnityEngine::Rendering::Texture2DAtlas::BlitOctahedralTexture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67ad184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.BlitCubeTexture2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*,
                                                                                                          bool, int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::BlitCubeTexture2D)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x67ad190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.AllocateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Vector4>, ::UnityEngine::Texture*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::AllocateTexture)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x67ad324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.AllocateTextureWithoutBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, int32_t, int32_t, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67ad510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                         { "AllocateTextureWithoutBlit",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.AllocateTextureWithoutBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x67ad56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetTextureHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::GetTextureHash)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67ad6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                             { "GetTextureHash", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetTextureID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::Texture2DAtlas::GetTextureID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67ad09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "GetTextureID", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetTextureID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::GetTextureID)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67ad770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                             { "GetTextureID", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::by_ref<::UnityEngine::Vector4>, ::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::IsCached)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67ad7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                            { "IsCached", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::by_ref<::UnityEngine::Vector4>, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::IsCached)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67ad878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                             { "IsCached", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::by_ref<::UnityEngine::Vector4>, int32_t)>(
    &::UnityEngine::Rendering::Texture2DAtlas::IsCached)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67ad7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                                                           { "IsCached", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetCachedTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t)>(
    &::UnityEngine::Rendering::Texture2DAtlas::GetCachedTextureSize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67ad8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "GetCachedTextureSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.NeedsUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, bool)>(&::UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x67ad930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.NeedsUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t, int32_t, bool)>(&::UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x67adbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.NeedsUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x67adcac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.AddTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Vector4>,
                                                                                                          ::UnityEngine::Texture*)>(&::UnityEngine::Rendering::Texture2DAtlas::AddTexture)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67ae100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.UpdateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Texture*,
                                                                                                          ::by_ref<::UnityEngine::Vector4>, ::UnityEngine::Vector4, bool, bool)>(
    &::UnityEngine::Rendering::Texture2DAtlas::UpdateTexture)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x67ae1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.UpdateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::by_ref<::UnityEngine::Vector4>, bool, bool)>(&::UnityEngine::Rendering::Texture2DAtlas::UpdateTexture)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x67ae31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.EnsureTextureSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::by_ref<bool>, ::by_ref<::UnityEngine::Vector4>, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Texture2DAtlas::EnsureTextureSlot)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x67ae3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "EnsureTextureSlot",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AtlasTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AtlasTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_AtlasTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasTexture = value;
}
constexpr int32_t& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr int32_t const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_Width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Width = value;
}
constexpr int32_t& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Height;
}
constexpr int32_t const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Height;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_Height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Height = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Format;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Format;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_Format(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Format = value;
}
constexpr bool& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_UseMipMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMipMaps;
}
constexpr bool const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_UseMipMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMipMaps;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_UseMipMaps(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseMipMaps = value;
}
constexpr bool& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_IsAtlasTextureOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsAtlasTextureOwner;
}
constexpr bool const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_IsAtlasTextureOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsAtlasTextureOwner;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_IsAtlasTextureOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsAtlasTextureOwner = value;
}
constexpr ::UnityEngine::Rendering::AtlasAllocator*& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AtlasAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasAllocator;
}
constexpr ::UnityEngine::Rendering::AtlasAllocator* const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AtlasAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasAllocator;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_AtlasAllocator(::UnityEngine::Rendering::AtlasAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasAllocator = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>*&
UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AllocationCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocationCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* const&
UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AllocationCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocationCache;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_AllocationCache(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllocationCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_IsGPUTextureUpToDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsGPUTextureUpToDate;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_IsGPUTextureUpToDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsGPUTextureUpToDate;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_IsGPUTextureUpToDate(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsGPUTextureUpToDate = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_TextureHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureHashes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_TextureHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureHashes;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_TextureHashes(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureHashes = value;
}
inline void UnityEngine::Rendering::Texture2DAtlas::setStaticF_fullScaleOffset(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "fullScaleOffset", ::UnityEngine::Rendering::Texture2DAtlas*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Texture2DAtlas::getStaticF_fullScaleOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "fullScaleOffset", ::UnityEngine::Rendering::Texture2DAtlas*>();
}
inline void UnityEngine::Rendering::Texture2DAtlas::setStaticF_s_MaxMipLevelPadding(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_MaxMipLevelPadding", ::UnityEngine::Rendering::Texture2DAtlas*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::getStaticF_s_MaxMipLevelPadding() {
  return ::cordl_internals::getStaticField<int32_t, "s_MaxMipLevelPadding", ::UnityEngine::Rendering::Texture2DAtlas*>();
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::get_maxMipLevelPadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "get_maxMipLevelPadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Texture2DAtlas::get_AtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "get_AtlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Texture2DAtlas::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                                                          bool powerOfTwoPadding, ::StringW name, bool useMipMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, filterMode, powerOfTwoPadding, name, useMipMap);
}
inline void UnityEngine::Rendering::Texture2DAtlas::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Texture2DAtlas::ResetAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "ResetAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Texture2DAtlas::ClearTarget(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "ClearTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::GetTextureMipmapCount(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "GetTextureMipmapCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, width, height);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::Is2D(::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "Is2D", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::IsSingleChannelBlit(::UnityEngine::Texture* source, ::UnityEngine::Texture* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                           { "IsSingleChannelBlit", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, destination);
}
inline void UnityEngine::Rendering::Texture2DAtlas::Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                  ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, ::UnityEngine::Rendering::Texture2DAtlas_BlitType blitType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                              { "Blit2DTexture",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                  ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Texture2DAtlas_BlitType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, blitType);
}
inline void UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureValid(int32_t instanceId, bool mipAreValid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "MarkGPUTextureValid", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceId, mipAreValid);
}
inline void UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureInvalid(int32_t instanceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "MarkGPUTextureInvalid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceId);
}
inline void UnityEngine::Rendering::Texture2DAtlas::BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
inline void UnityEngine::Rendering::Texture2DAtlas::BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                          ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
inline void UnityEngine::Rendering::Texture2DAtlas::BlitCubeTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, bool blitMips,
                                                                      int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, blitMips, overrideInstanceID);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture,
                                                                    int32_t width, int32_t height, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, scaleOffset, texture, width, height, overrideInstanceID);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit(::UnityEngine::Texture* texture, int32_t width, int32_t height, ::by_ref<::UnityEngine::Vector4> scaleOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                       { "AllocateTextureWithoutBlit",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture, width, height, scaleOffset);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit(int32_t instanceId, int32_t width, int32_t height, ::by_ref<::UnityEngine::Vector4> scaleOffset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instanceId, width, height, scaleOffset);
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::GetTextureHash(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                           { "GetTextureHash", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, textureA, textureB);
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::GetTextureID(::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "GetTextureID", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, texture);
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::GetTextureID(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                           { "GetTextureID", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, textureA, textureB);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::IsCached(::by_ref<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                          { "IsCached", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scaleOffset, textureA, textureB);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::IsCached(::by_ref<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                           { "IsCached", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scaleOffset, texture);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::IsCached(::by_ref<::UnityEngine::Vector4> scaleOffset, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(),
                                                                                         { "IsCached", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scaleOffset, id);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::Texture2DAtlas::GetCachedTextureSize(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "GetCachedTextureSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, id);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate(::UnityEngine::Texture* texture, bool needMips) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture, needMips);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate(int32_t id, int32_t updateCount, bool needMips) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, updateCount, needMips);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB, bool needMips) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, textureA, textureB, needMips);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::AddTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, scaleOffset, texture);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* oldTexture, ::UnityEngine::Texture* newTexture,
                                                                  ::by_ref<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Vector4 sourceScaleOffset, bool updateIfNeeded, bool blitMips) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, oldTexture, newTexture, scaleOffset, sourceScaleOffset, updateIfNeeded, blitMips);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* texture, ::by_ref<::UnityEngine::Vector4> scaleOffset,
                                                                  bool updateIfNeeded, bool blitMips) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, texture, scaleOffset, updateIfNeeded, blitMips);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::EnsureTextureSlot(::by_ref<bool> isUploadNeeded, ::by_ref<::UnityEngine::Vector4> scaleBias, int32_t key, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Texture2DAtlas*>(), { "EnsureTextureSlot",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isUploadNeeded, scaleBias, key, width, height);
}
inline ::UnityEngine::Rendering::Texture2DAtlas* UnityEngine::Rendering::Texture2DAtlas::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                  ::UnityEngine::FilterMode filterMode, bool powerOfTwoPadding, ::StringW name, bool useMipMap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Texture2DAtlas*>(width, height, format, filterMode, powerOfTwoPadding, name, useMipMap));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Texture2DAtlas::Texture2DAtlas() {}
