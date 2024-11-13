#pragma once
// IWYU pragma private; include "GlobalNamespace/FileStorageInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(FileStorageInstaller)
// Forward declare root types
namespace GlobalNamespace {
class FileStorageInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileStorageInstaller);
// Type: ::FileStorageInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileStorageInstaller*
class CORDL_TYPE FileStorageInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x26e1e74, size 0x5c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::FileStorageInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x26e1ed0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileStorageInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileStorageInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileStorageInstaller(FileStorageInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileStorageInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileStorageInstaller(FileStorageInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileStorageInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileStorageInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileStorageInstaller*, "", "FileStorageInstaller");
