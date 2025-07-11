#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/JsonAssetProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__TextDataProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonAssetProvider)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class JsonAssetProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider);
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.JsonAssetProvider
class CORDL_TYPE JsonAssetProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider {
public:
  // Declarations
  /// @brief Method Convert, addr 0x479e9b4, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Type* type, ::StringW text);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider* New_ctor();

  /// @brief Method .ctor, addr 0x479e9c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonAssetProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonAssetProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonAssetProvider(JsonAssetProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonAssetProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonAssetProvider(JsonAssetProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "JsonAssetProvider");
