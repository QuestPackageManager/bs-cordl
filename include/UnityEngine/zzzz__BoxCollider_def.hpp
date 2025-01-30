#pragma once
// IWYU pragma private; include "UnityEngine/BoxCollider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
CORDL_MODULE_EXPORT(BoxCollider)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class BoxCollider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::BoxCollider);
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BoxCollider
class CORDL_TYPE BoxCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_extents, put = set_extents)) ::UnityEngine::Vector3 extents;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  static inline ::UnityEngine::BoxCollider* New_ctor();

  /// @brief Method .ctor, addr 0x490b5f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_center, addr 0x490b354, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_center_Injected, addr 0x490b3b0, size 0x44, virtual false, abstract: false, final false
  inline void get_center_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_extents, addr 0x490b5c4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_extents();

  /// @brief Method get_size, addr 0x490b48c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_size_Injected, addr 0x490b4e8, size 0x44, virtual false, abstract: false, final false
  inline void get_size_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_center, addr 0x490b3f4, size 0x54, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_center_Injected, addr 0x490b448, size 0x44, virtual false, abstract: false, final false
  inline void set_center_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_extents, addr 0x490b5e4, size 0x10, virtual false, abstract: false, final false
  inline void set_extents(::UnityEngine::Vector3 value);

  /// @brief Method set_size, addr 0x490b52c, size 0x54, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method set_size_Injected, addr 0x490b580, size 0x44, virtual false, abstract: false, final false
  inline void set_size_Injected(::ByRef<::UnityEngine::Vector3> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoxCollider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoxCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoxCollider(BoxCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoxCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoxCollider(BoxCollider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoxCollider, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BoxCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoxCollider*, "UnityEngine", "BoxCollider");
