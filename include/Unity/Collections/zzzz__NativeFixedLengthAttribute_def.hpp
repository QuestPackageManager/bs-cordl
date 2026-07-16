#pragma once
// IWYU pragma private; include "Unity/Collections/NativeFixedLengthAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeFixedLengthAttribute)
// Forward declare root types
namespace Unity::Collections {
class NativeFixedLengthAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Collections::NativeFixedLengthAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeFixedLengthAttribute*, "Unity.Collections", "NativeFixedLengthAttribute");
// Dependencies System.Attribute
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeFixedLengthAttribute
class CORDL_TYPE NativeFixedLengthAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeFixedLengthAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeFixedLengthAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeFixedLengthAttribute(NativeFixedLengthAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeFixedLengthAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeFixedLengthAttribute(NativeFixedLengthAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9958 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::NativeFixedLengthAttribute) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
