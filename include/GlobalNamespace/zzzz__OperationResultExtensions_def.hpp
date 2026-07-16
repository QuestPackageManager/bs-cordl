#pragma once
// IWYU pragma private; include "GlobalNamespace/OperationResultExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OperationResultExtensions)
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
// Forward declare root types
namespace GlobalNamespace {
class OperationResultExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OperationResultExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OperationResultExtensions*, "", "OperationResultExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OperationResultExtensions
class CORDL_TYPE OperationResultExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsError, addr 0x5edbf8c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsError(::GlobalNamespace::OVRSpatialAnchor_OperationResult res);

  /// @brief Method IsSuccess, addr 0x5edbf80, size 0xc, virtual false, abstract: false, final false
  static inline bool IsSuccess(::GlobalNamespace::OVRSpatialAnchor_OperationResult res);

  /// @brief Method IsWarning, addr 0x5edbf94, size 0xc, virtual false, abstract: false, final false
  static inline bool IsWarning(::GlobalNamespace::OVRSpatialAnchor_OperationResult res);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperationResultExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OperationResultExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperationResultExtensions(OperationResultExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperationResultExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperationResultExtensions(OperationResultExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7698 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OperationResultExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
