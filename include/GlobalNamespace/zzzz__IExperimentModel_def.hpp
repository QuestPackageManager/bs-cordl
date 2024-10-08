#pragma once
// IWYU pragma private; include "GlobalNamespace/IExperimentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExperimentModel)
namespace GlobalNamespace {
class IExperimentData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IExperimentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IExperimentModel);
// Type: ::IExperimentModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IExperimentModel*
class CORDL_TYPE IExperimentModel {
public:
  // Declarations
  /// @brief Method IsEmployee, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsEmployee();

  /// @brief Method IsInTest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsInTest(::GlobalNamespace::IExperimentData* data);

  // Ctor Parameters [CppParam { name: "", ty: "IExperimentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExperimentModel(IExperimentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExperimentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExperimentModel(IExperimentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12806 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IExperimentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IExperimentModel*, "", "IExperimentModel");
