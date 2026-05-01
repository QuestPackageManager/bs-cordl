#pragma once
// IWYU pragma private; include "System/IFormatProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFormatProvider)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class IFormatProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::IFormatProvider);
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.IFormatProvider
class CORDL_TYPE IFormatProvider {
public:
  // Declarations
  /// @brief Method GetFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetFormat(::System::Type* formatType);

  // Ctor Parameters [CppParam { name: "", ty: "IFormatProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFormatProvider(IFormatProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2419 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IFormatProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::IFormatProvider*, "System", "IFormatProvider");
