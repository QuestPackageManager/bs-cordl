#pragma once
// IWYU pragma private; include "System/Data/RBTreeError.hpp"
#include "System/Data/zzzz__RBTreeError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::RBTreeError::RBTreeError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::RBTreeError::RBTreeError()   {
}
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::InvalidPageSize{static_cast<int32_t>(0x1)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::PagePositionInSlotInUse{static_cast<int32_t>(0x3)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::NoFreeSlots{static_cast<int32_t>(0x4)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::InvalidStateinInsert{static_cast<int32_t>(0x5)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::InvalidNextSizeInDelete{static_cast<int32_t>(0x7)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::InvalidStateinDelete{static_cast<int32_t>(0x8)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::InvalidNodeSizeinDelete{static_cast<int32_t>(0x9)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::InvalidStateinEndDelete{static_cast<int32_t>(0xa)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::CannotRotateInvalidsuccessorNodeinDelete{static_cast<int32_t>(0xb)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::IndexOutOFRangeinGetNodeByIndex{static_cast<int32_t>(0xd)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::RBDeleteFixup{static_cast<int32_t>(0xe)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::UnsupportedAccessMethod1{static_cast<int32_t>(0xf)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::UnsupportedAccessMethod2{static_cast<int32_t>(0x10)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::UnsupportedAccessMethodInNonNillRootSubtree{static_cast<int32_t>(0x11)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::AttachedNodeWithZerorbTreeNodeId{static_cast<int32_t>(0x12)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::CompareNodeInDataRowTree{static_cast<int32_t>(0x13)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::CompareSateliteTreeNodeInDataRowTree{static_cast<int32_t>(0x14)};
constexpr ::System::Data::RBTreeError  System::Data::RBTreeError::NestedSatelliteTreeEnumerator{static_cast<int32_t>(0x15)};
