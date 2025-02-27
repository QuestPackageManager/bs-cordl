#pragma once
// IWYU pragma private; include "Unity/ThrowStub.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ObjectDisposedException_def.hpp"
CORDL_MODULE_EXPORT(ThrowStub)
// Forward declare root types
namespace Unity {
class ThrowStub;
}
// Write type traits
MARK_REF_PTR_T(::Unity::ThrowStub);
// Dependencies System.ObjectDisposedException
namespace Unity {
// Is value type: false
// CS Name: Unity.ThrowStub
class CORDL_TYPE ThrowStub : public ::System::ObjectDisposedException {
public:
  // Declarations
  /// @brief Method ThrowNotSupportedException, addr 0x425bee8, size 0x38, virtual false, abstract: false, final false
  static inline void ThrowNotSupportedException();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowStub();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowStub", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowStub(ThrowStub&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowStub", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowStub(ThrowStub const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17988 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::ThrowStub, 0x98>, "Size mismatch!");

} // namespace Unity
NEED_NO_BOX(::Unity::ThrowStub);
DEFINE_IL2CPP_ARG_TYPE(::Unity::ThrowStub*, "Unity", "ThrowStub");
