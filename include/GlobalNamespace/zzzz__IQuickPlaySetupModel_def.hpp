#pragma once
// IWYU pragma private; include "GlobalNamespace/IQuickPlaySetupModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IQuickPlaySetupModel)
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IQuickPlaySetupModel);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IQuickPlaySetupModel
class CORDL_TYPE IQuickPlaySetupModel {
public:
  // Declarations
  /// @brief Method GetQuickPlaySetupAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IQuickPlaySetupModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IQuickPlaySetupModel(IQuickPlaySetupModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IQuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IQuickPlaySetupModel*, "", "IQuickPlaySetupModel");
