#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine::BoxCollider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15476))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15474))
// CS Name: ::UnityEngine::BoxCollider*
class CORDL_TYPE BoxCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center))::UnityEngine::Vector3 center;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector3 size;

  /// @brief Method get_center addr 0x2baf31c size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method set_center addr 0x2baf3bc size 0x54 virtual false final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method get_size addr 0x2baf454 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method set_size addr 0x2baf4f4 size 0x54 virtual false final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method get_center_Injected addr 0x2baf378 size 0x44 virtual false final false
  inline void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_center_Injected addr 0x2baf410 size 0x44 virtual false final false
  inline void set_center_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_size_Injected addr 0x2baf4b0 size 0x44 virtual false final false
  inline void get_size_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_size_Injected addr 0x2baf548 size 0x44 virtual false final false
  inline void set_size_Injected(ByRef<::UnityEngine::Vector3> value);

  // Ctor Parameters [CppParam { name: "", ty: "BoxCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoxCollider(BoxCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoxCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoxCollider(BoxCollider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoxCollider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoxCollider, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BoxCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoxCollider*, "UnityEngine", "BoxCollider");
