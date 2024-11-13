#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IDesigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDesigner)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IDesigner;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::IDesigner);
// Type: System.ComponentModel.Design::IDesigner
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: ::System.ComponentModel.Design::IDesigner*
class CORDL_TYPE IDesigner {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDesigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDesigner(IDesigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDesigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDesigner(IDesigner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IDesigner);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IDesigner*, "System.ComponentModel.Design", "IDesigner");
