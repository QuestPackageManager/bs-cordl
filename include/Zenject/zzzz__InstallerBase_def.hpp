#pragma once
// IWYU pragma private; include "Zenject/InstallerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InstallerBase)
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInstaller;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class InstallerBase;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InstallerBase);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InstallerBase
class CORDL_TYPE InstallerBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Convert operator to "::Zenject::IInstaller"
  constexpr operator ::Zenject::IInstaller*() noexcept;

  /// @brief Method InstallBindings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Zenject::InstallerBase* New_ctor();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6c404fc, size 0x278, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenFieldSetter0, addr 0x6c403d8, size 0x124, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method .ctor, addr 0x6c4027c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Container, addr 0x6c403c8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_IsEnabled, addr 0x6c403d0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsEnabled();

  /// @brief Convert to "::Zenject::IInstaller"
  constexpr ::Zenject::IInstaller* i___Zenject__IInstaller() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstallerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstallerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstallerBase(InstallerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstallerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstallerBase(InstallerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14460 };

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InstallerBase, ____container) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InstallerBase, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InstallerBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstallerBase*, "Zenject", "InstallerBase");
