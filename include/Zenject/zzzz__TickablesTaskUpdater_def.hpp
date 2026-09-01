#pragma once
// IWYU pragma private; include "Zenject\TickablesTaskUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::Zenject::TickablesTaskUpdater*);
DEFINE_IL2CPP_CLASS(::Zenject::TickablesTaskUpdater*, "Zenject", "TickablesTaskUpdater");
// Dependencies Zenject.TaskUpdater`1<TTask>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TickablesTaskUpdater
class CORDL_TYPE TickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::ITickable*> {
public:
  // Declarations
  static inline ::Zenject::TickablesTaskUpdater* New_ctor();

  /// @brief Method UpdateItem, addr 0x6e97630, size 0xa0, virtual true, abstract: false, final false
  inline void UpdateItem(::Zenject::ITickable* task);

  /// @brief Method __zenCreate, addr 0x6e9771c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e97770, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e976d0, size 0x4c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14692 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::TickablesTaskUpdater) == 0x20, "Size mismatch!");

} // namespace Zenject
