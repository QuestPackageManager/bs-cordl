#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/Constant.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Constant)
// Forward declare root types
namespace Unity::Burst::CompilerServices {
class Constant;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::CompilerServices::Constant);
// Dependencies System.Object
namespace Unity::Burst::CompilerServices {
// Is value type: false
// CS Name: Unity.Burst.CompilerServices.Constant
class CORDL_TYPE Constant : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsConstantExpression, addr 0x453d204, size 0x8, virtual false, abstract: false, final false
  static inline bool IsConstantExpression(::cordl_internals::Ptr<void> t);

  /// @brief Method IsConstantExpression, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsConstantExpression(T t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Constant();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Constant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Constant(Constant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Constant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Constant(Constant const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14671 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::CompilerServices::Constant, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::CompilerServices
NEED_NO_BOX(::Unity::Burst::CompilerServices::Constant);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::CompilerServices::Constant*, "Unity.Burst.CompilerServices", "Constant");
