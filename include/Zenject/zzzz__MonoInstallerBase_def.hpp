#pragma once
// IWYU pragma private; include "Zenject/MonoInstallerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__IInstaller_def.hpp"
CORDL_MODULE_EXPORT(MonoInstallerBase)
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
class MonoInstallerBase;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MonoInstallerBase);
// Dependencies UnityEngine.MonoBehaviour, Zenject.IInstaller
namespace Zenject {
// Is value type: false
// CS Name: Zenject.MonoInstallerBase
class CORDL_TYPE MonoInstallerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Container, put = set_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  /// @brief Field <Container>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Container_k__BackingField, put = __cordl_internal_set__Container_k__BackingField)) ::Zenject::DiContainer* _Container_k__BackingField;

  /// @brief Convert operator to "::Zenject::IInstaller"
  constexpr operator ::Zenject::IInstaller*() noexcept;

  /// @brief Method InstallBindings, addr 0x4b2c534, size 0x38, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Zenject::MonoInstallerBase* New_ctor();

  /// @brief Method Start, addr 0x4b2c530, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__Container_k__BackingField() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__Container_k__BackingField();

  constexpr void __cordl_internal_set__Container_k__BackingField(::Zenject::DiContainer* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b2c63c, size 0x2a8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenPropertySetter0, addr 0x4b2c56c, size 0xd0, virtual false, abstract: false, final false
  static inline void __zenPropertySetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method .ctor, addr 0x4b2c3a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Container, addr 0x4b2c518, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_IsEnabled, addr 0x4b2c528, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsEnabled();

  /// @brief Convert to "::Zenject::IInstaller"
  constexpr ::Zenject::IInstaller* i___Zenject__IInstaller() noexcept;

  /// @brief Method set_Container, addr 0x4b2c520, size 0x8, virtual false, abstract: false, final false
  inline void set_Container(::Zenject::DiContainer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstallerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoInstallerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstallerBase(MonoInstallerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstallerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstallerBase(MonoInstallerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12488 };

  /// @brief Field <Container>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____Container_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::MonoInstallerBase, ____Container_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::MonoInstallerBase, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::MonoInstallerBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoInstallerBase*, "Zenject", "MonoInstallerBase");
