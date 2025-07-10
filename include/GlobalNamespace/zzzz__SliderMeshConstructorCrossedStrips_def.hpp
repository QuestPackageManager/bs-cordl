#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderMeshConstructorCrossedStrips.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderMeshConstructor_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderMeshConstructorCrossedStrips)
namespace GlobalNamespace {
class VertexPath;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshConstructorCrossedStrips;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMeshConstructorCrossedStrips);
// Dependencies SliderMeshConstructor
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderMeshConstructorCrossedStrips
class CORDL_TYPE SliderMeshConstructorCrossedStrips : public ::GlobalNamespace::SliderMeshConstructor {
public:
  // Declarations
  /// @brief Field _triangleMap, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__triangleMap, put = __cordl_internal_set__triangleMap)) ::ArrayW<int32_t, ::Array<int32_t>*> _triangleMap;

  /// @brief Method CreateSliderMeshInternal, addr 0x3b7b8d0, size 0x480, virtual true, abstract: false, final false
  inline void CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path, float_t zDistanceBetweenNotes, ::ByRef<::UnityEngine::Bounds> bounds);

  /// @brief Method GetTrianglesCount, addr 0x3b7bd6c, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetTrianglesCount(::GlobalNamespace::VertexPath* path);

  /// @brief Method GetVertexCount, addr 0x3b7bd50, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetVertexCount(::GlobalNamespace::VertexPath* path);

  static inline ::GlobalNamespace::SliderMeshConstructorCrossedStrips* New_ctor();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__triangleMap() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__triangleMap();

  constexpr void __cordl_internal_set__triangleMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x3b7bd90, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMeshConstructorCrossedStrips();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructorCrossedStrips", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMeshConstructorCrossedStrips(SliderMeshConstructorCrossedStrips&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructorCrossedStrips", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMeshConstructorCrossedStrips(SliderMeshConstructorCrossedStrips const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4177 };

  /// @brief Field _triangleMap, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____triangleMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderMeshConstructorCrossedStrips, ____triangleMap) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMeshConstructorCrossedStrips, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshConstructorCrossedStrips);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshConstructorCrossedStrips*, "", "SliderMeshConstructorCrossedStrips");
