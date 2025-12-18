#pragma once
// IWYU pragma private; include "GlobalNamespace/NoExperimentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoExperimentModel)
namespace GlobalNamespace {
class IExperimentData;
}
namespace GlobalNamespace {
class IExperimentModel;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NoExperimentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoExperimentModel);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoExperimentModel
class CORDL_TYPE NoExperimentModel : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IExperimentModel"
  constexpr operator ::GlobalNamespace::IExperimentModel*() noexcept;

  /// @brief Method IsEmployee, addr 0x360cef8, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* IsEmployee();

  /// @brief Method IsInTest, addr 0x360cf68, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* IsInTest(::GlobalNamespace::IExperimentData* data);

  static inline ::GlobalNamespace::NoExperimentModel* New_ctor();

  /// @brief Method .ctor, addr 0x360cfd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IExperimentModel"
  constexpr ::GlobalNamespace::IExperimentModel* i___GlobalNamespace__IExperimentModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoExperimentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoExperimentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoExperimentModel(NoExperimentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoExperimentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoExperimentModel(NoExperimentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14827 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoExperimentModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoExperimentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoExperimentModel*, "", "NoExperimentModel");
