#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OperationResultExtensions)
namespace GlobalNamespace {
struct __OVRSpatialAnchor__OperationResult;
}
// Forward declare root types
namespace GlobalNamespace {
class OperationResultExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OperationResultExtensions);
// Type: ::OperationResultExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8005))
// CS Name: ::OperationResultExtensions*
class CORDL_TYPE OperationResultExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsSuccess, addr 0x2792dc0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsSuccess(::GlobalNamespace::__OVRSpatialAnchor__OperationResult res);

  /// @brief Method IsError, addr 0x2792dcc, size 0x8, virtual false, abstract: false, final false
  static inline bool IsError(::GlobalNamespace::__OVRSpatialAnchor__OperationResult res);

  /// @brief Method IsWarning, addr 0x2792dd4, size 0xc, virtual false, abstract: false, final false
  static inline bool IsWarning(::GlobalNamespace::__OVRSpatialAnchor__OperationResult res);

  // Ctor Parameters [CppParam { name: "", ty: "OperationResultExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperationResultExtensions(OperationResultExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperationResultExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperationResultExtensions(OperationResultExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperationResultExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OperationResultExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OperationResultExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OperationResultExtensions*, "", "OperationResultExtensions");
