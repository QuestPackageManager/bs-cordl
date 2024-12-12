#pragma once
// IWYU pragma private; include "System/Buffers/Utilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utilities)
// Forward declare root types
namespace System::Buffers {
class Utilities;
}
// Write type traits
MARK_REF_PTR_T(::System::Buffers::Utilities);
// Dependencies System.Object
namespace System::Buffers {
// Is value type: false
// CS Name: System.Buffers.Utilities
class CORDL_TYPE Utilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMaxSizeForBucket, addr 0x3dc882c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t GetMaxSizeForBucket(int32_t binIndex);

  /// @brief Method SelectBucketIndex, addr 0x3dc87b0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SelectBucketIndex(int32_t bufferSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utilities(Utilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utilities(Utilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3905 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::Utilities, 0x10>, "Size mismatch!");

} // namespace System::Buffers
NEED_NO_BOX(::System::Buffers::Utilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::Utilities*, "System.Buffers", "Utilities");
