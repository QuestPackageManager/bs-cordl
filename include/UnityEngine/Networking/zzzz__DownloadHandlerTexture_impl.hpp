#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerTexture.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerTexture_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerTexture_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadedTextureParams_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerTexture*)>(
    &::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e28340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerTexture*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::DownloadHandlerTexture* handler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller::DownloadHandlerTexture_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerTexture*, ::UnityEngine::Networking::DownloadedTextureParams)>(
    &::UnityEngine::Networking::DownloadHandlerTexture::Create)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e27fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(),
                            { "Create", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), ::i2c::type_of<::UnityEngine::Networking::DownloadedTextureParams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.InternalCreateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerTexture::*)(::UnityEngine::Networking::DownloadedTextureParams)>(
    &::UnityEngine::Networking::DownloadHandlerTexture::InternalCreateTexture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e28058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(),
                                                                                           { "InternalCreateTexture", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadedTextureParams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerTexture::*)(bool)>(&::UnityEngine::Networking::DownloadHandlerTexture::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e280a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.GetNativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Networking::DownloadHandlerTexture::*)()>(
    &::UnityEngine::Networking::DownloadHandlerTexture::GetNativeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e28100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerTexture::*)()>(&::UnityEngine::Networking::DownloadHandlerTexture::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e2810c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.get_texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Networking::DownloadHandlerTexture::*)()>(
    &::UnityEngine::Networking::DownloadHandlerTexture::get_texture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2816c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { "get_texture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.InternalGetTextureNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Networking::DownloadHandlerTexture::*)()>(
    &::UnityEngine::Networking::DownloadHandlerTexture::InternalGetTextureNative)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e28170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { "InternalGetTextureNative", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.GetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::UnityEngine::Networking::DownloadHandlerTexture::GetContent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e282e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(),
                                                                                           { "GetContent", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerTexture*, ::by_ref<::UnityEngine::Networking::DownloadedTextureParams>)>(
    &::UnityEngine::Networking::DownloadHandlerTexture::Create_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e28014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(),
            { "Create_Injected", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), ::i2c::type_of<::by_ref<::UnityEngine::Networking::DownloadedTextureParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerTexture.InternalGetTextureNative_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Networking::DownloadHandlerTexture::InternalGetTextureNative_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e282ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { "InternalGetTextureNative_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::Networking::DownloadHandlerTexture::__cordl_internal_get_m_NativeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeData;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::Networking::DownloadHandlerTexture::__cordl_internal_get_m_NativeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeData;
}
constexpr void UnityEngine::Networking::DownloadHandlerTexture::__cordl_internal_set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NativeData = value;
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerTexture::Create(::UnityEngine::Networking::DownloadHandlerTexture* obj, ::UnityEngine::Networking::DownloadedTextureParams parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(),
                          { "Create", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), ::i2c::type_of<::UnityEngine::Networking::DownloadedTextureParams>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, parameters);
}
inline void UnityEngine::Networking::DownloadHandlerTexture::InternalCreateTexture(::UnityEngine::Networking::DownloadedTextureParams parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(),
                                                                                         { "InternalCreateTexture", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadedTextureParams>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::Networking::DownloadHandlerTexture::_ctor(bool readable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readable);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Networking::DownloadHandlerTexture::GetNativeData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandlerTexture::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Networking::DownloadHandlerTexture::get_texture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { "get_texture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Networking::DownloadHandlerTexture::InternalGetTextureNative() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { "InternalGetTextureNative", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Networking::DownloadHandlerTexture::GetContent(::UnityEngine::Networking::UnityWebRequest* www) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(),
                                                                                         { "GetContent", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, www);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerTexture::Create_Injected(::UnityEngine::Networking::DownloadHandlerTexture* obj,
                                                                                         ::by_ref<::UnityEngine::Networking::DownloadedTextureParams> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(),
          { "Create_Injected", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), ::i2c::type_of<::by_ref<::UnityEngine::Networking::DownloadedTextureParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, parameters);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerTexture::InternalGetTextureNative_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerTexture*>(), { "InternalGetTextureNative_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Networking::DownloadHandlerTexture* UnityEngine::Networking::DownloadHandlerTexture::New_ctor(bool readable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::DownloadHandlerTexture*>(readable));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerTexture::DownloadHandlerTexture() {}
