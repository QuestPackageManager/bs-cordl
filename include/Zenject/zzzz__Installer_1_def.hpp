#pragma once
// IWYU pragma private; include "Zenject/Installer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstallerBase_def.hpp"
CORDL_MODULE_EXPORT(Installer_1)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TDerived> class Installer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Installer_1);
// Type: Zenject::Installer`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TDerived>
// Is value type: false
// CS Name: ::Zenject::Installer`1<TDerived>*
class CORDL_TYPE Installer_1 : public ::Zenject::InstallerBase {
public:
  // Declarations
  /// @brief Method Install, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Install(::Zenject::DiContainer* container);

  static inline ::Zenject::Installer_1<TDerived>* New_ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Installer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Installer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Installer_1(Installer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Installer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Installer_1(Installer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Installer_1, "Zenject", "Installer`1");
