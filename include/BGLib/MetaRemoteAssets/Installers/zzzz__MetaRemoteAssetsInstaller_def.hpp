#pragma once
// IWYU pragma private; include "BGLib\MetaRemoteAssets\Installers\MetaRemoteAssetsInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaRemoteAssetsInstaller)
// Forward declare root types
namespace BGLib::MetaRemoteAssets::Installers {
class MetaRemoteAssetsInstaller;
}
// Write type traits
MARK_REF_T(::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*);
DEFINE_IL2CPP_CLASS(::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*, "BGLib.MetaRemoteAssets.Installers", "MetaRemoteAssetsInstaller");
// Dependencies Zenject.Installer`1<TDerived>
namespace BGLib::MetaRemoteAssets::Installers {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.Installers.MetaRemoteAssetsInstaller
class CORDL_TYPE MetaRemoteAssetsInstaller : public ::Zenject::Installer_1<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*> {
public:
  // Declarations
  /// @brief Field _useMock, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__useMock, put = __cordl_internal_set__useMock)) bool _useMock;

  /// @brief Method GetPlatform, addr 0x331b5b4, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetPlatform();

  /// @brief Method InstallBindings, addr 0x331b404, size 0x1b0, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method InstallRemoteCatalogLoader, addr 0x331b5f8, size 0xa0, virtual false, abstract: false, final false
  inline void InstallRemoteCatalogLoader();

  static inline ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller* New_ctor(bool useMock);

  constexpr bool const& __cordl_internal_get__useMock() const;

  constexpr bool& __cordl_internal_get__useMock();

  constexpr void __cordl_internal_set__useMock(bool value);

  /// @brief Method .ctor, addr 0x331b3b0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(bool useMock);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsInstaller(MetaRemoteAssetsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsInstaller(MetaRemoteAssetsInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22500 };

  /// @brief Field _useMock, offset: 0x18, size: 0x1, def value: None
  bool ____useMock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller, ____useMock) == 0x18, "Offset mismatch!");

static_assert(sizeof(::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller) == 0x20, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets::Installers
