#pragma once
// IWYU pragma private; include "Zenject/ActionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ActionInstaller)
namespace System {
template <typename T> class Action_1;
}
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
class ActionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ActionInstaller);
// Type: Zenject::ActionInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ActionInstaller*
class CORDL_TYPE ActionInstaller : public ::Zenject::Installer_1<::Zenject::ActionInstaller*> {
public:
  // Declarations
  /// @brief Field _installMethod, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__installMethod, put = __cordl_internal_set__installMethod))::System::Action_1<::Zenject::DiContainer*>* _installMethod;

  /// @brief Method InstallBindings, addr 0x36b3f8c, size 0x28, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Zenject::ActionInstaller* New_ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get__installMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get__installMethod() const;

  constexpr void __cordl_internal_set__installMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  /// @brief Method __zenCreate, addr 0x36b3fb4, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x36b4068, size 0x274, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x36a2d84, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionInstaller(ActionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionInstaller(ActionInstaller const&) = delete;

  /// @brief Field _installMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ____installMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ActionInstaller, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::ActionInstaller, ____installMethod) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ActionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ActionInstaller*, "Zenject", "ActionInstaller");
