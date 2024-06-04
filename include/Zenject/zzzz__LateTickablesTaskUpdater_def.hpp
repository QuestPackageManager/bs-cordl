#pragma once
// IWYU pragma private; include "Zenject/LateTickablesTaskUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Zenject::LateTickablesTaskUpdater
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::LateTickablesTaskUpdater*
class CORDL_TYPE LateTickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::ILateTickable*> {
public:
  // Declarations
  static inline ::Zenject::LateTickablesTaskUpdater* New_ctor();

  /// @brief Method UpdateItem, addr 0x3699514, size 0x9c, virtual true, abstract: false, final false
  inline void UpdateItem(::Zenject::ILateTickable* task);

  /// @brief Method __zenCreate, addr 0x36995f8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3699650, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x36995b0, size 0x48, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::LateTickablesTaskUpdater, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::LateTickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::LateTickablesTaskUpdater*, "Zenject", "LateTickablesTaskUpdater");
