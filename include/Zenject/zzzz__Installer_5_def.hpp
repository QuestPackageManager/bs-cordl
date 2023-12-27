#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstallerBase_def.hpp"
CORDL_MODULE_EXPORT(Installer_5)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TDerived> class Installer_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Installer_5);
// Type: Zenject::Installer`5
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11135))
// CS Name: ::Zenject::Installer`5<TParam1,TParam2,TParam3,TParam4,TDerived>*
class CORDL_TYPE Installer_5 : public ::Zenject::InstallerBase {
public:
  // Declarations
  /// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void Install(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4);

  static inline ::Zenject::Installer_5<TParam1, TParam2, TParam3, TParam4, TDerived>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "Installer_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Installer_5(Installer_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Installer_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Installer_5(Installer_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Installer_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Installer_5, "Zenject", "Installer`5");
