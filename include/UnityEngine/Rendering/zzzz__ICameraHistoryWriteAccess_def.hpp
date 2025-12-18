#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ICameraHistoryWriteAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICameraHistoryWriteAccess)
// Forward declare root types
namespace UnityEngine::Rendering {
class ICameraHistoryWriteAccess;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ICameraHistoryWriteAccess);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ICameraHistoryWriteAccess
class CORDL_TYPE ICameraHistoryWriteAccess {
public:
  // Declarations
  /// @brief Method GetHistoryForWrite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename Type> inline Type GetHistoryForWrite();

  /// @brief Method IsAccessRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename Type> inline bool IsAccessRequested();

  /// @brief Method IsWritten, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename Type> inline bool IsWritten();

  // Ctor Parameters [CppParam { name: "", ty: "ICameraHistoryWriteAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICameraHistoryWriteAccess(ICameraHistoryWriteAccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11839 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ICameraHistoryWriteAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ICameraHistoryWriteAccess*, "UnityEngine.Rendering", "ICameraHistoryWriteAccess");
