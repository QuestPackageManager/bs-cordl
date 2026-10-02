#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaApiUserAgentProviderInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MetaApiUserAgentProviderInstaller)
// Forward declare root types
namespace GlobalNamespace {
class MetaApiUserAgentProviderInstaller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaApiUserAgentProviderInstaller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaApiUserAgentProviderInstaller*, "", "MetaApiUserAgentProviderInstaller");
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaApiUserAgentProviderInstaller
class CORDL_TYPE MetaApiUserAgentProviderInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x3a00ac0, size 0x78, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MetaApiUserAgentProviderInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x3a00b38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaApiUserAgentProviderInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentProviderInstaller", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaApiUserAgentProviderInstaller(MetaApiUserAgentProviderInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentProviderInstaller", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaApiUserAgentProviderInstaller(MetaApiUserAgentProviderInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MetaApiUserAgentProviderInstaller) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
