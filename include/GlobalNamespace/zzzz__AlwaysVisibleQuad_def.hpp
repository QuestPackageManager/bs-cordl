#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AlwaysVisibleQuad)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysVisibleQuad;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlwaysVisibleQuad);
// Type: ::AlwaysVisibleQuad
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15302))
// CS Name: ::AlwaysVisibleQuad*
class CORDL_TYPE AlwaysVisibleQuad : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mesh, offset 0x18, size 0x8
  __declspec(property(get = __get__mesh, put = __set__mesh))::UnityEngine::Mesh* _mesh;

  constexpr ::UnityEngine::Mesh*& __get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__mesh() const;

  constexpr void __set__mesh(::UnityEngine::Mesh* value);

  /// @brief Method OnEnable addr 0x268b520 size 0x224 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x268b744 size 0xc virtual false final false
  inline void OnDisable();

  static inline ::GlobalNamespace::AlwaysVisibleQuad* New_ctor();

  /// @brief Method .ctor addr 0x268b750 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysVisibleQuad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlwaysVisibleQuad(AlwaysVisibleQuad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysVisibleQuad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlwaysVisibleQuad(AlwaysVisibleQuad const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlwaysVisibleQuad();

public:
  /// @brief Field _mesh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlwaysVisibleQuad, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AlwaysVisibleQuad, ____mesh) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlwaysVisibleQuad);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysVisibleQuad*, "", "AlwaysVisibleQuad");
