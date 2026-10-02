#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/ApiLayers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__Architecture_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApiLayers)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::InteropServices {
struct Architecture;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_AndroidPlatformSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_ApiDumpLogSupport;
}
namespace UnityEngine::XR::OpenXR {
struct ApiLayers_ApiLayerJson;
}
namespace UnityEngine::XR::OpenXR {
struct ApiLayers_ApiLayerManifestJson;
}
namespace UnityEngine::XR::OpenXR {
struct ApiLayers_ApiLayer;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_CoreValidationLogSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_FileProcessor;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_IPlatformSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_ISupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_LogSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_WindowsPlatformSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass19_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass20_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass21_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass23_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass25_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass27_0;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class ApiLayers;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_AndroidPlatformSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_ApiDumpLogSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_CoreValidationLogSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_FileProcessor;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_IPlatformSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_ISupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_LogSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers_WindowsPlatformSupport;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass19_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass20_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass21_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass23_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass25_0;
}
namespace UnityEngine::XR::OpenXR {
class ApiLayers___c__DisplayClass27_0;
}
namespace UnityEngine::XR::OpenXR {
struct ApiLayers_ApiLayer;
}
namespace UnityEngine::XR::OpenXR {
struct ApiLayers_ApiLayerJson;
}
namespace UnityEngine::XR::OpenXR {
struct ApiLayers_ApiLayerManifestJson;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers_ISupport*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers___c*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0*);
MARK_REF_T(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0*);
MARK_VAL_T(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer);
MARK_VAL_T(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson);
MARK_VAL_T(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers*, "UnityEngine.XR.OpenXR", "ApiLayers");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport*, "UnityEngine.XR.OpenXR", "ApiLayers/AndroidPlatformSupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport*, "UnityEngine.XR.OpenXR", "ApiLayers/ApiDumpLogSupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport*, "UnityEngine.XR.OpenXR", "ApiLayers/CoreValidationLogSupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor*, "UnityEngine.XR.OpenXR", "ApiLayers/FileProcessor");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*, "UnityEngine.XR.OpenXR", "ApiLayers/IPlatformSupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_ISupport*, "UnityEngine.XR.OpenXR", "ApiLayers/ISupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_LogSupport*, "UnityEngine.XR.OpenXR", "ApiLayers/LogSupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport*, "UnityEngine.XR.OpenXR", "ApiLayers/WindowsPlatformSupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers___c*, "UnityEngine.XR.OpenXR", "ApiLayers/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0*, "UnityEngine.XR.OpenXR", "ApiLayers/<>c__DisplayClass19_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0*, "UnityEngine.XR.OpenXR", "ApiLayers/<>c__DisplayClass20_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0*, "UnityEngine.XR.OpenXR", "ApiLayers/<>c__DisplayClass21_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0*, "UnityEngine.XR.OpenXR", "ApiLayers/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0*, "UnityEngine.XR.OpenXR", "ApiLayers/<>c__DisplayClass25_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0*, "UnityEngine.XR.OpenXR", "ApiLayers/<>c__DisplayClass27_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, "UnityEngine.XR.OpenXR", "ApiLayers/ApiLayer");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson, "UnityEngine.XR.OpenXR", "ApiLayers/ApiLayerJson");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson, "UnityEngine.XR.OpenXR", "ApiLayers/ApiLayerManifestJson");
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/ApiLayerJson
struct CORDL_TYPE ApiLayers_ApiLayerJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_ApiLayerJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "library_path", ty: "::StringW", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "api_version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "implementation_version", ty: "::StringW", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
  constexpr ApiLayers_ApiLayerJson(::StringW name, ::StringW library_path, ::StringW api_version, ::StringW implementation_version, ::StringW description) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field library_path, offset: 0x8, size: 0x8, def value: None
  ::StringW library_path;

  /// @brief Field api_version, offset: 0x10, size: 0x8, def value: None
  ::StringW api_version;

  /// @brief Field implementation_version, offset: 0x18, size: 0x8, def value: None
  ::StringW implementation_version;

  /// @brief Field description, offset: 0x20, size: 0x8, def value: None
  ::StringW description;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson, library_path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson, api_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson, implementation_version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson, description) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson) == 0x28, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Runtime.InteropServices.Architecture, UnityEngine.XR.OpenXR.ApiLayers::ApiLayerJson
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/ApiLayer
struct CORDL_TYPE ApiLayers_ApiLayer {
public:
  // Declarations
  __declspec(property(get = get_apiVersion)) ::StringW apiVersion;

  __declspec(property(get = get_description)) ::StringW description;

  __declspec(property(get = get_implementationVersion)) ::StringW implementationVersion;

  __declspec(property(get = get_isEnabled, put = set_isEnabled)) bool isEnabled;

  __declspec(property(get = get_jsonFileName)) ::StringW jsonFileName;

  __declspec(property(get = get_libraryArchitecture)) ::System::Runtime::InteropServices::Architecture libraryArchitecture;

  __declspec(property(get = get_libraryPath)) ::StringW libraryPath;

  __declspec(property(get = get_name)) ::StringW name;

  /// @brief Method .ctor, addr 0x6e29c24, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson json, ::StringW jsonFileName, ::System::Runtime::InteropServices::Architecture libraryArchitecture, bool isEnabled);

  /// @brief Method get_apiVersion, addr 0x6e29c04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_apiVersion();

  /// @brief Method get_description, addr 0x6e29c14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_description();

  /// @brief Method get_implementationVersion, addr 0x6e29c0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_implementationVersion();

  /// @brief Method get_isEnabled, addr 0x6e29be4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEnabled();

  /// @brief Method get_jsonFileName, addr 0x6e29c1c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_jsonFileName();

  /// @brief Method get_libraryArchitecture, addr 0x6e29bf4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::InteropServices::Architecture get_libraryArchitecture();

  /// @brief Method get_libraryPath, addr 0x6e29bfc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_libraryPath();

  /// @brief Method get_name, addr 0x6e29588, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method set_isEnabled, addr 0x6e29bec, size 0x8, virtual false, abstract: false, final false
  inline void set_isEnabled(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_ApiLayer();

  // Ctor Parameters [CppParam { name: "m_Json", ty: "::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_JsonFileName", ty:
  // "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LibraryArchitecture", ty: "::System::Runtime::InteropServices::Architecture", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_IsEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr ApiLayers_ApiLayer(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson m_Json, ::StringW m_JsonFileName, ::System::Runtime::InteropServices::Architecture m_LibraryArchitecture,
                               bool m_IsEnabled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17436 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// [SerializeField]
  /// @brief Field m_Json, offset: 0x0, size: 0x28, def value: None
  ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson m_Json;

  /// [SerializeField]
  /// @brief Field m_JsonFileName, offset: 0x28, size: 0x8, def value: None
  ::StringW m_JsonFileName;

  /// [SerializeField]
  /// @brief Field m_LibraryArchitecture, offset: 0x30, size: 0x4, def value: None
  ::System::Runtime::InteropServices::Architecture m_LibraryArchitecture;

  /// [SerializeField]
  /// @brief Field m_IsEnabled, offset: 0x34, size: 0x1, def value: None
  bool m_IsEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, m_Json) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, m_JsonFileName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, m_LibraryArchitecture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, m_IsEnabled) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer) == 0x38, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies UnityEngine.XR.OpenXR.ApiLayers::ApiLayerJson
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/ApiLayerManifestJson
struct CORDL_TYPE ApiLayers_ApiLayerManifestJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_ApiLayerManifestJson();

  // Ctor Parameters [CppParam { name: "file_format_version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "api_layer", ty:
  // "::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson", modifiers: "", def_value: None, comment: None }]
  constexpr ApiLayers_ApiLayerManifestJson(::StringW file_format_version, ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson api_layer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17438 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field file_format_version, offset: 0x0, size: 0x8, def value: None
  ::StringW file_format_version;

  /// @brief Field api_layer, offset: 0x8, size: 0x28, def value: None
  ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson api_layer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson, file_format_version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson, api_layer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson) == 0x30, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/FileProcessor
class CORDL_TYPE ApiLayers_FileProcessor : public ::System::Object {
public:
  // Declarations
  /// @brief Method CleanupApiLayerFiles, addr 0x6e2a2b4, size 0x33c, virtual false, abstract: false, final false
  static inline void CleanupApiLayerFiles(::StringW layerName, ::StringW jsonPath);

  /// @brief Method CopyApiLayerFiles, addr 0x6e29c40, size 0x674, virtual false, abstract: false, final false
  static inline bool CopyApiLayerFiles(::StringW jsonPath, ::StringW libraryPath, ::System::Runtime::InteropServices::Architecture libraryArchitecture,
                                       ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport* platformSupport, ::by_ref<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson> layerManifest);

  /// @brief Method ResolveLibraryPath, addr 0x6e2a5f0, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW ResolveLibraryPath(::StringW jsonPath, ::StringW libraryPath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_FileProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_FileProcessor", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers_FileProcessor(ApiLayers_FileProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_FileProcessor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers_FileProcessor(ApiLayers_FileProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object, System.Runtime.InteropServices.Architecture
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/AndroidPlatformSupport
class CORDL_TYPE ApiLayers_AndroidPlatformSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_SupportedArchitectures, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SupportedArchitectures, put = setStaticF_s_SupportedArchitectures)) ::ArrayW<::System::Runtime::InteropServices::Architecture> s_SupportedArchitectures;

  /// @brief Field s_SupportedExtensions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SupportedExtensions, put = setStaticF_s_SupportedExtensions)) ::ArrayW<::StringW> s_SupportedExtensions;

  /// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport"
  constexpr operator ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
  constexpr operator ::UnityEngine::XR::OpenXR::ApiLayers_ISupport*() noexcept;

  /// @brief Method GetApiLayersDir, addr 0x6e2a6a8, size 0xc8, virtual true, abstract: false, final true
  inline ::StringW GetApiLayersDir();

  /// @brief Method GetBundleDir, addr 0x6e2a770, size 0x14, virtual true, abstract: false, final true
  inline ::StringW GetBundleDir();

  /// @brief Method GetExpectedArchitectureImportString, addr 0x6e2a83c, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetExpectedArchitectureImportString(::System::Runtime::InteropServices::Architecture architecture);

  /// @brief Method GetSupportedArchitectures, addr 0x6e2a784, size 0x5c, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Runtime::InteropServices::Architecture> GetSupportedArchitectures();

  /// @brief Method GetSupportedExtensions, addr 0x6e2a7e0, size 0x5c, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW> GetSupportedExtensions();

  static inline ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport* New_ctor();

  /// @brief Method Setup, addr 0x6e2a6a0, size 0x4, virtual true, abstract: false, final true
  inline void Setup(::System::IntPtr hookGetInstanceProcAddr);

  /// @brief Method Teardown, addr 0x6e2a6a4, size 0x4, virtual true, abstract: false, final true
  inline void Teardown(uint64_t xrInstance);

  /// @brief Method .ctor, addr 0x6e2a8a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Runtime::InteropServices::Architecture> getStaticF_s_SupportedArchitectures();

  static inline ::ArrayW<::StringW> getStaticF_s_SupportedExtensions();

  /// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport"
  constexpr ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport* i___UnityEngine__XR__OpenXR__ApiLayers_IPlatformSupport() noexcept;

  /// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
  constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ISupport* i___UnityEngine__XR__OpenXR__ApiLayers_ISupport() noexcept;

  static inline void setStaticF_s_SupportedArchitectures(::ArrayW<::System::Runtime::InteropServices::Architecture> value);

  static inline void setStaticF_s_SupportedExtensions(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_AndroidPlatformSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_AndroidPlatformSupport", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers_AndroidPlatformSupport(ApiLayers_AndroidPlatformSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_AndroidPlatformSupport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers_AndroidPlatformSupport(ApiLayers_AndroidPlatformSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17440 };

  /// @brief Field k_AndroidApiLayersPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AndroidApiLayersPath{ u"AndroidLayers" };

  /// @brief Field k_Arm64Arch offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Arm64Arch{ u"arm64-v8a" };

  /// @brief Field k_OpenXRPackageName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OpenXRPackageName{ u"com.unity.xr.openxr" };

  /// @brief Field k_SoExt offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SoExt{ u".so" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/IPlatformSupport
class CORDL_TYPE ApiLayers_IPlatformSupport {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
  constexpr operator ::UnityEngine::XR::OpenXR::ApiLayers_ISupport*() noexcept;

  /// @brief Method GetApiLayersDir, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetApiLayersDir();

  /// @brief Method GetBundleDir, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetBundleDir();

  /// @brief Method GetSupportedArchitectures, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Runtime::InteropServices::Architecture> GetSupportedArchitectures();

  /// @brief Method GetSupportedExtensions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::StringW> GetSupportedExtensions();

  /// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
  constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ISupport* i___UnityEngine__XR__OpenXR__ApiLayers_ISupport() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_IPlatformSupport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers_IPlatformSupport(ApiLayers_IPlatformSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object, System.Runtime.InteropServices.Architecture
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/WindowsPlatformSupport
class CORDL_TYPE ApiLayers_WindowsPlatformSupport : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_callbackOrder)) int32_t callbackOrder;

  /// @brief Field m_OriginalEnabledLayersPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalEnabledLayersPath, put = __cordl_internal_set_m_OriginalEnabledLayersPath)) ::StringW m_OriginalEnabledLayersPath;

  /// @brief Field s_SupportedArchitectures, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SupportedArchitectures, put = setStaticF_s_SupportedArchitectures)) ::ArrayW<::System::Runtime::InteropServices::Architecture> s_SupportedArchitectures;

  /// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport"
  constexpr operator ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
  constexpr operator ::UnityEngine::XR::OpenXR::ApiLayers_ISupport*() noexcept;

  /// @brief Method GetApiLayersDir, addr 0x6e2aa88, size 0xc8, virtual true, abstract: false, final true
  inline ::StringW GetApiLayersDir();

  /// @brief Method GetBundleDir, addr 0x6e2aba0, size 0x14, virtual true, abstract: false, final true
  inline ::StringW GetBundleDir();

  /// @brief Method GetSupportedArchitectures, addr 0x6e2abb4, size 0x5c, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Runtime::InteropServices::Architecture> GetSupportedArchitectures();

  /// @brief Method GetSupportedExtensions, addr 0x6e2ac10, size 0x80, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW> GetSupportedExtensions();

  static inline ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport* New_ctor();

  /// @brief Method Setup, addr 0x6e2a998, size 0xf0, virtual true, abstract: false, final true
  inline void Setup(::System::IntPtr hookGetInstanceProcAddr);

  /// @brief Method Teardown, addr 0x6e2ab50, size 0x50, virtual true, abstract: false, final true
  inline void Teardown(uint64_t xrInstance);

  constexpr ::StringW const& __cordl_internal_get_m_OriginalEnabledLayersPath() const;

  constexpr ::StringW& __cordl_internal_get_m_OriginalEnabledLayersPath();

  constexpr void __cordl_internal_set_m_OriginalEnabledLayersPath(::StringW value);

  /// @brief Method .ctor, addr 0x6e2ac90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Runtime::InteropServices::Architecture> getStaticF_s_SupportedArchitectures();

  /// @brief Method get_callbackOrder, addr 0x6e2a990, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_callbackOrder();

  /// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport"
  constexpr ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport* i___UnityEngine__XR__OpenXR__ApiLayers_IPlatformSupport() noexcept;

  /// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
  constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ISupport* i___UnityEngine__XR__OpenXR__ApiLayers_ISupport() noexcept;

  static inline void setStaticF_s_SupportedArchitectures(::ArrayW<::System::Runtime::InteropServices::Architecture> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_WindowsPlatformSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_WindowsPlatformSupport", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers_WindowsPlatformSupport(ApiLayers_WindowsPlatformSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_WindowsPlatformSupport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers_WindowsPlatformSupport(ApiLayers_WindowsPlatformSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17442 };

  /// @brief Field k_ApiLayerPathVar offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ApiLayerPathVar{ u"XR_API_LAYER_PATH" };

  /// @brief Field k_DllExt offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DllExt{ u".dll" };

  /// @brief Field k_OpenXRPackageName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OpenXRPackageName{ u"com.unity.xr.openxr" };

  /// @brief Field k_PathSeparator offset 0xffffffff size 0x8
  static constexpr ::ConstString k_PathSeparator{ u";" };

  /// @brief Field k_WindowsApiLayersPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_WindowsApiLayersPath{ u"WindowsLayers" };

  /// @brief Field m_OriginalEnabledLayersPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_OriginalEnabledLayersPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport, ___m_OriginalEnabledLayersPath) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/LogSupport
class CORDL_TYPE ApiLayers_LogSupport : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LogFileName)) ::StringW LogFileName;

  __declspec(property(get = get_LogPrefix)) ::StringW LogPrefix;

  /// @brief Field m_LogFilePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LogFilePath, put = __cordl_internal_set_m_LogFilePath)) ::StringW m_LogFilePath;

  /// @brief Convert operator to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
  constexpr operator ::UnityEngine::XR::OpenXR::ApiLayers_ISupport*() noexcept;

  /// @brief Method GetDefaultLogPath, addr 0x6e2b09c, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW GetDefaultLogPath();

  static inline ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport* New_ctor();

  /// @brief Method ProcessLog, addr 0x6e2b6fc, size 0x1ac, virtual false, abstract: false, final false
  inline void ProcessLog();

  /// @brief Method ProcessLogFile, addr 0x6e2b8a8, size 0x208, virtual false, abstract: false, final false
  inline void ProcessLogFile(::StringW filePath, int32_t maxLines);

  /// @brief Method Setup, addr 0x6e2b6a8, size 0x54, virtual true, abstract: false, final false
  inline void Setup(::System::IntPtr hookGetInstanceProcAddr);

  /// @brief Method SetupLog, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetupLog();

  /// @brief Method Teardown, addr 0x6e2b284, size 0x4, virtual true, abstract: false, final false
  inline void Teardown(uint64_t xrInstance);

  constexpr ::StringW const& __cordl_internal_get_m_LogFilePath() const;

  constexpr ::StringW& __cordl_internal_get_m_LogFilePath();

  constexpr void __cordl_internal_set_m_LogFilePath(::StringW value);

  /// @brief Method .ctor, addr 0x6e2b288, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LogFileName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LogFileName();

  /// @brief Method get_LogPrefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LogPrefix();

  /// @brief Convert to "::UnityEngine::XR::OpenXR::ApiLayers_ISupport"
  constexpr ::UnityEngine::XR::OpenXR::ApiLayers_ISupport* i___UnityEngine__XR__OpenXR__ApiLayers_ISupport() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_LogSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_LogSupport", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers_LogSupport(ApiLayers_LogSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_LogSupport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers_LogSupport(ApiLayers_LogSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17446 };

  /// @brief Field k_LogsDir offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LogsDir{ u"Logs~" };

  /// @brief Field k_NewLineChar offset 0xffffffff size 0x2
  static constexpr char16_t k_NewLineChar{ u'\n' };

  /// @brief Field k_TextExportType offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TextExportType{ u"text" };

  /// @brief Field m_LogFilePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_LogFilePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers_LogSupport, ___m_LogFilePath) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_LogSupport) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies UnityEngine.XR.OpenXR.ApiLayers::LogSupport
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/ApiDumpLogSupport
class CORDL_TYPE ApiLayers_ApiDumpLogSupport : public ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport {
public:
  // Declarations
  __declspec(property(get = get_LogFileName)) ::StringW LogFileName;

  __declspec(property(get = get_LogPrefix)) ::StringW LogPrefix;

  /// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
  /// @brief Method AddSupport, addr 0x6e2ad20, size 0x80, virtual false, abstract: false, final false
  static inline void AddSupport();

  static inline ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport* New_ctor();

  /// @brief Method SetupLog, addr 0x6e2ae2c, size 0x1a4, virtual true, abstract: false, final false
  inline void SetupLog();

  /// @brief Method SetupWindowsLog, addr 0x6e2afd8, size 0xc4, virtual false, abstract: false, final false
  inline void SetupWindowsLog();

  /// @brief Method Teardown, addr 0x6e2b280, size 0x4, virtual true, abstract: false, final false
  inline void Teardown(uint64_t xrInstance);

  /// @brief Method TeardownWindowsLog, addr 0x6e2b1d8, size 0xa8, virtual false, abstract: false, final false
  inline void TeardownWindowsLog();

  /// @brief Method .ctor, addr 0x6e2ada0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LogFileName, addr 0x6e2ada4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_LogFileName();

  /// @brief Method get_LogPrefix, addr 0x6e2ade8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_LogPrefix();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_ApiDumpLogSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_ApiDumpLogSupport", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers_ApiDumpLogSupport(ApiLayers_ApiDumpLogSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_ApiDumpLogSupport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers_ApiDumpLogSupport(ApiLayers_ApiDumpLogSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17443 };

  /// @brief Field k_LayerName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LayerName{ u"XR_APILAYER_LUNARG_api_dump" };

  /// @brief Field k_LogFileNameConst offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LogFileNameConst{ u"api_dump_logs.txt" };

  /// @brief Field k_LogPrefixConst offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LogPrefixConst{ u"[API Dump] " };

  /// @brief Field k_WindowsExportTypeEnvVar offset 0xffffffff size 0x8
  static constexpr ::ConstString k_WindowsExportTypeEnvVar{ u"XR_API_DUMP_EXPORT_TYPE" };

  /// @brief Field k_WindowsFileEnvVar offset 0xffffffff size 0x8
  static constexpr ::ConstString k_WindowsFileEnvVar{ u"XR_API_DUMP_FILE_NAME" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies UnityEngine.XR.OpenXR.ApiLayers::LogSupport
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/CoreValidationLogSupport
class CORDL_TYPE ApiLayers_CoreValidationLogSupport : public ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport {
public:
  // Declarations
  __declspec(property(get = get_LogFileName)) ::StringW LogFileName;

  __declspec(property(get = get_LogPrefix)) ::StringW LogPrefix;

  /// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
  /// @brief Method AddSupport, addr 0x6e2b314, size 0x80, virtual false, abstract: false, final false
  static inline void AddSupport();

  static inline ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport* New_ctor();

  /// @brief Method SetupLog, addr 0x6e2b398, size 0x1a4, virtual true, abstract: false, final false
  inline void SetupLog();

  /// @brief Method SetupWindowsLog, addr 0x6e2b53c, size 0xc4, virtual false, abstract: false, final false
  inline void SetupWindowsLog();

  /// @brief Method Teardown, addr 0x6e2b600, size 0x4, virtual true, abstract: false, final false
  inline void Teardown(uint64_t xrInstance);

  /// @brief Method TeardownWindowsLog, addr 0x6e2b604, size 0xa4, virtual false, abstract: false, final false
  inline void TeardownWindowsLog();

  /// @brief Method .ctor, addr 0x6e2b394, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LogFileName, addr 0x6e2b28c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_LogFileName();

  /// @brief Method get_LogPrefix, addr 0x6e2b2d0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_LogPrefix();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers_CoreValidationLogSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_CoreValidationLogSupport", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers_CoreValidationLogSupport(ApiLayers_CoreValidationLogSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_CoreValidationLogSupport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers_CoreValidationLogSupport(ApiLayers_CoreValidationLogSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17444 };

  /// @brief Field k_LayerName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LayerName{ u"XR_APILAYER_LUNARG_core_validation" };

  /// @brief Field k_LogFileNameConst offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LogFileNameConst{ u"core_validation_logs.txt" };

  /// @brief Field k_LogPrefixConst offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LogPrefixConst{ u"[Validation Core] " };

  /// @brief Field k_WindowsExportTypeEnvVar offset 0xffffffff size 0x8
  static constexpr ::ConstString k_WindowsExportTypeEnvVar{ u"XR_CORE_VALIDATION_EXPORT_TYPE" };

  /// @brief Field k_WindowsFileEnvVar offset 0xffffffff size 0x8
  static constexpr ::ConstString k_WindowsFileEnvVar{ u"XR_CORE_VALIDATION_FILE_NAME" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/ISupport
class CORDL_TYPE ApiLayers_ISupport {
public:
  // Declarations
  /// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Setup(::System::IntPtr hookGetInstanceProcAddr);

  /// @brief Method Teardown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Teardown(uint64_t xrInstance);

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers_ISupport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers_ISupport(ApiLayers_ISupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/<>c
class CORDL_TYPE ApiLayers___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::ApiLayers___c* __9;

  /// @brief Field <>9__20_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_1, put = setStaticF___9__20_1)) ::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool>* __9__20_1;

  static inline ::UnityEngine::XR::OpenXR::ApiLayers___c* New_ctor();

  /// @brief Method <IsEnabled>b__20_1, addr 0x6e2bb08, size 0x8, virtual false, abstract: false, final false
  inline bool _IsEnabled_b__20_1(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  /// @brief Method .ctor, addr 0x6e2bb04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::ApiLayers___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool>* getStaticF___9__20_1();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::ApiLayers___c* value);

  static inline void setStaticF___9__20_1(::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers___c(ApiLayers___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers___c(ApiLayers___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.InteropServices.Architecture
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/<>c__DisplayClass19_0
class CORDL_TYPE ApiLayers___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_layerName, put = __cordl_internal_set_layerName)) ::StringW layerName;

  /// @brief Field libraryArchitecture, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_libraryArchitecture, put = __cordl_internal_set_libraryArchitecture)) ::System::Runtime::InteropServices::Architecture libraryArchitecture;

  static inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0* New_ctor();

  /// @brief Method <IsEnabled>b__0, addr 0x6e2bb10, size 0x44, virtual false, abstract: false, final false
  inline bool _IsEnabled_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  constexpr ::StringW const& __cordl_internal_get_layerName() const;

  constexpr ::StringW& __cordl_internal_get_layerName();

  constexpr ::System::Runtime::InteropServices::Architecture const& __cordl_internal_get_libraryArchitecture() const;

  constexpr ::System::Runtime::InteropServices::Architecture& __cordl_internal_get_libraryArchitecture();

  constexpr void __cordl_internal_set_layerName(::StringW value);

  constexpr void __cordl_internal_set_libraryArchitecture(::System::Runtime::InteropServices::Architecture value);

  /// @brief Method .ctor, addr 0x6e29144, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers___c__DisplayClass19_0(ApiLayers___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers___c__DisplayClass19_0(ApiLayers___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17448 };

  /// @brief Field layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___layerName;

  /// @brief Field libraryArchitecture, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::InteropServices::Architecture ___libraryArchitecture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0, ___layerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0, ___libraryArchitecture) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/<>c__DisplayClass20_0
class CORDL_TYPE ApiLayers___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_layerName, put = __cordl_internal_set_layerName)) ::StringW layerName;

  static inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0* New_ctor();

  /// @brief Method <IsEnabled>b__0, addr 0x6e2bb54, size 0x10, virtual false, abstract: false, final false
  inline bool _IsEnabled_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  constexpr ::StringW const& __cordl_internal_get_layerName() const;

  constexpr ::StringW& __cordl_internal_get_layerName();

  constexpr void __cordl_internal_set_layerName(::StringW value);

  /// @brief Method .ctor, addr 0x6e2933c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass20_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers___c__DisplayClass20_0(ApiLayers___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass20_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers___c__DisplayClass20_0(ApiLayers___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17449 };

  /// @brief Field layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___layerName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0, ___layerName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.InteropServices.Architecture
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/<>c__DisplayClass21_0
class CORDL_TYPE ApiLayers___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_layerName, put = __cordl_internal_set_layerName)) ::StringW layerName;

  /// @brief Field libraryArchitecture, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_libraryArchitecture, put = __cordl_internal_set_libraryArchitecture)) ::System::Runtime::InteropServices::Architecture libraryArchitecture;

  static inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0* New_ctor();

  /// @brief Method <SetEnabled>b__0, addr 0x6e2bb64, size 0x44, virtual false, abstract: false, final false
  inline bool _SetEnabled_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  constexpr ::StringW const& __cordl_internal_get_layerName() const;

  constexpr ::StringW& __cordl_internal_get_layerName();

  constexpr ::System::Runtime::InteropServices::Architecture const& __cordl_internal_get_libraryArchitecture() const;

  constexpr ::System::Runtime::InteropServices::Architecture& __cordl_internal_get_libraryArchitecture();

  constexpr void __cordl_internal_set_layerName(::StringW value);

  constexpr void __cordl_internal_set_libraryArchitecture(::System::Runtime::InteropServices::Architecture value);

  /// @brief Method .ctor, addr 0x6e2956c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers___c__DisplayClass21_0(ApiLayers___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers___c__DisplayClass21_0(ApiLayers___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17450 };

  /// @brief Field layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___layerName;

  /// @brief Field libraryArchitecture, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::InteropServices::Architecture ___libraryArchitecture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0, ___layerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0, ___libraryArchitecture) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/<>c__DisplayClass23_0
class CORDL_TYPE ApiLayers___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_layerName, put = __cordl_internal_set_layerName)) ::StringW layerName;

  static inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0* New_ctor();

  /// @brief Method <SetEnabled>b__0, addr 0x6e2bba8, size 0x10, virtual false, abstract: false, final false
  inline bool _SetEnabled_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  constexpr ::StringW const& __cordl_internal_get_layerName() const;

  constexpr ::StringW& __cordl_internal_get_layerName();

  constexpr void __cordl_internal_set_layerName(::StringW value);

  /// @brief Method .ctor, addr 0x6e29790, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers___c__DisplayClass23_0(ApiLayers___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers___c__DisplayClass23_0(ApiLayers___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17451 };

  /// @brief Field layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___layerName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0, ___layerName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.InteropServices.Architecture
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/<>c__DisplayClass25_0
class CORDL_TYPE ApiLayers___c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_layerName, put = __cordl_internal_set_layerName)) ::StringW layerName;

  /// @brief Field libraryArchitecture, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_libraryArchitecture, put = __cordl_internal_set_libraryArchitecture)) ::System::Runtime::InteropServices::Architecture libraryArchitecture;

  static inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0* New_ctor();

  /// @brief Method <SetIndex>b__0, addr 0x6e2bbb8, size 0x44, virtual false, abstract: false, final false
  inline bool _SetIndex_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  constexpr ::StringW const& __cordl_internal_get_layerName() const;

  constexpr ::StringW& __cordl_internal_get_layerName();

  constexpr ::System::Runtime::InteropServices::Architecture const& __cordl_internal_get_libraryArchitecture() const;

  constexpr ::System::Runtime::InteropServices::Architecture& __cordl_internal_get_libraryArchitecture();

  constexpr void __cordl_internal_set_layerName(::StringW value);

  constexpr void __cordl_internal_set_libraryArchitecture(::System::Runtime::InteropServices::Architecture value);

  /// @brief Method .ctor, addr 0x6e29a10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers___c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass25_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers___c__DisplayClass25_0(ApiLayers___c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass25_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers___c__DisplayClass25_0(ApiLayers___c__DisplayClass25_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17452 };

  /// @brief Field layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___layerName;

  /// @brief Field libraryArchitecture, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::InteropServices::Architecture ___libraryArchitecture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0, ___layerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0, ___libraryArchitecture) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.InteropServices.Architecture
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers/<>c__DisplayClass27_0
class CORDL_TYPE ApiLayers___c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_layerName, put = __cordl_internal_set_layerName)) ::StringW layerName;

  /// @brief Field libraryArchitecture, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_libraryArchitecture, put = __cordl_internal_set_libraryArchitecture)) ::System::Runtime::InteropServices::Architecture libraryArchitecture;

  static inline ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0* New_ctor();

  /// @brief Method <Exists>b__0, addr 0x6e2bbfc, size 0x48, virtual false, abstract: false, final false
  inline bool _Exists_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer);

  constexpr ::StringW const& __cordl_internal_get_layerName() const;

  constexpr ::StringW& __cordl_internal_get_layerName();

  constexpr ::System::Runtime::InteropServices::Architecture const& __cordl_internal_get_libraryArchitecture() const;

  constexpr ::System::Runtime::InteropServices::Architecture& __cordl_internal_get_libraryArchitecture();

  constexpr void __cordl_internal_set_layerName(::StringW value);

  constexpr void __cordl_internal_set_libraryArchitecture(::System::Runtime::InteropServices::Architecture value);

  /// @brief Method .ctor, addr 0x6e29b48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers___c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass27_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers___c__DisplayClass27_0(ApiLayers___c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers___c__DisplayClass27_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers___c__DisplayClass27_0(ApiLayers___c__DisplayClass27_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17453 };

  /// @brief Field layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___layerName;

  /// @brief Field libraryArchitecture, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::InteropServices::Architecture ___libraryArchitecture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0, ___layerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0, ___libraryArchitecture) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.ApiLayers
class CORDL_TYPE ApiLayers : public ::System::Object {
public:
  // Declarations
  using AndroidPlatformSupport = ::UnityEngine::XR::OpenXR::ApiLayers_AndroidPlatformSupport;

  using ApiDumpLogSupport = ::UnityEngine::XR::OpenXR::ApiLayers_ApiDumpLogSupport;

  using ApiLayer = ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer;

  using ApiLayerJson = ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerJson;

  using ApiLayerManifestJson = ::UnityEngine::XR::OpenXR::ApiLayers_ApiLayerManifestJson;

  using CoreValidationLogSupport = ::UnityEngine::XR::OpenXR::ApiLayers_CoreValidationLogSupport;

  using FileProcessor = ::UnityEngine::XR::OpenXR::ApiLayers_FileProcessor;

  using IPlatformSupport = ::UnityEngine::XR::OpenXR::ApiLayers_IPlatformSupport;

  using ISupport = ::UnityEngine::XR::OpenXR::ApiLayers_ISupport;

  using LogSupport = ::UnityEngine::XR::OpenXR::ApiLayers_LogSupport;

  using WindowsPlatformSupport = ::UnityEngine::XR::OpenXR::ApiLayers_WindowsPlatformSupport;

  using __c = ::UnityEngine::XR::OpenXR::ApiLayers___c;

  using __c__DisplayClass19_0 = ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass19_0;

  using __c__DisplayClass20_0 = ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass20_0;

  using __c__DisplayClass21_0 = ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass21_0;

  using __c__DisplayClass23_0 = ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass23_0;

  using __c__DisplayClass25_0 = ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass25_0;

  using __c__DisplayClass27_0 = ::UnityEngine::XR::OpenXR::ApiLayers___c__DisplayClass27_0;

  __declspec(property(get = get_collection)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* collection;

  /// @brief Field k_PathTrimChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_PathTrimChars, put = setStaticF_k_PathTrimChars)) ::ArrayW<char16_t> k_PathTrimChars;

  /// @brief Field m_Collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Collection,
                      put = __cordl_internal_set_m_Collection)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* m_Collection;

  /// @brief Method Exists, addr 0x6e29a2c, size 0x11c, virtual false, abstract: false, final false
  inline bool Exists(::StringW layerName, ::System::Runtime::InteropServices::Architecture libraryArchitecture);

  /// @brief Method GetExplicitLayersDir, addr 0x6e28dec, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW GetExplicitLayersDir();

  /// @brief Method IsEnabled, addr 0x6e29148, size 0x1f4, virtual false, abstract: false, final false
  inline bool IsEnabled(::StringW layerName);

  /// @brief Method IsEnabled, addr 0x6e29008, size 0x13c, virtual false, abstract: false, final false
  inline bool IsEnabled(::StringW layerName, ::System::Runtime::InteropServices::Architecture libraryArchitecture);

  static inline ::UnityEngine::XR::OpenXR::ApiLayers* New_ctor();

  /// @brief Method SetEnabled, addr 0x6e29570, size 0x18, virtual false, abstract: false, final false
  inline void SetEnabled(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer apiLayer, bool enabled);

  /// @brief Method SetEnabled, addr 0x6e29590, size 0x200, virtual false, abstract: false, final false
  inline void SetEnabled(::StringW layerName, bool enabled);

  /// @brief Method SetEnabled, addr 0x6e29340, size 0x22c, virtual false, abstract: false, final false
  inline void SetEnabled(::StringW layerName, ::System::Runtime::InteropServices::Architecture libraryArchitecture, bool enabled);

  /// @brief Method SetIndex, addr 0x6e29a14, size 0x18, virtual false, abstract: false, final false
  inline bool SetIndex(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer apiLayer, int32_t destinationIndex);

  /// @brief Method SetIndex, addr 0x6e298d4, size 0x13c, virtual false, abstract: false, final false
  inline bool SetIndex(::StringW layerName, ::System::Runtime::InteropServices::Architecture libraryArchitecture, int32_t destinationIndex);

  /// @brief Method SetIndex, addr 0x6e29794, size 0x140, virtual false, abstract: false, final false
  inline bool SetIndex(int32_t originalIndex, int32_t destinationIndex);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* const& __cordl_internal_get_m_Collection() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>*& __cordl_internal_get_m_Collection();

  constexpr void __cordl_internal_set_m_Collection(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* value);

  /// @brief Method .ctor, addr 0x6e28d70, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<char16_t> getStaticF_k_PathTrimChars();

  /// @brief Method get_collection, addr 0x6e28de4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* get_collection();

  static inline void setStaticF_k_PathTrimChars(::ArrayW<char16_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApiLayers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApiLayers(ApiLayers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApiLayers", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApiLayers(ApiLayers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17454 };

  /// @brief Field k_EditorApiLayersDir offset 0xffffffff size 0x8
  static constexpr ::ConstString k_EditorApiLayersDir{ u"APILayers~" };

  /// @brief Field k_EditorXrDir offset 0xffffffff size 0x8
  static constexpr ::ConstString k_EditorXrDir{ u"XR" };

  /// @brief Field k_FileFormatVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString k_FileFormatVersion{ u"1.0.0" };

  /// @brief Field k_JsonExt offset 0xffffffff size 0x8
  static constexpr ::ConstString k_JsonExt{ u".json" };

  /// @brief Field k_LibraryPathPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LibraryPathPrefix{ u"./" };

  /// @brief Field k_LogPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LogPrefix{ u"[OpenXR API Layers] " };

  /// @brief Field k_OpenXRApiMajorVersionFallback offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OpenXRApiMajorVersionFallback{ u"1" };

  /// @brief Field k_RuntimeApiLayersPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RuntimeApiLayersPath{ u"api_layers" };

  /// @brief Field k_RuntimeExplicitLayersDir offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RuntimeExplicitLayersDir{ u"explicit.d" };

  /// @brief Field k_RuntimeOpenXRPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RuntimeOpenXRPath{ u"openxr" };

  /// [SerializeField]
  /// @brief Field m_Collection, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>* ___m_Collection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::ApiLayers, ___m_Collection) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::ApiLayers) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
