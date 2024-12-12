#pragma once
// IWYU pragma private; include "System/IO/MonoLinqHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoLinqHelper)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace System::IO {
class MonoLinqHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::MonoLinqHelper);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.MonoLinqHelper
class CORDL_TYPE MonoLinqHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ToArray(::System::Collections::Generic::IEnumerable_1<T>* source);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoLinqHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoLinqHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoLinqHelper(MonoLinqHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoLinqHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoLinqHelper(MonoLinqHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoLinqHelper, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::MonoLinqHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoLinqHelper*, "System.IO", "MonoLinqHelper");
