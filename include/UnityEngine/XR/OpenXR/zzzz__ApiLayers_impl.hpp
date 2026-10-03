#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/ApiLayers.hpp"
#include "System/Runtime/InteropServices/zzzz__Architecture_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__ApiLayers_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__ApiLayers_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__Architecture_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__ApiLayers_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "library_path", ty: "::StringW", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "api_version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "implementation_version", ty: "::StringW",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson::ApiLayers_ApiLayerJson(::StringW name, ::StringW library_path, ::StringW api_version, ::StringW implementation_version,
                                                                                    ::StringW description) noexcept {
  this->name = name;
  this->library_path = library_path;
  this->api_version = api_version;
  this->implementation_version = implementation_version;
  this->description = description;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson::ApiLayers_ApiLayerJson() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.get_isEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_isEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_isEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.set_isEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)(bool)>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::set_isEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "set_isEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.get_libraryArchitecture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::Architecture (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_libraryArchitecture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_libraryArchitecture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.get_libraryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_libraryPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_libraryPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.get_apiVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_apiVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_apiVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.get_implementationVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_implementationVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_implementationVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_description", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer.get_jsonFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_jsonFileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e29c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_jsonFileName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::*)(
    ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson, ::StringW, ::System::Runtime::InteropServices::Architecture, bool)>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e29c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::System::Runtime::InteropServices::Architecture>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_isEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_isEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::set_isEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "set_isEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Runtime::InteropServices::Architecture UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_libraryArchitecture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_libraryArchitecture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::Architecture>(*this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_libraryPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_libraryPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_apiVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_apiVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_implementationVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_implementationVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_description() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_description", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::get_jsonFileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), { "get_jsonFileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::_ctor(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson json, ::StringW jsonFileName,
                                                               ::System::Runtime::InteropServices::Architecture libraryArchitecture, bool isEnabled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::System::Runtime::InteropServices::Architecture>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, json, jsonFileName, libraryArchitecture, isEnabled);
}
// Ctor Parameters [CppParam { name: "m_Json", ty: "::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_JsonFileName", ty:
// "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LibraryArchitecture", ty: "::System::Runtime::InteropServices::Architecture", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_IsEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::ApiLayers_ApiLayer(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson m_Json, ::StringW m_JsonFileName,
                                                                            ::System::Runtime::InteropServices::Architecture m_LibraryArchitecture, bool m_IsEnabled) noexcept {
  this->m_Json = m_Json;
  this->m_JsonFileName = m_JsonFileName;
  this->m_LibraryArchitecture = m_LibraryArchitecture;
  this->m_IsEnabled = m_IsEnabled;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer::ApiLayers_ApiLayer() {}
// Ctor Parameters [CppParam { name: "file_format_version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "api_layer", ty:
// "::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson::ApiLayers_ApiLayerManifestJson(::StringW file_format_version,
                                                                                                    ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson api_layer) noexcept {
  this->file_format_version = file_format_version;
  this->api_layer = api_layer;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson::ApiLayers_ApiLayerManifestJson() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor.CopyApiLayerFiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Runtime::InteropServices::Architecture, ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*,
                                                                ::by_ref<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson>)>(
    &::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor::CopyApiLayerFiles)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x6e29c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor*>(),
                            { "CopyApiLayerFiles",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>(),
                                ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor.CleanupApiLayerFiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor::CleanupApiLayerFiles)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x6e2a2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor*>(),
                                                                                           { "CleanupApiLayerFiles", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor.ResolveLibraryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor::ResolveLibraryPath)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e2a5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor*>(),
                                                                                           { "ResolveLibraryPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::ApiLayers_FileProcessor::CopyApiLayerFiles(::StringW jsonPath, ::StringW libraryPath, ::System::Runtime::InteropServices::Architecture libraryArchitecture,
                                                                                ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport* platformSupport,
                                                                                ::by_ref<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson> layerManifest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor*>(),
                          { "CopyApiLayerFiles",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>(),
                              ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, jsonPath, libraryPath, libraryArchitecture, platformSupport, layerManifest);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_FileProcessor::CleanupApiLayerFiles(::StringW layerName, ::StringW jsonPath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor*>(),
                                                                                         { "CleanupApiLayerFiles", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, layerName, jsonPath);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_FileProcessor::ResolveLibraryPath(::StringW jsonPath, ::StringW libraryPath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor*>(),
                                                                                         { "ResolveLibraryPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, jsonPath, libraryPath);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor::ApiLayers_FileProcessor() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::Setup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2a6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "Setup", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport.Teardown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::Teardown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2a6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "Teardown", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport.GetApiLayersDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetApiLayersDir)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e2a6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "GetApiLayersDir", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport.GetBundleDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetBundleDir)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e2a770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "GetBundleDir", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport.GetSupportedArchitectures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Runtime::InteropServices::Architecture> (::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetSupportedArchitectures)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e2a784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "GetSupportedArchitectures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport.GetSupportedExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetSupportedExtensions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e2a7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "GetSupportedExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport.GetExpectedArchitectureImportString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::*)(::System::Runtime::InteropServices::Architecture)>(
    &::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetExpectedArchitectureImportString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e2a83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(),
                                                             { "GetExpectedArchitectureImportString", {}, { ::i2c::type_of<::System::Runtime::InteropServices::Architecture>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2a8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::setStaticF_s_SupportedArchitectures(::ArrayW<::System::Runtime::InteropServices::Architecture> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Runtime::InteropServices::Architecture>, "s_SupportedArchitectures", ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(
      std::forward<::ArrayW<::System::Runtime::InteropServices::Architecture>>(value));
}
inline ::ArrayW<::System::Runtime::InteropServices::Architecture> UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::getStaticF_s_SupportedArchitectures() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Runtime::InteropServices::Architecture>, "s_SupportedArchitectures", ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>();
}
inline void UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::setStaticF_s_SupportedExtensions(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_SupportedExtensions", ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::getStaticF_s_SupportedExtensions() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_SupportedExtensions", ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>();
}
inline void UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::Setup(::System::IntPtr hookGetInstanceProcAddr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "Setup", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hookGetInstanceProcAddr);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::Teardown(uint64_t xrInstance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "Teardown", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetApiLayersDir() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "GetApiLayersDir", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetBundleDir() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "GetBundleDir", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::Runtime::InteropServices::Architecture> UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetSupportedArchitectures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "GetSupportedArchitectures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Runtime::InteropServices::Architecture>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetSupportedExtensions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { "GetSupportedExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::GetExpectedArchitectureImportString(::System::Runtime::InteropServices::Architecture architecture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(),
                                                           { "GetExpectedArchitectureImportString", {}, { ::i2c::type_of<::System::Runtime::InteropServices::Architecture>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, architecture);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport* UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*>());
}
/// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport"
constexpr UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::operator ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport"
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport* UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::i___UnityEngine__XR__OpenXR__ApiLayers_IPlatformSupport() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
constexpr UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::operator ::UnityEngine::XR::OpenXR::ApiLayers_ISupport*() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ISupport* UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::i___UnityEngine__XR__OpenXR__ApiLayers_ISupport() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport::ApiLayers_AndroidPlatformSupport() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport.GetApiLayersDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::GetApiLayersDir)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport.GetBundleDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::GetBundleDir)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport.GetSupportedArchitectures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Runtime::InteropServices::Architecture> (::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::GetSupportedArchitectures)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport.GetSupportedExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::GetSupportedExtensions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::GetApiLayersDir() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::GetBundleDir() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::Runtime::InteropServices::Architecture> UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::GetSupportedArchitectures() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Runtime::InteropServices::Architecture>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::GetSupportedExtensions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
constexpr UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::operator ::UnityEngine::XR::OpenXR::ApiLayers_ISupport*() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ISupport* UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport::i___UnityEngine__XR__OpenXR__ApiLayers_ISupport() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport.get_callbackOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::get_callbackOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2a990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "get_callbackOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::Setup)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6e2a998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "Setup", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport.Teardown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::Teardown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e2ab50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "Teardown", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport.GetApiLayersDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::GetApiLayersDir)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e2aa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "GetApiLayersDir", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport.GetBundleDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::GetBundleDir)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e2aba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "GetBundleDir", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport.GetSupportedArchitectures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Runtime::InteropServices::Architecture> (::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::GetSupportedArchitectures)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e2abb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "GetSupportedArchitectures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport.GetSupportedExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::GetSupportedExtensions)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e2ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "GetSupportedExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2ac90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::__cordl_internal_get_m_OriginalEnabledLayersPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalEnabledLayersPath;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::__cordl_internal_get_m_OriginalEnabledLayersPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalEnabledLayersPath;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::__cordl_internal_set_m_OriginalEnabledLayersPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OriginalEnabledLayersPath = value;
}
inline void UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::setStaticF_s_SupportedArchitectures(::ArrayW<::System::Runtime::InteropServices::Architecture> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Runtime::InteropServices::Architecture>, "s_SupportedArchitectures", ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(
      std::forward<::ArrayW<::System::Runtime::InteropServices::Architecture>>(value));
}
inline ::ArrayW<::System::Runtime::InteropServices::Architecture> UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::getStaticF_s_SupportedArchitectures() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Runtime::InteropServices::Architecture>, "s_SupportedArchitectures", ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>();
}
inline int32_t UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::get_callbackOrder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "get_callbackOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::Setup(::System::IntPtr hookGetInstanceProcAddr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "Setup", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hookGetInstanceProcAddr);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::Teardown(uint64_t xrInstance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "Teardown", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::GetApiLayersDir() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "GetApiLayersDir", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::GetBundleDir() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "GetBundleDir", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::Runtime::InteropServices::Architecture> UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::GetSupportedArchitectures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "GetSupportedArchitectures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Runtime::InteropServices::Architecture>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::GetSupportedExtensions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { "GetSupportedExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport* UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*>());
}
/// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport"
constexpr UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::operator ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport"
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport* UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::i___UnityEngine__XR__OpenXR__ApiLayers_IPlatformSupport() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
constexpr UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::operator ::UnityEngine::XR::OpenXR::ApiLayers_ISupport*() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ISupport* UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::i___UnityEngine__XR__OpenXR__ApiLayers_ISupport() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport::ApiLayers_WindowsPlatformSupport() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport.get_LogFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::get_LogFileName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport.get_LogPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::get_LogPrefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)(::System::IntPtr)>(&::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::Setup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e2b6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport.Teardown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::Teardown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2b284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport.SetupLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::SetupLog)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport.GetDefaultLogPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::GetDefaultLogPath)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e2b09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { "GetDefaultLogPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport.ProcessLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::ProcessLog)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6e2b6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { "ProcessLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport.ProcessLogFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)(::StringW, int32_t)>(
    &::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::ProcessLogFile)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6e2b8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { "ProcessLogFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2b288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::ApiLayers_LogSupport::__cordl_internal_get_m_LogFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogFilePath;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::ApiLayers_LogSupport::__cordl_internal_get_m_LogFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogFilePath;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers_LogSupport::__cordl_internal_set_m_LogFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LogFilePath = value;
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_LogSupport::get_LogFileName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_LogSupport::get_LogPrefix() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_LogSupport::Setup(::System::IntPtr hookGetInstanceProcAddr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hookGetInstanceProcAddr);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_LogSupport::Teardown(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_LogSupport::SetupLog() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_LogSupport::GetDefaultLogPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { "GetDefaultLogPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_LogSupport::ProcessLog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { "ProcessLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_LogSupport::ProcessLogFile(::StringW filePath, int32_t maxLines) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { "ProcessLogFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filePath, maxLines);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_LogSupport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport* UnityEngine::XR::OpenXR::ApiLayers_LogSupport::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*>());
}
/// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
constexpr UnityEngine::XR::OpenXR::ApiLayers_LogSupport::operator ::UnityEngine::XR::OpenXR::ApiLayers_ISupport*() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ISupport* UnityEngine::XR::OpenXR::ApiLayers_LogSupport::i___UnityEngine__XR__OpenXR__ApiLayers_ISupport() noexcept {
  return static_cast<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport::ApiLayers_LogSupport() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport.AddSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::AddSupport)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e2ad20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), { "AddSupport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport.get_LogFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::get_LogFileName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2ada4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport.get_LogPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::get_LogPrefix)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2ade8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport.SetupLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::SetupLog)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6e2ae2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport.SetupWindowsLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::SetupWindowsLog)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e2afd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), { "SetupWindowsLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport.TeardownWindowsLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::TeardownWindowsLog)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e2b1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), { "TeardownWindowsLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport.Teardown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::Teardown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2b280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2ada0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::AddSupport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), { "AddSupport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::get_LogFileName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::get_LogPrefix() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::SetupLog() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::SetupWindowsLog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), { "SetupWindowsLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::TeardownWindowsLog() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), { "TeardownWindowsLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::Teardown(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport* UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport::ApiLayers_ApiDumpLogSupport() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport.get_LogFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::get_LogFileName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2b28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport.get_LogPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::get_LogPrefix)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2b2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport.AddSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::AddSupport)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e2b314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), { "AddSupport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport.SetupLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::SetupLog)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6e2b398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport.SetupWindowsLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::SetupWindowsLog)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e2b53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), { "SetupWindowsLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport.Teardown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::Teardown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2b600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport.TeardownWindowsLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::TeardownWindowsLog)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e2b604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), { "TeardownWindowsLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2b394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::get_LogFileName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::get_LogPrefix() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::AddSupport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), { "AddSupport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::SetupLog() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::SetupWindowsLog() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), { "SetupWindowsLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::Teardown(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::TeardownWindowsLog() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), { "TeardownWindowsLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport* UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport::ApiLayers_CoreValidationLogSupport() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ISupport.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ISupport::*)(::System::IntPtr)>(&::UnityEngine::XR::OpenXR::ApiLayers_ISupport::Setup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers_ISupport.Teardown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers_ISupport::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::ApiLayers_ISupport::Teardown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::ApiLayers_ISupport::Setup(::System::IntPtr hookGetInstanceProcAddr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hookGetInstanceProcAddr);
}
inline void UnityEngine::XR::OpenXR::ApiLayers_ISupport::Teardown(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers___c::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2bb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c._IsEnabled_b__20_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers___c::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::ApiLayers___c::_IsEnabled_b__20_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2bb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c*>(),
                                                                                           { "<IsEnabled>b__20_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::ApiLayers___c::setStaticF___9(::UnityEngine::XR::OpenXR::ApiLayers___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::ApiLayers___c*, "<>9", ::UnityEngine::XR::OpenXR::ApiLayers___c*>(std::forward<::UnityEngine::XR::OpenXR::ApiLayers___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::ApiLayers___c* UnityEngine::XR::OpenXR::ApiLayers___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::ApiLayers___c*, "<>9", ::UnityEngine::XR::OpenXR::ApiLayers___c*>();
}
inline void UnityEngine::XR::OpenXR::ApiLayers___c::setStaticF___9__20_1(::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool>*, "<>9__20_1", ::UnityEngine::XR::OpenXR::ApiLayers___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool>* UnityEngine::XR::OpenXR::ApiLayers___c::getStaticF___9__20_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool>*, "<>9__20_1", ::UnityEngine::XR::OpenXR::ApiLayers___c*>();
}
inline void UnityEngine::XR::OpenXR::ApiLayers___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers___c::_IsEnabled_b__20_1(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c*>(),
                                                                                         { "<IsEnabled>b__20_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers___c* UnityEngine::XR::OpenXR::ApiLayers___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers___c::ApiLayers___c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e29144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0._IsEnabled_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::_IsEnabled_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2bb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0*>(),
                                                                                           { "<IsEnabled>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::__cordl_internal_get_layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::__cordl_internal_get_layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::__cordl_internal_set_layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerName = value;
}
constexpr ::System::Runtime::InteropServices::Architecture& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::__cordl_internal_get_libraryArchitecture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___libraryArchitecture;
}
constexpr ::System::Runtime::InteropServices::Architecture const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::__cordl_internal_get_libraryArchitecture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___libraryArchitecture;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::__cordl_internal_set_libraryArchitecture(::System::Runtime::InteropServices::Architecture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___libraryArchitecture = value;
}
inline void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::_IsEnabled_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0*>(),
                                                                                         { "<IsEnabled>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0* UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0::ApiLayers___c__DisplayClass19_0() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0._IsEnabled_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::_IsEnabled_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e2bb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0*>(),
                                                                                           { "<IsEnabled>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::__cordl_internal_get_layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::__cordl_internal_get_layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::__cordl_internal_set_layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerName = value;
}
inline void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::_IsEnabled_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0*>(),
                                                                                         { "<IsEnabled>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0* UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0::ApiLayers___c__DisplayClass20_0() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2956c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0._SetEnabled_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::_SetEnabled_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2bb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0*>(),
                                                                                           { "<SetEnabled>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::__cordl_internal_get_layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::__cordl_internal_get_layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::__cordl_internal_set_layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerName = value;
}
constexpr ::System::Runtime::InteropServices::Architecture& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::__cordl_internal_get_libraryArchitecture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___libraryArchitecture;
}
constexpr ::System::Runtime::InteropServices::Architecture const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::__cordl_internal_get_libraryArchitecture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___libraryArchitecture;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::__cordl_internal_set_libraryArchitecture(::System::Runtime::InteropServices::Architecture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___libraryArchitecture = value;
}
inline void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::_SetEnabled_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0*>(),
                                                                                         { "<SetEnabled>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0* UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0::ApiLayers___c__DisplayClass21_0() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e29790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0._SetEnabled_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::_SetEnabled_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e2bba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0*>(),
                                                                                           { "<SetEnabled>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::__cordl_internal_get_layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::__cordl_internal_get_layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::__cordl_internal_set_layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerName = value;
}
inline void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::_SetEnabled_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0*>(),
                                                                                         { "<SetEnabled>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0* UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0::ApiLayers___c__DisplayClass23_0() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e29a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0._SetIndex_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::_SetIndex_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2bbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0*>(),
                                                                                           { "<SetIndex>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::__cordl_internal_get_layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::__cordl_internal_get_layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::__cordl_internal_set_layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerName = value;
}
constexpr ::System::Runtime::InteropServices::Architecture& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::__cordl_internal_get_libraryArchitecture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___libraryArchitecture;
}
constexpr ::System::Runtime::InteropServices::Architecture const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::__cordl_internal_get_libraryArchitecture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___libraryArchitecture;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::__cordl_internal_set_libraryArchitecture(::System::Runtime::InteropServices::Architecture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___libraryArchitecture = value;
}
inline void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::_SetIndex_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0*>(),
                                                                                         { "<SetIndex>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0* UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0::ApiLayers___c__DisplayClass25_0() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e29b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0._Exists_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::_Exists_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e2bbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0*>(),
                                                                                           { "<Exists>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::__cordl_internal_get_layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::__cordl_internal_get_layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::__cordl_internal_set_layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerName = value;
}
constexpr ::System::Runtime::InteropServices::Architecture& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::__cordl_internal_get_libraryArchitecture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___libraryArchitecture;
}
constexpr ::System::Runtime::InteropServices::Architecture const& UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::__cordl_internal_get_libraryArchitecture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___libraryArchitecture;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::__cordl_internal_set_libraryArchitecture(::System::Runtime::InteropServices::Architecture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___libraryArchitecture = value;
}
inline void UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::_Exists_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0*>(),
                                                                                         { "<Exists>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0* UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0::ApiLayers___c__DisplayClass27_0() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers::*)()>(&::UnityEngine::XR::OpenXR::ApiLayers::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e28d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.get_collection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* (::UnityEngine::XR::OpenXR::ApiLayers::*)()>(
    &::UnityEngine::XR::OpenXR::ApiLayers::get_collection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e28de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "get_collection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.GetExplicitLayersDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::XR::OpenXR::ApiLayers::GetExplicitLayersDir)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e28dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "GetExplicitLayersDir", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers::*)(::StringW, ::System::Runtime::InteropServices::Architecture)>(
    &::UnityEngine::XR::OpenXR::ApiLayers::IsEnabled)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e29008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                             { "IsEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers::*)(::StringW)>(&::UnityEngine::XR::OpenXR::ApiLayers::IsEnabled)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6e29148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "IsEnabled", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.SetEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers::*)(::StringW, ::System::Runtime::InteropServices::Architecture, bool)>(
    &::UnityEngine::XR::OpenXR::ApiLayers::SetEnabled)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6e29340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                { "SetEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.SetEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool)>(
    &::UnityEngine::XR::OpenXR::ApiLayers::SetEnabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e29570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                             { "SetEnabled", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.SetEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::ApiLayers::*)(::StringW, bool)>(&::UnityEngine::XR::OpenXR::ApiLayers::SetEnabled)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6e29590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "SetEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.SetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers::*)(int32_t, int32_t)>(&::UnityEngine::XR::OpenXR::ApiLayers::SetIndex)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e29794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "SetIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.SetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers::*)(::StringW, ::System::Runtime::InteropServices::Architecture, int32_t)>(
    &::UnityEngine::XR::OpenXR::ApiLayers::SetIndex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e298d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                { "SetIndex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.SetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, int32_t)>(
    &::UnityEngine::XR::OpenXR::ApiLayers::SetIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e29a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                             { "SetIndex", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::ApiLayers.Exists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::ApiLayers::*)(::StringW, ::System::Runtime::InteropServices::Architecture)>(
    &::UnityEngine::XR::OpenXR::ApiLayers::Exists)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e29a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                             { "Exists", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>*& UnityEngine::XR::OpenXR::ApiLayers::__cordl_internal_get_m_Collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Collection;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* const& UnityEngine::XR::OpenXR::ApiLayers::__cordl_internal_get_m_Collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Collection;
}
constexpr void UnityEngine::XR::OpenXR::ApiLayers::__cordl_internal_set_m_Collection(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Collection = value;
}
inline void UnityEngine::XR::OpenXR::ApiLayers::setStaticF_k_PathTrimChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "k_PathTrimChars", ::UnityEngine::XR::OpenXR::ApiLayers*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> UnityEngine::XR::OpenXR::ApiLayers::getStaticF_k_PathTrimChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "k_PathTrimChars", ::UnityEngine::XR::OpenXR::ApiLayers*>();
}
inline void UnityEngine::XR::OpenXR::ApiLayers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* UnityEngine::XR::OpenXR::ApiLayers::get_collection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "get_collection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>*>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::ApiLayers::GetExplicitLayersDir() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "GetExplicitLayersDir", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers::IsEnabled(::StringW layerName, ::System::Runtime::InteropServices::Architecture libraryArchitecture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                           { "IsEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerName, libraryArchitecture);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers::IsEnabled(::StringW layerName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "IsEnabled", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerName);
}
inline void UnityEngine::XR::OpenXR::ApiLayers::SetEnabled(::StringW layerName, ::System::Runtime::InteropServices::Architecture libraryArchitecture, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                              { "SetEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerName, libraryArchitecture, enabled);
}
inline void UnityEngine::XR::OpenXR::ApiLayers::SetEnabled(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer apiLayer, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                           { "SetEnabled", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, apiLayer, enabled);
}
inline void UnityEngine::XR::OpenXR::ApiLayers::SetEnabled(::StringW layerName, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "SetEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerName, enabled);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers::SetIndex(int32_t originalIndex, int32_t destinationIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(), { "SetIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, originalIndex, destinationIndex);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers::SetIndex(::StringW layerName, ::System::Runtime::InteropServices::Architecture libraryArchitecture, int32_t destinationIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                              { "SetIndex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerName, libraryArchitecture, destinationIndex);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers::SetIndex(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer apiLayer, int32_t destinationIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                           { "SetIndex", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, apiLayer, destinationIndex);
}
inline bool UnityEngine::XR::OpenXR::ApiLayers::Exists(::StringW layerName, ::System::Runtime::InteropServices::Architecture libraryArchitecture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::ApiLayers*>(),
                                                           { "Exists", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::Architecture>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerName, libraryArchitecture);
}
inline ::UnityEngine::XR::OpenXR::ApiLayers* UnityEngine::XR::OpenXR::ApiLayers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::ApiLayers*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::ApiLayers::ApiLayers() {}
