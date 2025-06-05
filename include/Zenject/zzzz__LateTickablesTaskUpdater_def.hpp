#pragma once
// IWYU pragma private; include "Zenject/LateTickablesTaskUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
CORDL_MODULE_EXPORT(LateTickablesTaskUpdater)
namespace System {
class Object;
}
namespace Zenject {
class ILateTickable;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class LateTickablesTaskUpdater;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::LateTickablesTaskUpdater);
// Dependencies Zenject.TaskUpdater`1<TTask>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.LateTickablesTaskUpdater
class CORDL_TYPE LateTickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::ILateTickable*> {
public:
  // Declarations
  static inline ::Zenject::LateTickablesTaskUpdater* New_ctor();

  /// @brief Method UpdateItem, addr 0x4b4f12c, size 0x9c, virtual true, abstract: false, final false
  inline void UpdateItem(::Zenject::ILateTickable* task);

  /// @brief Method __zenCreate, addr 0x4b4f210, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4f260, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4f1c8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LateTickablesTaskUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LateTickablesTaskUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LateTickablesTaskUpdater(LateTickablesTaskUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LateTickablesTaskUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LateTickablesTaskUpdater(LateTickablesTaskUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::LateTickablesTaskUpdater, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::LateTickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::LateTickablesTaskUpdater*, "Zenject", "LateTickablesTaskUpdater");
