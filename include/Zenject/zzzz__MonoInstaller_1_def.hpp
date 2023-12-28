#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoInstaller_1)
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TDerived> class MonoInstaller_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoInstaller_1);
// Type: Zenject::MonoInstaller`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11139))
// CS Name: ::Zenject::MonoInstaller`1<TDerived>*
class CORDL_TYPE MonoInstaller_1 : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container);

  /// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container);

  /// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs);

  /// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs);

  static inline ::Zenject::MonoInstaller_1<TDerived>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstaller_1(MonoInstaller_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstaller_1(MonoInstaller_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstaller_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoInstaller_1, "Zenject", "MonoInstaller`1");
