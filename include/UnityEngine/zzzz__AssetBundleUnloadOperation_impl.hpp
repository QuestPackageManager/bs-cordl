#pragma once
// IWYU pragma private; include "UnityEngine\AssetBundleUnloadOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__AssetBundleUnloadOperation_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AssetBundleUnloadOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller.ConvertToManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleUnloadOperation* (*)(::System::IntPtr)>(
    &::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller::ConvertToManaged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a4bba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller*>(), { "ConvertToManaged", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AssetBundleUnloadOperation*)>(
    &::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a4c420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::AssetBundleUnloadOperation*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::AssetBundleUnloadOperation* UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller::ConvertToManaged(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller*>(), { "ConvertToManaged", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleUnloadOperation*>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller::ConvertToNative(::UnityEngine::AssetBundleUnloadOperation* assetBundleUnloadOperation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::AssetBundleUnloadOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, assetBundleUnloadOperation);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller::AssetBundleUnloadOperation_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::AssetBundleUnloadOperation.WaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AssetBundleUnloadOperation::*)()>(&::UnityEngine::AssetBundleUnloadOperation::WaitForCompletion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a4c348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation*>(), { "WaitForCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleUnloadOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AssetBundleUnloadOperation::*)(::System::IntPtr)>(&::UnityEngine::AssetBundleUnloadOperation::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a4c3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleUnloadOperation.WaitForCompletion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AssetBundleUnloadOperation::WaitForCompletion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a4c398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation*>(), { "WaitForCompletion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AssetBundleUnloadOperation::WaitForCompletion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation*>(), { "WaitForCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AssetBundleUnloadOperation::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline void UnityEngine::AssetBundleUnloadOperation::WaitForCompletion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundleUnloadOperation*>(), { "WaitForCompletion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AssetBundleUnloadOperation* UnityEngine::AssetBundleUnloadOperation::New_ctor(::System::IntPtr ptr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AssetBundleUnloadOperation*>(ptr));
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleUnloadOperation::AssetBundleUnloadOperation() {}
