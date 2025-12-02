#pragma once
// IWYU pragma private; include "GlobalNamespace/TelemetryModelInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(TelemetryModelInstaller)
// Forward declare root types
namespace GlobalNamespace {
class TelemetryModelInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TelemetryModelInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: TelemetryModelInstaller
class CORDL_TYPE TelemetryModelInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x364c3d0, size 0x74, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::TelemetryModelInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x364c444, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetryModelInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetryModelInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetryModelInstaller(TelemetryModelInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetryModelInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetryModelInstaller(TelemetryModelInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21065 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TelemetryModelInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TelemetryModelInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TelemetryModelInstaller*, "", "TelemetryModelInstaller");
