#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncInstallerRegistry)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace Zenject {
class MonoInstaller;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class AsyncInstallerRegistry;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry);
// Type: BGLib.AppFlow.Initialization::AsyncInstallerRegistry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15423))
// CS Name: ::BGLib.AppFlow.Initialization::AsyncInstallerRegistry*
class CORDL_TYPE AsyncInstallerRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field monoInstallers, offset 0x10, size 0x8
  __declspec(property(get = __get_monoInstallers, put = __set_monoInstallers))::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* monoInstallers;

  /// @brief Field scriptableObjectInstallers, offset 0x18, size 0x8
  __declspec(property(get = __get_scriptableObjectInstallers,
                      put = __set_scriptableObjectInstallers))::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* scriptableObjectInstallers;

  /// @brief Convert operator to "::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry"
  constexpr operator ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& __get_monoInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*> const& __get_monoInstallers() const;

  constexpr void __set_monoInstallers(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*& __get_scriptableObjectInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*> const& __get_scriptableObjectInstallers() const;

  constexpr void __set_scriptableObjectInstallers(::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* value);

  /// @brief Method AddMonoInstaller addr 0xe23c34 size 0xa8 virtual true final true
  inline void AddMonoInstaller(::Zenject::MonoInstaller* newMonoInstaller);

  /// @brief Method AddScriptableObjectInstaller addr 0xe23cdc size 0xa8 virtual true final true
  inline void AddScriptableObjectInstaller(::Zenject::ScriptableObjectInstaller* newScriptableObjectInstaller);

  static inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* New_ctor();

  /// @brief Method .ctor addr 0xe23d84 size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstallerRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncInstallerRegistry(AsyncInstallerRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstallerRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncInstallerRegistry(AsyncInstallerRegistry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncInstallerRegistry();

public:
  /// @brief Field monoInstallers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* ___monoInstallers;

  /// @brief Field scriptableObjectInstallers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* ___scriptableObjectInstallers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry, 0x20>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, "BGLib.AppFlow.Initialization", "AsyncInstallerRegistry");
