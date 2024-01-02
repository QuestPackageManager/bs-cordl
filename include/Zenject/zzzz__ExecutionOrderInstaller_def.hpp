#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ExecutionOrderInstaller)
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ExecutionOrderInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ExecutionOrderInstaller);
// Type: Zenject::ExecutionOrderInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2494)), TypeDefinitionIndex(TypeDefinitionIndex(11132)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11132), inst:
// 3906 }), TypeDefinitionIndex(TypeDefinitionIndex(3843)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst: 1695 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(11351)) CS Name: ::Zenject::ExecutionOrderInstaller*
class CORDL_TYPE ExecutionOrderInstaller : public ::Zenject::Installer_2<::System::Collections::Generic::List_1<::System::Type*>*, ::Zenject::ExecutionOrderInstaller*> {
public:
  // Declarations
  /// @brief Field _typeOrder, offset 0x18, size 0x8
  __declspec(property(get = __get__typeOrder, put = __set__typeOrder))::System::Collections::Generic::List_1<::System::Type*>* _typeOrder;

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __get__typeOrder();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __get__typeOrder() const;

  constexpr void __set__typeOrder(::System::Collections::Generic::List_1<::System::Type*>* value);

  static inline ::Zenject::ExecutionOrderInstaller* New_ctor(::System::Collections::Generic::List_1<::System::Type*>* typeOrder);

  /// @brief Method .ctor, addr 0x2f1e0b0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Type*>* typeOrder);

  /// @brief Method InstallBindings, addr 0x2f1e10c, size 0x164, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method __zenCreate, addr 0x2f1e270, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f1e334, size 0x274, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ExecutionOrderInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecutionOrderInstaller(ExecutionOrderInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecutionOrderInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecutionOrderInstaller(ExecutionOrderInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionOrderInstaller();

public:
  /// @brief Field _typeOrder, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ____typeOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ExecutionOrderInstaller, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::ExecutionOrderInstaller, ____typeOrder) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ExecutionOrderInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ExecutionOrderInstaller*, "Zenject", "ExecutionOrderInstaller");
