#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ITuple.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITuple)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ITuple;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::ITuple);
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.ITuple
class CORDL_TYPE ITuple {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method get_Length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Length();

  // Ctor Parameters [CppParam { name: "", ty: "ITuple", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITuple(ITuple const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::ITuple);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ITuple*, "System.Runtime.CompilerServices", "ITuple");
