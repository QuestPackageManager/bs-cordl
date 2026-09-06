#pragma once
// IWYU pragma private; include "Zenject/ScriptableObjectInstallerUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstallerUtil)
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstallerUtil;
}
// Write type traits
MARK_REF_T(::Zenject::ScriptableObjectInstallerUtil*);
DEFINE_IL2CPP_CLASS(::Zenject::ScriptableObjectInstallerUtil*, "Zenject", "ScriptableObjectInstallerUtil");
// Dependencies System.Object, Zenject.ScriptableObjectInstallerBase
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ScriptableObjectInstallerUtil
class CORDL_TYPE ScriptableObjectInstallerUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller>
    requires(::cordl_internals::type_constraint<TInstaller, ::Zenject::ScriptableObjectInstallerBase*>)
  static inline TInstaller CreateInstaller(::StringW resourcePath, ::Zenject::DiContainer* container);

  /// @brief Method GetDefaultResourcePath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller>
    requires(::cordl_internals::type_constraint<TInstaller, ::Zenject::ScriptableObjectInstallerBase*>)
  static inline ::StringW GetDefaultResourcePath();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectInstallerUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerUtil", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectInstallerUtil(ScriptableObjectInstallerUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerUtil", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectInstallerUtil(ScriptableObjectInstallerUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14507 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::ScriptableObjectInstallerUtil) == 0x10, "Size mismatch!");

} // namespace Zenject
