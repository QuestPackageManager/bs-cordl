#pragma once
// IWYU pragma private; include "Zenject/FixedTickablesTaskUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
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
// Dependencies Zenject.TaskUpdater`1<TTask>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FixedTickablesTaskUpdater
class CORDL_TYPE FixedTickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::IFixedTickable*> {
public:
  // Declarations
  static inline ::Zenject::FixedTickablesTaskUpdater* New_ctor();

  /// @brief Method UpdateItem, addr 0x4b4f490, size 0x9c, virtual true, abstract: false, final false
  inline void UpdateItem(::Zenject::IFixedTickable* task);

  /// @brief Method __zenCreate, addr 0x4b4f574, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4f5c4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4f52c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedTickablesTaskUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedTickablesTaskUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedTickablesTaskUpdater(FixedTickablesTaskUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedTickablesTaskUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedTickablesTaskUpdater(FixedTickablesTaskUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FixedTickablesTaskUpdater, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FixedTickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FixedTickablesTaskUpdater*, "Zenject", "FixedTickablesTaskUpdater");
