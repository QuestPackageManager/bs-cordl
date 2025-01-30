#pragma once
// IWYU pragma private; include "System/Collections/Generic/IntrospectiveSortUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntrospectiveSortUtilities)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
class IntrospectiveSortUtilities;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::IntrospectiveSortUtilities);
// Dependencies System.Object
namespace System::Collections::Generic {
// Is value type: false
// CS Name: System.Collections.Generic.IntrospectiveSortUtilities
class CORDL_TYPE IntrospectiveSortUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method FloorLog2PlusOne, addr 0x3dcb190, size 0x28, virtual false, abstract: false, final false
  static inline int32_t FloorLog2PlusOne(int32_t n);

  /// @brief Method ThrowOrIgnoreBadComparer, addr 0x3dcb1b8, size 0x60, virtual false, abstract: false, final false
  static inline void ThrowOrIgnoreBadComparer(::System::Object* comparer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntrospectiveSortUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntrospectiveSortUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntrospectiveSortUtilities(IntrospectiveSortUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntrospectiveSortUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntrospectiveSortUtilities(IntrospectiveSortUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3877 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::IntrospectiveSortUtilities, 0x10>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::IntrospectiveSortUtilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::IntrospectiveSortUtilities*, "System.Collections.Generic", "IntrospectiveSortUtilities");
