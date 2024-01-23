#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstallerBase_def.hpp"
CORDL_MODULE_EXPORT(Installer_6)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived> class Installer_6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Installer_6);
// Type: Zenject::Installer`6
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11137))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11136))
// CS Name: ::Zenject::Installer`6<TParam1,TParam2,TParam3,TParam4,TParam5,TDerived>*
class CORDL_TYPE Installer_6 : public ::Zenject::InstallerBase {
public:
  // Declarations
  /// @brief Method Install, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Install(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5);

  static inline ::Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "Installer_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Installer_6(Installer_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Installer_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Installer_6(Installer_6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Installer_6();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Installer_6, "Zenject", "Installer`6");
