#pragma once
// IWYU pragma private; include "System/IComparable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComparable)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class IComparable;
}
// Write type traits
MARK_REF_PTR_T(::System::IComparable);
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.IComparable
class CORDL_TYPE IComparable {
public:
  // Declarations
  /// @brief Method CompareTo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t CompareTo(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "IComparable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComparable(IComparable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2413 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IComparable);
DEFINE_IL2CPP_ARG_TYPE(::System::IComparable*, "System", "IComparable");
