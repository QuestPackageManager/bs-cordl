#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstaller_5)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TDerived> class ScriptableObjectInstaller_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ScriptableObjectInstaller_5);
// Type: Zenject::ScriptableObjectInstaller`5
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11154))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11152))
// CS Name: ::Zenject::ScriptableObjectInstaller`5<TParam1,TParam2,TParam3,TParam4,TDerived>*
class CORDL_TYPE ScriptableObjectInstaller_5 : public ::Zenject::ScriptableObjectInstallerBase {
public:
  // Declarations
  /// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4);

  /// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4);

  static inline ::Zenject::ScriptableObjectInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectInstaller_5(ScriptableObjectInstaller_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectInstaller_5(ScriptableObjectInstaller_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectInstaller_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ScriptableObjectInstaller_5, "Zenject", "ScriptableObjectInstaller`5");
