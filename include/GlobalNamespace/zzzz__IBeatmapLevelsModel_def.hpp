#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBeatmapLevelsModel)
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapLevelsModel);
// Type: ::IBeatmapLevelsModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IBeatmapLevelsModel*
class CORDL_TYPE IBeatmapLevelsModel {
public:
  // Declarations
  /// @brief Method GetLevelEntitlementStatusAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapLevelsModel(IBeatmapLevelsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelsModel(IBeatmapLevelsModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelsModel*, "", "IBeatmapLevelsModel");
