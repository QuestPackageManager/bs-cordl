#pragma once
// IWYU pragma private; include "Zenject\MonoInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
CORDL_MODULE_EXPORT(MonoInstaller)
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class MonoInstaller;
}
// Write type traits
MARK_REF_T(::Zenject::MonoInstaller*);
DEFINE_IL2CPP_CLASS(::Zenject::MonoInstaller*, "Zenject", "MonoInstaller");
// Dependencies Zenject.MonoInstallerBase
namespace Zenject {
// Is value type: false
// CS Name: Zenject.MonoInstaller
class CORDL_TYPE MonoInstaller : public ::Zenject::MonoInstallerBase {
public:
  // Declarations
  static inline ::Zenject::MonoInstaller* New_ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e75e80, size 0x148, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e75e78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstaller(MonoInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstaller(MonoInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::MonoInstaller) == 0x28, "Size mismatch!");

} // namespace Zenject
