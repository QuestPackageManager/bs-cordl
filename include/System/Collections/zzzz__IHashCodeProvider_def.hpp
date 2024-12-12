#pragma once
// IWYU pragma private; include "System/Collections/IHashCodeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IHashCodeProvider)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IHashCodeProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IHashCodeProvider);
// Dependencies
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.IHashCodeProvider
class CORDL_TYPE IHashCodeProvider {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "IHashCodeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHashCodeProvider(IHashCodeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IHashCodeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IHashCodeProvider*, "System.Collections", "IHashCodeProvider");
