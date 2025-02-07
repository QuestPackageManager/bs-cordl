#pragma once
// IWYU pragma private; include "System/ComponentModel/IChangeTracking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IChangeTracking)
// Forward declare root types
namespace System::ComponentModel {
class IChangeTracking;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IChangeTracking);
// Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IChangeTracking
class CORDL_TYPE IChangeTracking {
public:
  // Declarations
  __declspec(property(get = get_IsChanged)) bool IsChanged;

  /// @brief Method AcceptChanges, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AcceptChanges();

  /// @brief Method get_IsChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsChanged();

  // Ctor Parameters [CppParam { name: "", ty: "IChangeTracking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChangeTracking(IChangeTracking const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9430 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IChangeTracking);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IChangeTracking*, "System.ComponentModel", "IChangeTracking");
