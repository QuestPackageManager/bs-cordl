#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathsHolder)
namespace GlobalNamespace {
class BezierPath;
}
namespace GlobalNamespace {
class VertexPath;
}
// Forward declare root types
namespace GlobalNamespace {
class PathsHolder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PathsHolder);
// Type: ::PathsHolder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PathsHolder*
class CORDL_TYPE PathsHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bezierPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bezierPath, put = __cordl_internal_set__bezierPath))::GlobalNamespace::BezierPath* _bezierPath;

  /// @brief Field _vertexPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__vertexPath, put = __cordl_internal_set__vertexPath))::GlobalNamespace::VertexPath* _vertexPath;

  __declspec(property(get = get_bezierPath))::GlobalNamespace::BezierPath* bezierPath;

  __declspec(property(get = get_vertexPath))::GlobalNamespace::VertexPath* vertexPath;

  static inline ::GlobalNamespace::PathsHolder* New_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath);

  /// @brief Method UpdateVertexPathByBezierPath, addr 0x26999c0, size 0x20, virtual false, abstract: false, final false
  inline void UpdateVertexPathByBezierPath();

  constexpr ::GlobalNamespace::BezierPath*& __cordl_internal_get__bezierPath();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierPath*> const& __cordl_internal_get__bezierPath() const;

  constexpr ::GlobalNamespace::VertexPath*& __cordl_internal_get__vertexPath();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VertexPath*> const& __cordl_internal_get__vertexPath() const;

  constexpr void __cordl_internal_set__bezierPath(::GlobalNamespace::BezierPath* value);

  constexpr void __cordl_internal_set__vertexPath(::GlobalNamespace::VertexPath* value);

  /// @brief Method .ctor, addr 0x269934c, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath);

  /// @brief Method get_bezierPath, addr 0x269933c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BezierPath* get_bezierPath();

  /// @brief Method get_vertexPath, addr 0x2699344, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::VertexPath* get_vertexPath();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathsHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PathsHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathsHolder(PathsHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathsHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathsHolder(PathsHolder const&) = delete;

  /// @brief Field _bezierPath, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BezierPath* ____bezierPath;

  /// @brief Field _vertexPath, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::VertexPath* ____vertexPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PathsHolder, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PathsHolder, ____bezierPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PathsHolder, ____vertexPath) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PathsHolder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PathsHolder*, "", "PathsHolder");
