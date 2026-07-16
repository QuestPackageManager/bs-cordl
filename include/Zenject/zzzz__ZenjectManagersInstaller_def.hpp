#pragma once
// IWYU pragma private; include "Zenject/ZenjectManagersInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ZenjectManagersInstaller)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ZenjectManagersInstaller;
}
// Write type traits
MARK_REF_T(::Zenject::ZenjectManagersInstaller*);
DEFINE_IL2CPP_CLASS(::Zenject::ZenjectManagersInstaller*, "Zenject", "ZenjectManagersInstaller");
// Dependencies Zenject.Installer`1<TDerived>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenjectManagersInstaller
class CORDL_TYPE ZenjectManagersInstaller : public ::Zenject::Installer_1<::Zenject::ZenjectManagersInstaller*> {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x6e7360c, size 0x1b0, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Zenject::ZenjectManagersInstaller* New_ctor();

  /// @brief Method __zenCreate, addr 0x6e737f8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e73870, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e737bc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectManagersInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectManagersInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectManagersInstaller(ZenjectManagersInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectManagersInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectManagersInstaller(ZenjectManagersInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14484 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::ZenjectManagersInstaller) == 0x18, "Size mismatch!");

} // namespace Zenject
