#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ContextItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContextItem)
// Forward declare root types
namespace UnityEngine::Rendering {
class ContextItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ContextItem);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ContextItem
class CORDL_TYPE ContextItem : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ContextItem* New_ctor();

  /// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x652e000, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextItem(ContextItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextItem(ContextItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ContextItem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ContextItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ContextItem*, "UnityEngine.Rendering", "ContextItem");
