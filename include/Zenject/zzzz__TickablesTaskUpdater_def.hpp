#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ITickable_def.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TickablesTaskUpdater)
namespace Zenject {
class ITickable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class TickablesTaskUpdater;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::TickablesTaskUpdater);
// Type: Zenject::TickablesTaskUpdater
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15732)), TypeDefinitionIndex(TypeDefinitionIndex(11337)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11337), inst:
// 3099 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11338)) CS Name: ::Zenject::TickablesTaskUpdater*
class CORDL_TYPE TickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::ITickable*> {
public:
  // Declarations
  /// @brief Method UpdateItem, addr 0x2f18e24, size 0x9c, virtual true, abstract: false, final false
  inline void UpdateItem(::Zenject::ITickable* task);

  static inline ::Zenject::TickablesTaskUpdater* New_ctor();

  /// @brief Method .ctor, addr 0x2f18ec0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreate, addr 0x2f18f08, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f18f60, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "TickablesTaskUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TickablesTaskUpdater(TickablesTaskUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TickablesTaskUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TickablesTaskUpdater(TickablesTaskUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TickablesTaskUpdater();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::TickablesTaskUpdater, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::TickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickablesTaskUpdater*, "Zenject", "TickablesTaskUpdater");
