#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/Item.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Item)
namespace Meta::XR::ImmersiveDebugger::Manager {
struct Category;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Hierarchy::Item);
// Dependencies Meta.XR.ImmersiveDebugger.Utils.InstanceHandle, System.Object
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Hierarchy.Item
class CORDL_TYPE Item : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Category)) ::Meta::XR::ImmersiveDebugger::Manager::Category Category;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_Dirty, put = set_Dirty)) bool Dirty;

  __declspec(property(get = get_Handle)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Handle;

  __declspec(property(get = get_Id)) int32_t Id;

  __declspec(property(get = get_Label)) ::StringW Label;

  __declspec(property(get = get_Owner)) ::System::Object* Owner;

  __declspec(property(get = get_Parent)) ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* Parent;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Field <Dirty>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__Dirty_k__BackingField, put = __cordl_internal_set__Dirty_k__BackingField)) bool _Dirty_k__BackingField;

  /// @brief Field _depth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__depth, put = __cordl_internal_set__depth)) int32_t _depth;

  /// @brief Field _handle, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get__handle, put = __cordl_internal_set__handle)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle _handle;

  /// @brief Field _parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* _parent;

  /// @brief Method BuildChildren, addr 0x58ba704, size 0x4, virtual true, abstract: false, final false
  inline void BuildChildren();

  /// @brief Method BuildContent, addr 0x58ba6fc, size 0x4, virtual true, abstract: false, final false
  inline void BuildContent();

  /// @brief Method Clear, addr 0x58ba09c, size 0x40, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearChildren, addr 0x58ba708, size 0x4, virtual true, abstract: false, final false
  inline void ClearChildren();

  /// @brief Method ClearContent, addr 0x58ba700, size 0x4, virtual true, abstract: false, final false
  inline void ClearContent();

  /// @brief Method ComputeNeedsRefresh, addr 0x58ba6f4, size 0x8, virtual true, abstract: false, final false
  inline bool ComputeNeedsRefresh();

  /// @brief Method ComputeNumberOfChildren, addr 0x58ba6ec, size 0x8, virtual true, abstract: false, final false
  inline int32_t ComputeNumberOfChildren();

  static inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* New_ctor();

  /// @brief Method Register, addr 0x58ba2a4, size 0x80, virtual true, abstract: false, final false
  inline void Register(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* parent);

  /// @brief Method Unregister, addr 0x58ba0dc, size 0x60, virtual true, abstract: false, final false
  inline void Unregister();

  constexpr bool const& __cordl_internal_get__Dirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Dirty_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__depth() const;

  constexpr int32_t& __cordl_internal_get__depth();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& __cordl_internal_get__handle() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& __cordl_internal_get__handle();

  constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* const& __cordl_internal_get__parent() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*& __cordl_internal_get__parent();

  constexpr void __cordl_internal_set__Dirty_k__BackingField(bool value);

  constexpr void __cordl_internal_set__depth(int32_t value);

  constexpr void __cordl_internal_set__handle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value);

  constexpr void __cordl_internal_set__parent(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* value);

  /// @brief Method .ctor, addr 0x58ba70c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Category, addr 0x58ba080, size 0xc, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::Category get_Category();

  /// @brief Method get_Depth, addr 0x58ba064, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_Dirty, addr 0x58ba08c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Dirty();

  /// @brief Method get_Handle, addr 0x58ba06c, size 0x14, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle get_Handle();

  /// @brief Method get_Id, addr 0x58b2178, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Id();

  /// @brief Method get_Label, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method get_Owner, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Owner();

  /// @brief Method get_Parent, addr 0x58ba05c, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* get_Parent();

  /// @brief Method get_Valid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_Valid();

  /// @brief Method set_Dirty, addr 0x58ba094, size 0x8, virtual false, abstract: false, final false
  inline void set_Dirty(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Item();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Item", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Item(Item&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Item", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Item(Item const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18432 };

  /// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* ____parent;

  /// @brief Field _depth, offset: 0x18, size: 0x4, def value: None
  int32_t ____depth;

  /// @brief Field _handle, offset: 0x20, size: 0x18, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle ____handle;

  /// @brief Field <Dirty>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____Dirty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Hierarchy::Item, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Hierarchy::Item, ____depth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Hierarchy::Item, ____handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Hierarchy::Item, ____Dirty_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Hierarchy::Item, 0x40>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Hierarchy
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Hierarchy::Item);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, "Meta.XR.ImmersiveDebugger.Hierarchy", "Item");
