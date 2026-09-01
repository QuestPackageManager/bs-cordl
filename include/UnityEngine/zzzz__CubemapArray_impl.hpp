#pragma once
// IWYU pragma private; include "UnityEngine\CubemapArray.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "UnityEngine/zzzz__CubemapArray_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__TextureColorSpace_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::UnityEngine::CubemapArray.get_isReadable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::CubemapArray::*)()>(&::UnityEngine::CubemapArray::get_isReadable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ac22fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { ::i2c::class_of<::UnityEngine::CubemapArray*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.Internal_CreateImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::CubemapArray*, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(
    &::UnityEngine::CubemapArray::Internal_CreateImpl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6ac23b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                             { "Internal_CreateImpl",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::CubemapArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CubemapArray*, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(
    &::UnityEngine::CubemapArray::Internal_Create)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6ac243c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                             { "Internal_Create",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::CubemapArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.ApplyImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(bool, bool)>(&::UnityEngine::CubemapArray::ApplyImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ac2510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "ApplyImpl", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.SetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(::ArrayW<::UnityEngine::Color>, ::UnityEngine::CubemapFace, int32_t, int32_t)>(
    &::UnityEngine::CubemapArray::SetPixels)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6ac25fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::CubemapArray*>(),
            { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.SetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(::ArrayW<::UnityEngine::Color>, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::CubemapArray::SetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac278c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat,
                                                                                             ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ac2794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6ac289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                             ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ac2808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6ac2918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool)>(
    &::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6ac2a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { ".ctor",
                                                                                            {},
                                                                                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool)>(&::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac2be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::CubemapArray*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool, bool)>(&::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ac2bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { ".ctor",
                                                                                            {},
                                                                                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool)>(&::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6ac2ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::CubemapArray*>(),
                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(&::UnityEngine::CubemapArray::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6ac2d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)(bool, bool)>(&::UnityEngine::CubemapArray::Apply)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ac2df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "Apply", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CubemapArray::*)()>(&::UnityEngine::CubemapArray::Apply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ac2e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "Apply", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.ValidateIsNotCrunched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::CubemapArray::ValidateIsNotCrunched)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ac2a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "ValidateIsNotCrunched", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.get_isReadable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::CubemapArray::get_isReadable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ac237c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "get_isReadable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.ApplyImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, bool)>(&::UnityEngine::CubemapArray::ApplyImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ac25a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "ApplyImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CubemapArray.SetPixels_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::UnityEngine::CubemapFace, int32_t, int32_t)>(
    &::UnityEngine::CubemapArray::SetPixels_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ac2720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "SetPixels_Injected",
                                                                               {},
                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                 ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::CubemapArray::get_isReadable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::CubemapArray*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::CubemapArray::Internal_CreateImpl(::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount,
                                                           ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureColorSpace colorSpace,
                                                           ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                           { "Internal_CreateImpl",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::CubemapArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, ext, count, mipCount, format, colorSpace, flags);
}
inline void UnityEngine::CubemapArray::Internal_Create(::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                       ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                           { "Internal_Create",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::CubemapArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mono, ext, count, mipCount, format, colorSpace, flags);
}
inline void UnityEngine::CubemapArray::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "ApplyImpl", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::CubemapArray::SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face, int32_t arrayElement, int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::CubemapArray*>(),
                       { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, face, arrayElement, miplevel);
}
inline void UnityEngine::CubemapArray::SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face, int32_t arrayElement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                              { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, face, arrayElement);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                             ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, format, flags);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                             ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, format, flags, mipCount);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                             ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, format, flags);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                             ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, format, flags, mipCount);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { ".ctor",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, textureFormat, mipCount, linear, createUninitialized);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::CubemapArray*>(),
                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, textureFormat, mipCount, linear);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear, bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { ".ctor",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(),
                                                                                                   ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, textureFormat, mipChain, linear, createUninitialized);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, textureFormat, mipChain, linear);
}
inline void UnityEngine::CubemapArray::_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, cubemapCount, textureFormat, mipChain);
}
inline void UnityEngine::CubemapArray::Apply(bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "Apply", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::CubemapArray::Apply() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "Apply", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CubemapArray::ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "ValidateIsNotCrunched", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flags);
}
inline bool UnityEngine::CubemapArray::get_isReadable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "get_isReadable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::CubemapArray::ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "ApplyImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::CubemapArray::SetPixels_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, ::UnityEngine::CubemapFace face,
                                                          int32_t arrayElement, int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::CubemapArray*>(), { "SetPixels_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, colors, face, arrayElement, miplevel);
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, format, flags));
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, format, flags, mipCount));
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, format, flags));
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, format, flags, mipCount));
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear,
                                                                        bool createUninitialized) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, textureFormat, mipCount, linear, createUninitialized));
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, textureFormat, mipCount, linear));
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear,
                                                                        bool createUninitialized) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, textureFormat, mipChain, linear, createUninitialized));
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, textureFormat, mipChain, linear));
}
inline ::UnityEngine::CubemapArray* UnityEngine::CubemapArray::New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CubemapArray*>(width, cubemapCount, textureFormat, mipChain));
}
// Ctor Parameters []
constexpr ::UnityEngine::CubemapArray::CubemapArray() {}
