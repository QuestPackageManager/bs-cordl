#pragma once
// IWYU pragma private; include "System/Collections/Generic/KeyValuePair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyValuePair)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
class KeyValuePair;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::KeyValuePair);
// Dependencies System.Object
namespace System::Collections::Generic {
// Is value type: false
// CS Name: System.Collections.Generic.KeyValuePair
class CORDL_TYPE KeyValuePair : public ::System::Object {
public:
  // Declarations
  /// @brief Method PairToString, addr 0x59dcd88, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW PairToString(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValuePair(KeyValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValuePair(KeyValuePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3779 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::KeyValuePair, 0x10>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::KeyValuePair);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::KeyValuePair*, "System.Collections.Generic", "KeyValuePair");
