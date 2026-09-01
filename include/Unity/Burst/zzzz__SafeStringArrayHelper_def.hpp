#pragma once
// IWYU pragma private; include "Unity\Burst\SafeStringArrayHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SafeStringArrayHelper)
// Forward declare root types
namespace Unity::Burst {
class SafeStringArrayHelper;
}
// Write type traits
MARK_REF_T(::Unity::Burst::SafeStringArrayHelper*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::SafeStringArrayHelper*, "Unity.Burst", "SafeStringArrayHelper");
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.SafeStringArrayHelper
class CORDL_TYPE SafeStringArrayHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeserialiseStringArraySafe, addr 0x6471da8, size 0x290, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> DeserialiseStringArraySafe(::StringW input);

  /// @brief Method SerialiseStringArraySafe, addr 0x6471b94, size 0x170, virtual false, abstract: false, final false
  static inline ::StringW SerialiseStringArraySafe(::ArrayW<::StringW> array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeStringArrayHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeStringArrayHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeStringArrayHelper(SafeStringArrayHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeStringArrayHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeStringArrayHelper(SafeStringArrayHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17332 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::SafeStringArrayHelper) == 0x10, "Size mismatch!");

} // namespace Unity::Burst
