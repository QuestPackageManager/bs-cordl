#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IStrongBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStrongBox)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IStrongBox;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IStrongBox);
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.IStrongBox
class CORDL_TYPE IStrongBox {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value)) ::System::Object* Value;

  /// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method set_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Value(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IStrongBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStrongBox(IStrongBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16605 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IStrongBox);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IStrongBox*, "System.Runtime.CompilerServices", "IStrongBox");
