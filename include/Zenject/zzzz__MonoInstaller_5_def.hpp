#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoInstaller_5)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TDerived> class MonoInstaller_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoInstaller_5);
// Type: Zenject::MonoInstaller`5
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TDerived>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10288))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10285))
// CS Name: ::Zenject::MonoInstaller`5<TParam1,TParam2,TParam3,TParam4,TDerived>*
class CORDL_TYPE MonoInstaller_5 : public ::Zenject::MonoInstallerBase {
public:
  // Declarations
  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4);

  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4);

  static inline ::Zenject::MonoInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstaller_5(MonoInstaller_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstaller_5(MonoInstaller_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstaller_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoInstaller_5, "Zenject", "MonoInstaller`5");
