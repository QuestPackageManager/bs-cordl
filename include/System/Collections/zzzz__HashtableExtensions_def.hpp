#pragma once
// IWYU pragma private; include "System/Collections/HashtableExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(HashtableExtensions)
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class HashtableExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::HashtableExtensions);
// Type: System.Collections::HashtableExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::HashtableExtensions*
class CORDL_TYPE HashtableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryGetValue(::System::Collections::Hashtable* table, ::System::Object* key, ByRef<T> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashtableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashtableExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashtableExtensions(HashtableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashtableExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashtableExtensions(HashtableExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9449 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::HashtableExtensions, 0x10>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::HashtableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::HashtableExtensions*, "System.Collections", "HashtableExtensions");
