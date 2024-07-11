#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/ResourceManagerConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceManagerConfig)
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class ResourceManagerConfig;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::ResourceManagerConfig);
// Type: UnityEngine.ResourceManagement.Util::ResourceManagerConfig
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Util::ResourceManagerConfig*
class CORDL_TYPE ResourceManagerConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateArrayResult, addr 0x3341370, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Array* CreateArrayResult(::System::Type* type, ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> allAssets);

  /// @brief Method CreateArrayResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline TObject CreateArrayResult(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> allAssets);

  /// @brief Method CreateListResult, addr 0x3341528, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateListResult(::System::Type* type, ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> allAssets);

  /// @brief Method CreateListResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline TObject CreateListResult(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> allAssets);

  /// @brief Method ExtractKeyAndSubKey, addr 0x3341068, size 0xe4, virtual false, abstract: false, final false
  static inline bool ExtractKeyAndSubKey(::System::Object* keyObj, ByRef<::StringW> mainKey, ByRef<::StringW> subKey);

  /// @brief Method IsInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline bool IsInstance();

  /// @brief Method IsPathRemote, addr 0x334114c, size 0x60, virtual false, abstract: false, final false
  static inline bool IsPathRemote(::StringW path);

  /// @brief Method PlatformCanLoadLocallyFromUrlPath, addr 0x334126c, size 0x104, virtual false, abstract: false, final false
  static inline bool PlatformCanLoadLocallyFromUrlPath();

  /// @brief Method ShouldPathUseWebRequest, addr 0x33411f0, size 0x7c, virtual false, abstract: false, final false
  static inline bool ShouldPathUseWebRequest(::StringW path);

  /// @brief Method StripQueryParameters, addr 0x33411ac, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW StripQueryParameters(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManagerConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManagerConfig(ResourceManagerConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManagerConfig(ResourceManagerConfig const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::ResourceManagerConfig, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::ResourceManagerConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*, "UnityEngine.ResourceManagement.Util", "ResourceManagerConfig");
