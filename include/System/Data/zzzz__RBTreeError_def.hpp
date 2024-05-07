#pragma once
// IWYU pragma private; include "System/Data/RBTreeError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RBTreeError)
// Forward declare root types
namespace System::Data {
struct RBTreeError;
}
// Write type traits
MARK_VAL_T(::System::Data::RBTreeError);
// Type: System.Data::RBTreeError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::RBTreeError
struct CORDL_TYPE RBTreeError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RBTreeError_Unwrapped
  enum struct __RBTreeError_Unwrapped : int32_t {
    __E_InvalidPageSize = static_cast<int32_t>(0x1),
    __E_PagePositionInSlotInUse = static_cast<int32_t>(0x3),
    __E_NoFreeSlots = static_cast<int32_t>(0x4),
    __E_InvalidStateinInsert = static_cast<int32_t>(0x5),
    __E_InvalidNextSizeInDelete = static_cast<int32_t>(0x7),
    __E_InvalidStateinDelete = static_cast<int32_t>(0x8),
    __E_InvalidNodeSizeinDelete = static_cast<int32_t>(0x9),
    __E_InvalidStateinEndDelete = static_cast<int32_t>(0xa),
    __E_CannotRotateInvalidsuccessorNodeinDelete = static_cast<int32_t>(0xb),
    __E_IndexOutOFRangeinGetNodeByIndex = static_cast<int32_t>(0xd),
    __E_RBDeleteFixup = static_cast<int32_t>(0xe),
    __E_UnsupportedAccessMethod1 = static_cast<int32_t>(0xf),
    __E_UnsupportedAccessMethod2 = static_cast<int32_t>(0x10),
    __E_UnsupportedAccessMethodInNonNillRootSubtree = static_cast<int32_t>(0x11),
    __E_AttachedNodeWithZerorbTreeNodeId = static_cast<int32_t>(0x12),
    __E_CompareNodeInDataRowTree = static_cast<int32_t>(0x13),
    __E_CompareSateliteTreeNodeInDataRowTree = static_cast<int32_t>(0x14),
    __E_NestedSatelliteTreeEnumerator = static_cast<int32_t>(0x15),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RBTreeError_Unwrapped() const noexcept {
    return static_cast<__RBTreeError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RBTreeError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RBTreeError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AttachedNodeWithZerorbTreeNodeId value: static_cast<int32_t>(0x12)
  static ::System::Data::RBTreeError const AttachedNodeWithZerorbTreeNodeId;

  /// @brief Field CannotRotateInvalidsuccessorNodeinDelete value: static_cast<int32_t>(0xb)
  static ::System::Data::RBTreeError const CannotRotateInvalidsuccessorNodeinDelete;

  /// @brief Field CompareNodeInDataRowTree value: static_cast<int32_t>(0x13)
  static ::System::Data::RBTreeError const CompareNodeInDataRowTree;

  /// @brief Field CompareSateliteTreeNodeInDataRowTree value: static_cast<int32_t>(0x14)
  static ::System::Data::RBTreeError const CompareSateliteTreeNodeInDataRowTree;

  /// @brief Field IndexOutOFRangeinGetNodeByIndex value: static_cast<int32_t>(0xd)
  static ::System::Data::RBTreeError const IndexOutOFRangeinGetNodeByIndex;

  /// @brief Field InvalidNextSizeInDelete value: static_cast<int32_t>(0x7)
  static ::System::Data::RBTreeError const InvalidNextSizeInDelete;

  /// @brief Field InvalidNodeSizeinDelete value: static_cast<int32_t>(0x9)
  static ::System::Data::RBTreeError const InvalidNodeSizeinDelete;

  /// @brief Field InvalidPageSize value: static_cast<int32_t>(0x1)
  static ::System::Data::RBTreeError const InvalidPageSize;

  /// @brief Field InvalidStateinDelete value: static_cast<int32_t>(0x8)
  static ::System::Data::RBTreeError const InvalidStateinDelete;

  /// @brief Field InvalidStateinEndDelete value: static_cast<int32_t>(0xa)
  static ::System::Data::RBTreeError const InvalidStateinEndDelete;

  /// @brief Field InvalidStateinInsert value: static_cast<int32_t>(0x5)
  static ::System::Data::RBTreeError const InvalidStateinInsert;

  /// @brief Field NestedSatelliteTreeEnumerator value: static_cast<int32_t>(0x15)
  static ::System::Data::RBTreeError const NestedSatelliteTreeEnumerator;

  /// @brief Field NoFreeSlots value: static_cast<int32_t>(0x4)
  static ::System::Data::RBTreeError const NoFreeSlots;

  /// @brief Field PagePositionInSlotInUse value: static_cast<int32_t>(0x3)
  static ::System::Data::RBTreeError const PagePositionInSlotInUse;

  /// @brief Field RBDeleteFixup value: static_cast<int32_t>(0xe)
  static ::System::Data::RBTreeError const RBDeleteFixup;

  /// @brief Field UnsupportedAccessMethod1 value: static_cast<int32_t>(0xf)
  static ::System::Data::RBTreeError const UnsupportedAccessMethod1;

  /// @brief Field UnsupportedAccessMethod2 value: static_cast<int32_t>(0x10)
  static ::System::Data::RBTreeError const UnsupportedAccessMethod2;

  /// @brief Field UnsupportedAccessMethodInNonNillRootSubtree value: static_cast<int32_t>(0x11)
  static ::System::Data::RBTreeError const UnsupportedAccessMethodInNonNillRootSubtree;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::RBTreeError, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::RBTreeError, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::RBTreeError, "System.Data", "RBTreeError");
