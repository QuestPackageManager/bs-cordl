#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/Hint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Hint)
// Forward declare root types
namespace Unity::Burst::CompilerServices {
class Hint;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::CompilerServices::Hint);
// Type: Unity.Burst.CompilerServices::Hint
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::CompilerServices {
// Is value type: false
// CS Name: ::Unity.Burst.CompilerServices::Hint*
class CORDL_TYPE Hint : public ::System::Object {
public:
  // Declarations
  /// @brief Method Assume, addr 0x30a53b8, size 0x4, virtual false, abstract: false, final false
  static inline void Assume(bool condition);

  /// @brief Method Likely, addr 0x30a53a8, size 0x8, virtual false, abstract: false, final false
  static inline bool Likely(bool condition);

  /// @brief Method Unlikely, addr 0x30a53b0, size 0x8, virtual false, abstract: false, final false
  static inline bool Unlikely(bool condition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hint(Hint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hint(Hint const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::CompilerServices::Hint, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::CompilerServices
NEED_NO_BOX(::Unity::Burst::CompilerServices::Hint);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::CompilerServices::Hint*, "Unity.Burst.CompilerServices", "Hint");
