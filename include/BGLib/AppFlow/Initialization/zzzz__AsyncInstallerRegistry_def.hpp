#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncInstallerRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncInstallerRegistry)
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class IInstaller;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class AsyncInstallerRegistry;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, "BGLib.AppFlow.Initialization", "AsyncInstallerRegistry");
// Dependencies System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncInstallerRegistry
class CORDL_TYPE AsyncInstallerRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field installers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_installers, put = __cordl_internal_set_installers)) ::System::Collections::Generic::List_1<::Zenject::IInstaller*>* installers;

  /// @brief Convert operator to "::BGLib::AppFlow::Initialization::IInstallerRegistry"
  constexpr operator ::BGLib::AppFlow::Initialization::IInstallerRegistry*() noexcept;

  /// @brief Method AddInstaller, addr 0x3306d80, size 0xb4, virtual true, abstract: false, final true
  inline void AddInstaller(::Zenject::IInstaller* newInstaller);

  static inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Zenject::IInstaller*>* const& __cordl_internal_get_installers() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IInstaller*>*& __cordl_internal_get_installers();

  constexpr void __cordl_internal_set_installers(::System::Collections::Generic::List_1<::Zenject::IInstaller*>* value);

  /// @brief Method .ctor, addr 0x3306e34, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGLib::AppFlow::Initialization::IInstallerRegistry"
  constexpr ::BGLib::AppFlow::Initialization::IInstallerRegistry* i___BGLib__AppFlow__Initialization__IInstallerRegistry() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncInstallerRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstallerRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncInstallerRegistry(AsyncInstallerRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstallerRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncInstallerRegistry(AsyncInstallerRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21501 };

  /// @brief Field installers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IInstaller*>* ___installers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry, ___installers) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry) == 0x18, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
