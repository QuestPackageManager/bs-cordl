#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFixedTickable_def.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FixedTickablesTaskUpdater)
namespace System {
class Object;
}
namespace Zenject {
class IFixedTickable;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class FixedTickablesTaskUpdater;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FixedTickablesTaskUpdater);
// Type: Zenject::FixedTickablesTaskUpdater
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11337), inst: 4196 }), TypeDefinitionIndex(TypeDefinitionIndex(15733)),
// TypeDefinitionIndex(TypeDefinitionIndex(11337))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11340)) CS Name: ::Zenject::FixedTickablesTaskUpdater*
class CORDL_TYPE FixedTickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::IFixedTickable*> {
public:
  // Declarations
  /// @brief Method UpdateItem, addr 0x2f1941c, size 0x9c, virtual true, abstract: false, final false
  inline void UpdateItem(::Zenject::IFixedTickable* task);

  static inline ::Zenject::FixedTickablesTaskUpdater* New_ctor();

  /// @brief Method .ctor, addr 0x2f194b8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreate, addr 0x2f19500, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f19558, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "FixedTickablesTaskUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedTickablesTaskUpdater(FixedTickablesTaskUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedTickablesTaskUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedTickablesTaskUpdater(FixedTickablesTaskUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedTickablesTaskUpdater();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FixedTickablesTaskUpdater, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FixedTickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FixedTickablesTaskUpdater*, "Zenject", "FixedTickablesTaskUpdater");
