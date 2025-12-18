#pragma once
// IWYU pragma private; include "GlobalNamespace/NullableScriptableObjectInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(NullableScriptableObjectInstaller)
namespace Zenject {
class ScriptableObjectInstaller;
}
// Forward declare root types
namespace GlobalNamespace {
class NullableScriptableObjectInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NullableScriptableObjectInstaller);
// Dependencies Zenject.ScriptableObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: NullableScriptableObjectInstaller
class CORDL_TYPE NullableScriptableObjectInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _installer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__installer, put = __cordl_internal_set__installer)) ::UnityW<::Zenject::ScriptableObjectInstaller> _installer;

  /// @brief Method InstallBindings, addr 0x6c90518, size 0xa0, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::NullableScriptableObjectInstaller* New_ctor();

  constexpr ::UnityW<::Zenject::ScriptableObjectInstaller> const& __cordl_internal_get__installer() const;

  constexpr ::UnityW<::Zenject::ScriptableObjectInstaller>& __cordl_internal_get__installer();

  constexpr void __cordl_internal_set__installer(::UnityW<::Zenject::ScriptableObjectInstaller> value);

  /// @brief Method .ctor, addr 0x6c905b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableScriptableObjectInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableScriptableObjectInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableScriptableObjectInstaller(NullableScriptableObjectInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableScriptableObjectInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableScriptableObjectInstaller(NullableScriptableObjectInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23341 };

  /// @brief Field _installer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Zenject::ScriptableObjectInstaller> ____installer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NullableScriptableObjectInstaller, ____installer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullableScriptableObjectInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NullableScriptableObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullableScriptableObjectInstaller*, "", "NullableScriptableObjectInstaller");
