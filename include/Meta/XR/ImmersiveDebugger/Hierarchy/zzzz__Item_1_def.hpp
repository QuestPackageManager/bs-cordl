#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/Item_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
CORDL_MODULE_EXPORT(Item_1)
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
template <typename T> class Item_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1);
// Dependencies Meta.XR.ImmersiveDebugger.Hierarchy.Item
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Hierarchy.Item`1<T>
class CORDL_TYPE Item_1 : public ::Meta::XR::ImmersiveDebugger::Hierarchy::Item {
public:
  // Declarations
  __declspec(property(get = get_Owner)) ::System::Object* Owner;

  __declspec(property(get = get_TypedOwner)) T TypedOwner;

  /// @brief Field _owner, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__owner, put = __cordl_internal_set__owner)) T _owner;

  /// @brief Method BuildHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle BuildHandle();

  static inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<T>* New_ctor();

  /// @brief Method SetOwner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetOwner(T owner);

  constexpr T const& __cordl_internal_get__owner() const;

  constexpr T& __cordl_internal_get__owner();

  constexpr void __cordl_internal_set__owner(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Owner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Owner();

  /// @brief Method get_TypedOwner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_TypedOwner();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Item_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Item_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Item_1(Item_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Item_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Item_1(Item_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18418 };

  /// @brief Field _owner, offset: 0x40, size: 0x8, def value: None
  T ____owner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Hierarchy
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1, "Meta.XR.ImmersiveDebugger.Hierarchy", "Item`1");
