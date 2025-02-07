#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerStatusModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMultiplayerStatusModel)
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMultiplayerStatusModel);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IMultiplayerStatusModel
class CORDL_TYPE IMultiplayerStatusModel {
public:
  // Declarations
  /// @brief Method GetMultiplayerStatusAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerStatusModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerStatusModel(IMultiplayerStatusModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13054 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerStatusModel*, "", "IMultiplayerStatusModel");
