#pragma once
// IWYU pragma private; include "UnityEngine/ColliderHit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderHit)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine {
struct ColliderHit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ColliderHit);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ColliderHit
struct CORDL_TYPE ColliderHit {
public:
  // Declarations
  __declspec(property(get = get_collider)) ::UnityW<::UnityEngine::Collider> collider;

  __declspec(property(get = get_instanceID)) int32_t instanceID;

  /// @brief Method get_collider, addr 0x49117e4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_collider();

  /// @brief Method get_instanceID, addr 0x49117dc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_instanceID();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColliderHit();

  // Ctor Parameters [CppParam { name: "m_ColliderInstanceID", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColliderHit(int32_t m_ColliderInstanceID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_ColliderInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t m_ColliderInstanceID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ColliderHit, m_ColliderInstanceID) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ColliderHit, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColliderHit, "UnityEngine", "ColliderHit");
