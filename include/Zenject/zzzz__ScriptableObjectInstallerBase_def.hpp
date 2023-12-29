#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstallerBase)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IInstaller;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstallerBase;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ScriptableObjectInstallerBase);
// Type: Zenject::ScriptableObjectInstallerBase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11082))
// CS Name: ::Zenject::ScriptableObjectInstallerBase*
class CORDL_TYPE ScriptableObjectInstallerBase : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  __declspec(property(get = Zenject_IInstaller_get_IsEnabled)) bool Zenject_IInstaller_IsEnabled;

  /// @brief Convert operator to "::Zenject::IInstaller"
  constexpr operator ::Zenject::IInstaller*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  /// @brief Method get_Container addr 0x2d8d984 size 0x8 virtual false final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method Zenject.IInstaller.get_IsEnabled addr 0x2d8d98c size 0x8 virtual true final true
  inline bool Zenject_IInstaller_get_IsEnabled();

  /// @brief Method InstallBindings addr 0x2d8d994 size 0x40 virtual true final false
  inline void InstallBindings();

  static inline ::Zenject::ScriptableObjectInstallerBase* New_ctor();

  /// @brief Method .ctor addr 0x2d8d760 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x2d8d9d4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenFieldSetter0 addr 0x2d8da30 size 0x134 virtual false final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d8db64 size 0x2f8 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectInstallerBase(ScriptableObjectInstallerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectInstallerBase(ScriptableObjectInstallerBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectInstallerBase();

public:
  /// @brief Field _container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ScriptableObjectInstallerBase, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstallerBase, ____container) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ScriptableObjectInstallerBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectInstallerBase*, "Zenject", "ScriptableObjectInstallerBase");
