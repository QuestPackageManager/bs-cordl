#pragma once
// IWYU pragma private; include "UnityEngine/ImageConversion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ImageConversion_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToTGA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::ImageConversion::EncodeToTGA)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b3992c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToTGA", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToPNG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::ImageConversion::EncodeToPNG)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b39abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToPNG", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToJPG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*, int32_t)>(&::UnityEngine::ImageConversion::EncodeToJPG)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6b39c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToJPG", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToJPG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::ImageConversion::EncodeToJPG)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b39e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToJPG", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToEXR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D_EXRFlags)>(&::UnityEngine::ImageConversion::EncodeToEXR)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6b39e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                                             { "EncodeToEXR", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D_EXRFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.LoadImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ArrayW<uint8_t>, bool)>(&::UnityEngine::ImageConversion::LoadImage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6b39fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                                             { "LoadImage", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.LoadImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ArrayW<uint8_t>)>(&::UnityEngine::ImageConversion::LoadImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3a144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                                                                           { "LoadImage", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToTGA_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::ImageConversion::EncodeToTGA_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b39a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                                { "EncodeToTGA_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToPNG_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::ImageConversion::EncodeToPNG_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b39c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                                { "EncodeToPNG_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToJPG_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::ImageConversion::EncodeToJPG_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b39dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ImageConversion*>(),
            { "EncodeToJPG_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.EncodeToEXR_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Texture2D_EXRFlags, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::ImageConversion::EncodeToEXR_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b39f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToEXR_Injected",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Texture2D_EXRFlags>(),
                                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ImageConversion.LoadImage_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(&::UnityEngine::ImageConversion::LoadImage_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b3a0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                            { "LoadImage_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> UnityEngine::ImageConversion::EncodeToTGA(::UnityEngine::Texture2D* tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToTGA", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex);
}
inline ::ArrayW<uint8_t> UnityEngine::ImageConversion::EncodeToPNG(::UnityEngine::Texture2D* tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToPNG", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex);
}
inline ::ArrayW<uint8_t> UnityEngine::ImageConversion::EncodeToJPG(::UnityEngine::Texture2D* tex, int32_t quality) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToJPG", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex, quality);
}
inline ::ArrayW<uint8_t> UnityEngine::ImageConversion::EncodeToJPG(::UnityEngine::Texture2D* tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToJPG", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex);
}
inline ::ArrayW<uint8_t> UnityEngine::ImageConversion::EncodeToEXR(::UnityEngine::Texture2D* tex, ::UnityEngine::Texture2D_EXRFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                                           { "EncodeToEXR", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D_EXRFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex, flags);
}
inline bool UnityEngine::ImageConversion::LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t> data, bool markNonReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                                           { "LoadImage", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex, data, markNonReadable);
}
inline bool UnityEngine::ImageConversion::LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "LoadImage", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex, data);
}
inline void UnityEngine::ImageConversion::EncodeToTGA_Injected(::System::IntPtr tex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                              { "EncodeToTGA_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tex, ret);
}
inline void UnityEngine::ImageConversion::EncodeToPNG_Injected(::System::IntPtr tex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                                              { "EncodeToPNG_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tex, ret);
}
inline void UnityEngine::ImageConversion::EncodeToJPG_Injected(::System::IntPtr tex, int32_t quality, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ImageConversion*>(),
                       { "EncodeToJPG_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tex, quality, ret);
}
inline void UnityEngine::ImageConversion::EncodeToEXR_Injected(::System::IntPtr tex, ::UnityEngine::Texture2D_EXRFlags flags, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(), { "EncodeToEXR_Injected",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Texture2D_EXRFlags>(),
                                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tex, flags, ret);
}
inline bool UnityEngine::ImageConversion::LoadImage_Injected(::System::IntPtr tex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data, bool markNonReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ImageConversion*>(),
                          { "LoadImage_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex, data, markNonReadable);
}
// Ctor Parameters []
constexpr ::UnityEngine::ImageConversion::ImageConversion() {}
