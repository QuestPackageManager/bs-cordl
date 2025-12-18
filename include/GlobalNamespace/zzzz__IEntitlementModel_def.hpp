#pragma once
// IWYU pragma private; include "GlobalNamespace/IEntitlementModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IEntitlementModel)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
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
class IEntitlementModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IEntitlementModel);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IEntitlementModel
class CORDL_TYPE IEntitlementModel {
public:
  // Declarations
  /// @brief Method GetLevelDataVersionAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelEntitlementStatusAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  // Ctor Parameters [CppParam { name: "", ty: "IEntitlementModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEntitlementModel(IEntitlementModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23320 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IEntitlementModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IEntitlementModel*, "", "IEntitlementModel");
