#pragma once
// IWYU pragma private; include "Zenject/ScriptableObjectInstaller_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstaller_1)
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
template <typename TDerived> class ScriptableObjectInstaller_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ScriptableObjectInstaller_1);
// Dependencies Zenject.ScriptableObjectInstaller
namespace Zenject {
// cpp template
template <typename TDerived>
// Is value type: false
// CS Name: Zenject.ScriptableObjectInstaller`1<TDerived>
class CORDL_TYPE ScriptableObjectInstaller_1 : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container);

  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container);

  static inline ::Zenject::ScriptableObjectInstaller_1<TDerived>* New_ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectInstaller_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectInstaller_1(ScriptableObjectInstaller_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectInstaller_1(ScriptableObjectInstaller_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12488 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ScriptableObjectInstaller_1, "Zenject", "ScriptableObjectInstaller`1");
