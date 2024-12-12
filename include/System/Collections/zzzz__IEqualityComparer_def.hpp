#pragma once
// IWYU pragma private; include "System/Collections/IEqualityComparer.hpp"
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
// Dependencies
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.IEqualityComparer
class CORDL_TYPE IEqualityComparer {
public:
  // Declarations
  /// @brief Method Equals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method GetHashCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "IEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEqualityComparer(IEqualityComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3768 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IEqualityComparer*, "System.Collections", "IEqualityComparer");
