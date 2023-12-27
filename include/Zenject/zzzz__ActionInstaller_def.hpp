#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ActionInstaller)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class ActionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ActionInstaller);
// Type: Zenject::ActionInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11131), inst: 3902 }), TypeDefinitionIndex(TypeDefinitionIndex(11131))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11346))
// CS Name: ::Zenject::ActionInstaller*
class CORDL_TYPE ActionInstaller : public ::Zenject::Installer_1<::Zenject::ActionInstaller*> {
public:
  // Declarations
  /// @brief Field _installMethod, offset 0x18, size 0x8
  __declspec(property(get = __get__installMethod, put = __set__installMethod))::System::Action_1<::Zenject::DiContainer*>* _installMethod;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get__installMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get__installMethod() const;

  constexpr void __set__installMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::ActionInstaller* New_ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod);

  /// @brief Method .ctor addr 0x2f0bb0c size 0x5c virtual false final false
  inline void _ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod);

  /// @brief Method InstallBindings addr 0x2f1cd14 size 0x28 virtual true final false
  inline void InstallBindings();

  /// @brief Method __zenCreate addr 0x2f1cd3c size 0xb4 virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f1cdf0 size 0x274 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ActionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionInstaller(ActionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionInstaller(ActionInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionInstaller();

public:
  /// @brief Field _installMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ____installMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ActionInstaller, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ActionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ActionInstaller*, "Zenject", "ActionInstaller");
