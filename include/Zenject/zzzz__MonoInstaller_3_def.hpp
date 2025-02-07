#pragma once
// IWYU pragma private; include "Zenject/MonoInstaller_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoInstaller_3)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TDerived> class MonoInstaller_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoInstaller_3);
// Dependencies Zenject.MonoInstallerBase
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TDerived>
// Is value type: false
// CS Name: Zenject.MonoInstaller`3<TParam1,TParam2,TDerived>
class CORDL_TYPE MonoInstaller_3 : public ::Zenject::MonoInstallerBase {
public:
  // Declarations
  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2);

  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, TParam1 p1, TParam2 p2);

  static inline ::Zenject::MonoInstaller_3<TParam1, TParam2, TDerived>* New_ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstaller_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstaller_3(MonoInstaller_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstaller_3(MonoInstaller_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12482 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoInstaller_3, "Zenject", "MonoInstaller`3");
