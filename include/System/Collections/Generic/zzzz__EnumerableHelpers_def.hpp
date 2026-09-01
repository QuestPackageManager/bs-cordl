#pragma once
// IWYU pragma private; include "System\Collections\Generic\EnumerableHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableHelpers)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
class EnumerableHelpers;
}
// Write type traits
MARK_REF_T(::System::Collections::Generic::EnumerableHelpers*);
DEFINE_IL2CPP_CLASS(::System::Collections::Generic::EnumerableHelpers*, "System.Collections.Generic", "EnumerableHelpers");
// Dependencies System.Object
namespace System::Collections::Generic {
// Is value type: false
// CS Name: System.Collections.Generic.EnumerableHelpers
class CORDL_TYPE EnumerableHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> ToArray(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> ToArray(::System::Collections::Generic::IEnumerable_1<T>* source, ::by_ref<int32_t> length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerableHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumerableHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerableHelpers(EnumerableHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerableHelpers(EnumerableHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3785 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Collections::Generic::EnumerableHelpers) == 0x10, "Size mismatch!");

} // namespace System::Collections::Generic
