#pragma once
// IWYU pragma private; include "Zenject/TickablesTaskUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
CORDL_MODULE_EXPORT(TickablesTaskUpdater)
namespace System {
class Object;
}
namespace Zenject {
class ITickable;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class TickablesTaskUpdater;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::TickablesTaskUpdater);
// Dependencies Zenject.TaskUpdater`1<TTask>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TickablesTaskUpdater
class CORDL_TYPE TickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::ITickable*> {
public:
  // Declarations
  static inline ::Zenject::TickablesTaskUpdater* New_ctor();

  /// @brief Method UpdateItem, addr 0x4b5b264, size 0x9c, virtual true, abstract: false, final false
  inline void UpdateItem(::Zenject::ITickable* task);

  /// @brief Method __zenCreate, addr 0x4b5b348, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5b398, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5b300, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TickablesTaskUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TickablesTaskUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TickablesTaskUpdater(TickablesTaskUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TickablesTaskUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TickablesTaskUpdater(TickablesTaskUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::TickablesTaskUpdater, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::TickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickablesTaskUpdater*, "Zenject", "TickablesTaskUpdater");
