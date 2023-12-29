#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEqualityComparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IEqualityComparer);
// Type: System.Collections::IEqualityComparer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3749))
// CS Name: ::System.Collections::IEqualityComparer*
class CORDL_TYPE IEqualityComparer {
public:
  // Declarations
  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "IEqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEqualityComparer(IEqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEqualityComparer(IEqualityComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IEqualityComparer*, "System.Collections", "IEqualityComparer");
