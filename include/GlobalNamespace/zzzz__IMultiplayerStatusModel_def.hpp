#pragma once
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
// Type: ::IMultiplayerStatusModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4467))
// CS Name: ::IMultiplayerStatusModel*
class CORDL_TYPE IMultiplayerStatusModel {
public:
  // Declarations
  /// @brief Method GetMultiplayerStatusAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerStatusModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMultiplayerStatusModel(IMultiplayerStatusModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerStatusModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerStatusModel(IMultiplayerStatusModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerStatusModel*, "", "IMultiplayerStatusModel");
