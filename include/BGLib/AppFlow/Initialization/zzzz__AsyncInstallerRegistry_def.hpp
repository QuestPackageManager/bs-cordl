#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncInstallerRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncInstallerRegistry)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class MonoInstaller;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class AsyncInstallerRegistry;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry);
// Dependencies BGLib.AppFlow.Initialization.AsyncInstaller::IInstallerRegistry, System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncInstallerRegistry
class CORDL_TYPE AsyncInstallerRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field monoInstallers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_monoInstallers, put = __cordl_internal_set_monoInstallers)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* monoInstallers;

  /// @brief Field scriptableObjectInstallers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scriptableObjectInstallers,
                      put = __cordl_internal_set_scriptableObjectInstallers)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* scriptableObjectInstallers;

  /// @brief Convert operator to "::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry"
  constexpr operator ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*() noexcept;

  /// @brief Method AddMonoInstaller, addr 0x229afd0, size 0xa4, virtual true, abstract: false, final true
  inline void AddMonoInstaller(::Zenject::MonoInstaller* newMonoInstaller);

  /// @brief Method AddScriptableObjectInstaller, addr 0x229b074, size 0xa4, virtual true, abstract: false, final true
  inline void AddScriptableObjectInstaller(::Zenject::ScriptableObjectInstaller* newScriptableObjectInstaller);

  static inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* const& __cordl_internal_get_monoInstallers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& __cordl_internal_get_monoInstallers();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* const& __cordl_internal_get_scriptableObjectInstallers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*& __cordl_internal_get_scriptableObjectInstallers();

  constexpr void __cordl_internal_set_monoInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value);

  constexpr void __cordl_internal_set_scriptableObjectInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* value);

  /// @brief Method .ctor, addr 0x229b118, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry"
  constexpr ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* i___BGLib__AppFlow__Initialization__AsyncInstaller_IInstallerRegistry() noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17643 };

  /// @brief Field monoInstallers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* ___monoInstallers;

  /// @brief Field scriptableObjectInstallers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* ___scriptableObjectInstallers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry, ___monoInstallers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry, ___scriptableObjectInstallers) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry, 0x20>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, "BGLib.AppFlow.Initialization", "AsyncInstallerRegistry");
