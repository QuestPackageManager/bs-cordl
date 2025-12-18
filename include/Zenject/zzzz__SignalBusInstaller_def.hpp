#pragma once
// IWYU pragma private; include "Zenject/SignalBusInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_1_def.hpp"
CORDL_MODULE_EXPORT(SignalBusInstaller)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SignalBusInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalBusInstaller);
// Dependencies Zenject.Installer`1<TDerived>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalBusInstaller
class CORDL_TYPE SignalBusInstaller : public ::Zenject::Installer_1<::Zenject::SignalBusInstaller*> {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x6c7dab4, size 0x1b8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Zenject::SignalBusInstaller* New_ctor();

  /// @brief Method __zenCreate, addr 0x6c7dcc4, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6c7dd3c, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6c7dc88, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalBusInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalBusInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalBusInstaller(SignalBusInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalBusInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalBusInstaller(SignalBusInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13993 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalBusInstaller, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalBusInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalBusInstaller*, "Zenject", "SignalBusInstaller");
