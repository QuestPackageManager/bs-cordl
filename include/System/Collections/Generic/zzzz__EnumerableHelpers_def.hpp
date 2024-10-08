#pragma once
// IWYU pragma private; include "System/Collections/Generic/EnumerableHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::System::Collections::Generic::EnumerableHelpers);
// Type: System.Collections.Generic::EnumerableHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// Is value type: false
// CS Name: ::System.Collections.Generic::EnumerableHelpers*
class CORDL_TYPE EnumerableHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ToArray(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ToArray(::System::Collections::Generic::IEnumerable_1<T>* source, ByRef<int32_t> length);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3860 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::EnumerableHelpers, 0x10>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::EnumerableHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::EnumerableHelpers*, "System.Collections.Generic", "EnumerableHelpers");
