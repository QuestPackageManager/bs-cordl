#pragma once
// IWYU pragma private; include "System/Linq/Expressions/IArgumentProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IArgumentProvider)
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class IArgumentProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::IArgumentProvider);
// Type: System.Linq.Expressions::IArgumentProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::IArgumentProvider*
class CORDL_TYPE IArgumentProvider {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Method GetArgument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  /// @brief Method get_ArgumentCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ArgumentCount();

  // Ctor Parameters [CppParam { name: "", ty: "IArgumentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IArgumentProvider(IArgumentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IArgumentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IArgumentProvider(IArgumentProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::IArgumentProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::IArgumentProvider*, "System.Linq.Expressions", "IArgumentProvider");
