#pragma once
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
// Type: Zenject::InstallerBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11137))
// CS Name: ::Zenject::InstallerBase*
class CORDL_TYPE InstallerBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  /// @brief Convert operator to "::Zenject::IInstaller"
  constexpr operator ::Zenject::IInstaller*() noexcept;

  /// @brief Convert to "::Zenject::IInstaller"
  constexpr ::Zenject::IInstaller* i___Zenject__IInstaller() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  /// @brief Method get_Container, addr 0x2ef4bbc, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_IsEnabled, addr 0x2ef4bc4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsEnabled();

  /// @brief Method InstallBindings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InstallBindings();

  static inline ::Zenject::InstallerBase* New_ctor();

  /// @brief Method .ctor, addr 0x2ef4a3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenFieldSetter0, addr 0x2ef4bcc, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ef4d00, size 0x2b0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "InstallerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstallerBase(InstallerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstallerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstallerBase(InstallerBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstallerBase();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InstallerBase, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::InstallerBase, ____container) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InstallerBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstallerBase*, "Zenject", "InstallerBase");
