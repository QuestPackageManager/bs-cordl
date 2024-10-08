#pragma once
// IWYU pragma private; include "Unity/Burst/SafeStringArrayHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SafeStringArrayHelper)
// Forward declare root types
namespace Unity::Burst {
class SafeStringArrayHelper;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::SafeStringArrayHelper);
// Type: Unity.Burst::SafeStringArrayHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::Unity.Burst::SafeStringArrayHelper*
class CORDL_TYPE SafeStringArrayHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeserialiseStringArraySafe, addr 0x448e358, size 0x28c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> DeserialiseStringArraySafe(::StringW input);

  /// @brief Method SerialiseStringArraySafe, addr 0x448e15c, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW SerialiseStringArraySafe(::ArrayW<::StringW, ::Array<::StringW>*> array);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::SafeStringArrayHelper, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::SafeStringArrayHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::SafeStringArrayHelper*, "Unity.Burst", "SafeStringArrayHelper");
