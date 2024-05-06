#pragma once
// IWYU pragma private; include "System/ComponentModel/IRevertibleChangeTracking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRevertibleChangeTracking)
namespace System::ComponentModel {
class IChangeTracking;
}
// Forward declare root types
namespace System::ComponentModel {
class IRevertibleChangeTracking;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IRevertibleChangeTracking);
// Type: System.ComponentModel::IRevertibleChangeTracking
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IRevertibleChangeTracking*
class CORDL_TYPE IRevertibleChangeTracking {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::IChangeTracking"
  constexpr operator ::System::ComponentModel::IChangeTracking*() noexcept;

  /// @brief Method RejectChanges, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RejectChanges();

  /// @brief Convert to "::System::ComponentModel::IChangeTracking"
  constexpr ::System::ComponentModel::IChangeTracking* i___System__ComponentModel__IChangeTracking() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IRevertibleChangeTracking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRevertibleChangeTracking(IRevertibleChangeTracking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRevertibleChangeTracking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRevertibleChangeTracking(IRevertibleChangeTracking const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IRevertibleChangeTracking);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IRevertibleChangeTracking*, "System.ComponentModel", "IRevertibleChangeTracking");
