#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/ResourceManagerConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ResourceManagerConfig_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ResourceManagerConfig.ExtractKeyAndSubKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ExtractKeyAndSubKey)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6912a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(),
                                                { "ExtractKeyAndSubKey", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ResourceManagerConfig.IsPathRemote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsPathRemote)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6912ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "IsPathRemote", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ResourceManagerConfig.StripQueryParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::StripQueryParameters)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6912b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "StripQueryParameters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ResourceManagerConfig.ShouldPathUseWebRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ShouldPathUseWebRequest)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6912b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "ShouldPathUseWebRequest", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ResourceManagerConfig.PlatformCanLoadLocallyFromUrlPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::PlatformCanLoadLocallyFromUrlPath)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6912c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "PlatformCanLoadLocallyFromUrlPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ResourceManagerConfig.CreateArrayResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, ::ArrayW<::UnityEngine::Object*>)>(
    &::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6912d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(),
                                                             { "CreateArrayResult", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ResourceManagerConfig.CreateListResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::System::Type*, ::ArrayW<::UnityEngine::Object*>)>(
    &::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6912ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(),
                                                             { "CreateListResult", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ExtractKeyAndSubKey(::System::Object* keyObj, ::by_ref<::StringW> mainKey, ::by_ref<::StringW> subKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(),
                                              { "ExtractKeyAndSubKey", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyObj, mainKey, subKey);
}
inline bool UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsPathRemote(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "IsPathRemote", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::StringW UnityEngine::ResourceManagement::Util::ResourceManagerConfig::StripQueryParameters(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "StripQueryParameters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline bool UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ShouldPathUseWebRequest(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "ShouldPathUseWebRequest", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool UnityEngine::ResourceManagement::Util::ResourceManagerConfig::PlatformCanLoadLocallyFromUrlPath() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "PlatformCanLoadLocallyFromUrlPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Array* UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult(::System::Type* type, ::ArrayW<::UnityEngine::Object*> allAssets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(),
                                                           { "CreateArrayResult", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, type, allAssets);
}
template <typename TObject> inline TObject UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult(::ArrayW<::UnityEngine::Object*> allAssets) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(),
                                                           { "CreateArrayResult", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<TObject>(nullptr, ___internal_method, allAssets);
}
inline ::System::Collections::IList* UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult(::System::Type* type, ::ArrayW<::UnityEngine::Object*> allAssets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(),
                                                           { "CreateListResult", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, type, allAssets);
}
template <typename TObject> inline TObject UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult(::ArrayW<::UnityEngine::Object*> allAssets) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(),
                                                           { "CreateListResult", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<TObject>(nullptr, ___internal_method, allAssets);
}
template <typename T1, typename T2> inline bool UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsInstance() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*>(), { "IsInstance", { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ResourceManagerConfig() {}
