#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AtlasSpriteProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AtlasSpriteProvider)
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AtlasSpriteProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider);
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider
class CORDL_TYPE AtlasSpriteProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  static inline ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider* New_ctor();

  /// @brief Method Provide, addr 0x479c10c, size 0x380, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);

  /// @brief Method .ctor, addr 0x479c48c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasSpriteProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AtlasSpriteProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AtlasSpriteProvider(AtlasSpriteProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AtlasSpriteProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AtlasSpriteProvider(AtlasSpriteProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "AtlasSpriteProvider");
