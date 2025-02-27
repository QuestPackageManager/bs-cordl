#pragma once
// IWYU pragma private; include "Zenject/IInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInstaller)
// Forward declare root types
namespace Zenject {
class IInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IInstaller);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IInstaller
class CORDL_TYPE IInstaller {
public:
  // Declarations
  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  /// @brief Method InstallBindings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method get_IsEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsEnabled();

  // Ctor Parameters [CppParam { name: "", ty: "IInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInstaller(IInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IInstaller*, "Zenject", "IInstaller");
