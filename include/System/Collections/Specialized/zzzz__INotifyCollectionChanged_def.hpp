#pragma once
// IWYU pragma private; include "System/Collections/Specialized/INotifyCollectionChanged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotifyCollectionChanged)
// Forward declare root types
namespace System::Collections::Specialized {
class INotifyCollectionChanged;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::INotifyCollectionChanged);
// Type: System.Collections.Specialized::INotifyCollectionChanged
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::System.Collections.Specialized::INotifyCollectionChanged*
class CORDL_TYPE INotifyCollectionChanged {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "INotifyCollectionChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotifyCollectionChanged(INotifyCollectionChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotifyCollectionChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyCollectionChanged(INotifyCollectionChanged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::INotifyCollectionChanged);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::INotifyCollectionChanged*, "System.Collections.Specialized", "INotifyCollectionChanged");
