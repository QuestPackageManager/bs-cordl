#pragma once
// IWYU pragma private; include "UnityEngine\AssetBundleRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ResourceRequest_impl.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest_BindingsMarshaller.ConvertToManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleRequest* (*)(::System::IntPtr)>(&::UnityEngine::AssetBundleRequest_BindingsMarshaller::ConvertToManaged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a4c2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest_BindingsMarshaller*>(), { "ConvertToManaged", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AssetBundleRequest*)>(&::UnityEngine::AssetBundleRequest_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a4c334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::AssetBundleRequest*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundleRequest_BindingsMarshaller::ConvertToManaged(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest_BindingsMarshaller*>(), { "ConvertToManaged", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AssetBundleRequest_BindingsMarshaller::ConvertToNative(::UnityEngine::AssetBundleRequest* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::AssetBundleRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleRequest_BindingsMarshaller::AssetBundleRequest_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::AssetBundleRequest::*)()>(&::UnityEngine::AssetBundleRequest::GetResult)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6a4c054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { ::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.get_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::AssetBundleRequest::*)()>(&::UnityEngine::AssetBundleRequest::get_asset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a4c1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { "get_asset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.get_allAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::UnityEngine::AssetBundleRequest::*)()>(&::UnityEngine::AssetBundleRequest::get_allAssets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a4c1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { "get_allAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AssetBundleRequest::*)(::System::IntPtr)>(&::UnityEngine::AssetBundleRequest::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a4c264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.GetResult_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AssetBundleRequest::GetResult_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a4c190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { "GetResult_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.get_allAssets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::IntPtr)>(&::UnityEngine::AssetBundleRequest::get_allAssets_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a4c228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { "get_allAssets_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Object> UnityEngine::AssetBundleRequest::GetResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::AssetBundleRequest::get_asset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { "get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::AssetBundleRequest::get_allAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { "get_allAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method);
}
inline void UnityEngine::AssetBundleRequest::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AssetBundleRequest::GetResult_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { "GetResult_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::AssetBundleRequest::get_allAssets_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleRequest*>(), { "get_allAssets_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundleRequest::New_ctor(::System::IntPtr ptr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AssetBundleRequest*>(ptr));
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleRequest::AssetBundleRequest() {}
