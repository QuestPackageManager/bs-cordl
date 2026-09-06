#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ICameraHistoryWriteAccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
CORDL_MODULE_EXPORT(ICameraHistoryWriteAccess)
// Forward declare root types
namespace UnityEngine::Rendering {
class ICameraHistoryWriteAccess;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ICameraHistoryWriteAccess*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ICameraHistoryWriteAccess*, "UnityEngine.Rendering", "ICameraHistoryWriteAccess");
// Dependencies UnityEngine.Rendering.ContextItem
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ICameraHistoryWriteAccess
class CORDL_TYPE ICameraHistoryWriteAccess {
public:
  // Declarations
  /// @brief Method GetHistoryForWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename Type>
    requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*> && ::cordl_internals::default_constructor_constraint<Type>)
  inline Type GetHistoryForWrite();

  /// @brief Method IsAccessRequested, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename Type>
    requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*>)
  inline bool IsAccessRequested();

  /// @brief Method IsWritten, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename Type>
    requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*>)
  inline bool IsWritten();

  // Ctor Parameters [CppParam { name: "", ty: "ICameraHistoryWriteAccess", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICameraHistoryWriteAccess(ICameraHistoryWriteAccessconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11864 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
