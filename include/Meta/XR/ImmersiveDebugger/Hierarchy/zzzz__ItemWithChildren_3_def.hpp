#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/ItemWithChildren_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ItemWithChildren_3)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
template <typename TargetType, typename ChildType, typename ChildTargetType> class ItemWithChildren_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3);
// Dependencies Meta.XR.ImmersiveDebugger.Hierarchy.Item`1<T>
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
// cpp template
template <typename TargetType, typename ChildType, typename ChildTargetType>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren`3<TargetType,ChildType,ChildTargetType>
class CORDL_TYPE ItemWithChildren_3 : public ::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<TargetType> {
public:
  // Declarations
  /// @brief Field _children, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__children, put = __cordl_internal_set__children)) ::System::Collections::Generic::List_1<ChildType>* _children;

  /// @brief Method BuildChildren, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void BuildChildren();

  /// @brief Method BuildChildrenInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void BuildChildrenInternal();

  /// @brief Method ClearChildren, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearChildren();

  /// @brief Method ClearDirtyChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearDirtyChildren();

  /// @brief Method CompareChildren, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CompareChildren(ChildTargetType lhs, ChildTargetType rhs);

  /// @brief Method ComputeNeedsRefresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ComputeNeedsRefresh();

  /// @brief Method ComputeNumberOfChildren, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t ComputeNumberOfChildren();

  /// @brief Method FetchExpectedChildren, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<ChildTargetType, ::Array<ChildTargetType>*> FetchExpectedChildren();

  /// @brief Method GetChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ChildType GetChild(ChildTargetType target);

  /// @brief Method MarkChildrenDirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MarkChildrenDirty();

  static inline ::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<TargetType, ChildType, ChildTargetType>* New_ctor();

  constexpr ::System::Collections::Generic::List_1<ChildType>* const& __cordl_internal_get__children() const;

  constexpr ::System::Collections::Generic::List_1<ChildType>*& __cordl_internal_get__children();

  constexpr void __cordl_internal_set__children(::System::Collections::Generic::List_1<ChildType>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemWithChildren_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemWithChildren_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemWithChildren_3(ItemWithChildren_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemWithChildren_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemWithChildren_3(ItemWithChildren_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18419 };

  /// @brief Field _children, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<ChildType>* ____children;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Hierarchy
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3, "Meta.XR.ImmersiveDebugger.Hierarchy", "ItemWithChildren`3");
