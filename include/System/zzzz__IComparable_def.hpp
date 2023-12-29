#pragma once
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
// Type: System::IComparable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2409))
// CS Name: ::System::IComparable*
class CORDL_TYPE IComparable {
public:
  // Declarations
  /// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t CompareTo(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "IComparable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IComparable(IComparable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IComparable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComparable(IComparable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IComparable);
DEFINE_IL2CPP_ARG_TYPE(::System::IComparable*, "System", "IComparable");
