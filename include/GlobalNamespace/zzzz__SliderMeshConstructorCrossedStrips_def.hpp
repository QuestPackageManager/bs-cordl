#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderMeshConstructor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SliderMeshConstructorCrossedStrips)
namespace GlobalNamespace {
class VertexPath;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshConstructorCrossedStrips;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMeshConstructorCrossedStrips);
// Type: ::SliderMeshConstructorCrossedStrips
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4822))
// CS Name: ::SliderMeshConstructorCrossedStrips*
class CORDL_TYPE SliderMeshConstructorCrossedStrips : public ::GlobalNamespace::SliderMeshConstructor {
public:
  // Declarations
  /// @brief Field _triangleMap, offset 0x48, size 0x8
  __declspec(property(get = __get__triangleMap, put = __set__triangleMap))::ArrayW<int32_t, ::Array<int32_t>*> _triangleMap;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__triangleMap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__triangleMap() const;

  constexpr void __set__triangleMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method CreateSliderMeshInternal, addr 0x2394750, size 0x3bc, virtual true, abstract: false, final false
  inline void CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path);

  /// @brief Method GetVertexCount, addr 0x2394b0c, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetVertexCount(::GlobalNamespace::VertexPath* path);

  /// @brief Method GetTrianglesCount, addr 0x2394b28, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetTrianglesCount(::GlobalNamespace::VertexPath* path);

  static inline ::GlobalNamespace::SliderMeshConstructorCrossedStrips* New_ctor();

  /// @brief Method .ctor, addr 0x2394b4c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructorCrossedStrips", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMeshConstructorCrossedStrips(SliderMeshConstructorCrossedStrips&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructorCrossedStrips", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMeshConstructorCrossedStrips(SliderMeshConstructorCrossedStrips const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMeshConstructorCrossedStrips();

public:
  /// @brief Field _triangleMap, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____triangleMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMeshConstructorCrossedStrips, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructorCrossedStrips, ____triangleMap) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshConstructorCrossedStrips);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshConstructorCrossedStrips*, "", "SliderMeshConstructorCrossedStrips");
