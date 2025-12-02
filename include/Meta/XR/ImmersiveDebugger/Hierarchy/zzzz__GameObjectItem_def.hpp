#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/GameObjectItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__ItemWithChildren_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameObjectItem)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class ComponentItem;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class GameObjectItem;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Hierarchy::GameObjectItem);
// Dependencies Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren`3<TargetType, ChildType, ChildTargetType>
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Hierarchy.GameObjectItem
class CORDL_TYPE GameObjectItem : public ::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<::UnityW<::UnityEngine::GameObject>, ::Meta::XR::ImmersiveDebugger::Hierarchy::GameObjectItem*,
                                                                                                      ::UnityW<::UnityEngine::GameObject>> {
public:
  // Declarations
  __declspec(property(get = get_Label)) ::StringW Label;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Field _components, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__components,
                      put = __cordl_internal_set__components)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>* _components;

  /// @brief Method BuildContent, addr 0x58541f8, size 0x60, virtual true, abstract: false, final false
  inline void BuildContent();

  /// @brief Method BuildContentInternal, addr 0x5854258, size 0x1d8, virtual false, abstract: false, final false
  inline void BuildContentInternal();

  /// @brief Method BuildHandle, addr 0x5854024, size 0x8c, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle BuildHandle();

  /// @brief Method ClearContent, addr 0x585446c, size 0x184, virtual true, abstract: false, final false
  inline void ClearContent();

  /// @brief Method CompareChildren, addr 0x58540b0, size 0x6c, virtual true, abstract: false, final false
  inline bool CompareChildren(::UnityEngine::GameObject* lhs, ::UnityEngine::GameObject* rhs);

  /// @brief Method FetchExpectedChildren, addr 0x585411c, size 0xdc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> FetchExpectedChildren();

  static inline ::Meta::XR::ImmersiveDebugger::Hierarchy::GameObjectItem* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>* const& __cordl_internal_get__components() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>*& __cordl_internal_get__components();

  constexpr void __cordl_internal_set__components(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>* value);

  /// @brief Method .ctor, addr 0x58545f0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Label, addr 0x5853fac, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method get_Valid, addr 0x5853fc0, size 0x64, virtual true, abstract: false, final false
  inline bool get_Valid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectItem(GameObjectItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectItem(GameObjectItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18420 };

  /// @brief Field _components, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>* ____components;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Hierarchy::GameObjectItem, ____components) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Hierarchy::GameObjectItem, 0x58>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Hierarchy
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Hierarchy::GameObjectItem);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Hierarchy::GameObjectItem*, "Meta.XR.ImmersiveDebugger.Hierarchy", "GameObjectItem");
