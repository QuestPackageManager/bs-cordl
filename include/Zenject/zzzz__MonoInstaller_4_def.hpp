#pragma once
// IWYU pragma private; include "Zenject\MonoInstaller_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MonoInstaller_4)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived> class MonoInstaller_4;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Zenject::MonoInstaller_4);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Zenject::MonoInstaller_4, "Zenject", "MonoInstaller`4");
// Dependencies Zenject.MonoInstallerBase
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
// Is value type: false
// CS Name: Zenject.MonoInstaller`4<TParam1,TParam2,TParam3,TDerived>
class CORDL_TYPE MonoInstaller_4 : public ::Zenject::MonoInstallerBase {
public:
  // Declarations
  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3);

  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3);

  static inline ::Zenject::MonoInstaller_4<TParam1, TParam2, TParam3, TDerived>* New_ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstaller_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstaller_4(MonoInstaller_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstaller_4(MonoInstaller_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14496 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
