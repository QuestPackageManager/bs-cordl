#pragma once
// IWYU pragma private; include "Zenject/MonoInstaller_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoInstaller_1)
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
template <typename TDerived> class MonoInstaller_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoInstaller_1);
// Dependencies Zenject.MonoInstaller
namespace Zenject {
// cpp template
template <typename TDerived>
// Is value type: false
// CS Name: Zenject.MonoInstaller`1<TDerived>
class CORDL_TYPE MonoInstaller_1 : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container);

  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::Zenject::DiContainer* container, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs);

  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container);

  /// @brief Method InstallFromResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs);

  static inline ::Zenject::MonoInstaller_1<TDerived>* New_ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstaller_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstaller_1(MonoInstaller_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstaller_1(MonoInstaller_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14466 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoInstaller_1, "Zenject", "MonoInstaller`1");
