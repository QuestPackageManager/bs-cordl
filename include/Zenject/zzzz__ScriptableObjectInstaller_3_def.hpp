#pragma once
// IWYU pragma private; include "Zenject/ScriptableObjectInstaller_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstaller_3)
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TDerived> class ScriptableObjectInstaller_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ScriptableObjectInstaller_3);
// Dependencies Zenject.ScriptableObjectInstallerBase
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TDerived>
// Is value type: false
// CS Name: Zenject.ScriptableObjectInstaller`3<TParam1,TParam2,TDerived>
class CORDL_TYPE ScriptableObjectInstaller_3 : public ::Zenject::ScriptableObjectInstallerBase {
public:
  // Declarations
  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2);

  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, TParam1 p1, TParam2 p2);

  static inline ::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>* New_ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectInstaller_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectInstaller_3(ScriptableObjectInstaller_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectInstaller_3(ScriptableObjectInstaller_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ScriptableObjectInstaller_3, "Zenject", "ScriptableObjectInstaller`3");
