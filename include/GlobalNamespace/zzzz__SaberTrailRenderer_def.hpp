#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaberTrailRenderer)
namespace GlobalNamespace {
class TrailElementCollection;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTrailRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberTrailRenderer);
// Type: ::SaberTrailRenderer
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10164))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4877))
// CS Name: ::SaberTrailRenderer*
class CORDL_TYPE SaberTrailRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _meshRenderer, offset 0x18, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  /// @brief Field _meshFilter, offset 0x20, size 0x8
  __declspec(property(get = __get__meshFilter, put = __set__meshFilter))::UnityEngine::MeshFilter* _meshFilter;

  /// @brief Field _mesh, offset 0x28, size 0x8
  __declspec(property(get = __get__mesh, put = __set__mesh))::UnityEngine::Mesh* _mesh;

  /// @brief Field _vertices, offset 0x30, size 0x8
  __declspec(property(get = __get__vertices, put = __set__vertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _vertices;

  /// @brief Field _indices, offset 0x38, size 0x8
  __declspec(property(get = __get__indices, put = __set__indices))::ArrayW<int32_t, ::Array<int32_t>*> _indices;

  /// @brief Field _uvs, offset 0x40, size 0x8
  __declspec(property(get = __get__uvs, put = __set__uvs))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _uvs;

  /// @brief Field _colors, offset 0x48, size 0x8
  __declspec(property(get = __get__colors, put = __set__colors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _colors;

  /// @brief Field _trailWidth, offset 0x50, size 0x4
  __declspec(property(get = __get__trailWidth, put = __set__trailWidth)) float_t _trailWidth;

  /// @brief Field _trailDuration, offset 0x54, size 0x4
  __declspec(property(get = __get__trailDuration, put = __set__trailDuration)) float_t _trailDuration;

  /// @brief Field _segmentDuration, offset 0x58, size 0x4
  __declspec(property(get = __get__segmentDuration, put = __set__segmentDuration)) float_t _segmentDuration;

  /// @brief Field _granularity, offset 0x5c, size 0x4
  __declspec(property(get = __get__granularity, put = __set__granularity)) int32_t _granularity;

  /// @brief Field _whiteSectionMaxDuration, offset 0x60, size 0x4
  __declspec(property(get = __get__whiteSectionMaxDuration, put = __set__whiteSectionMaxDuration)) float_t _whiteSectionMaxDuration;

  /// @brief Field _bounds, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF__bounds, put = setStaticF__bounds))::UnityEngine::Bounds _bounds;

  /// @brief Field _saberTravelledDistanceId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__saberTravelledDistanceId, put = setStaticF__saberTravelledDistanceId)) int32_t _saberTravelledDistanceId;

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::UnityEngine::MeshFilter*& __get__meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__meshFilter() const;

  constexpr void __set__meshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::Mesh*& __get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__mesh() const;

  constexpr void __set__mesh(::UnityEngine::Mesh* value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__vertices();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__vertices() const;

  constexpr void __set__vertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__indices();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__indices() const;

  constexpr void __set__indices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __get__uvs();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __get__uvs() const;

  constexpr void __set__uvs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __get__colors();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __get__colors() const;

  constexpr void __set__colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr float_t& __get__trailWidth();

  constexpr float_t const& __get__trailWidth() const;

  constexpr void __set__trailWidth(float_t value);

  constexpr float_t& __get__trailDuration();

  constexpr float_t const& __get__trailDuration() const;

  constexpr void __set__trailDuration(float_t value);

  constexpr float_t& __get__segmentDuration();

  constexpr float_t const& __get__segmentDuration() const;

  constexpr void __set__segmentDuration(float_t value);

  constexpr int32_t& __get__granularity();

  constexpr int32_t const& __get__granularity() const;

  constexpr void __set__granularity(int32_t value);

  constexpr float_t& __get__whiteSectionMaxDuration();

  constexpr float_t const& __get__whiteSectionMaxDuration() const;

  constexpr void __set__whiteSectionMaxDuration(float_t value);

  static inline void setStaticF__bounds(::UnityEngine::Bounds value);

  static inline ::UnityEngine::Bounds getStaticF__bounds();

  static inline void setStaticF__saberTravelledDistanceId(int32_t value);

  static inline int32_t getStaticF__saberTravelledDistanceId();

  /// @brief Method Init, addr 0x239fa90, size 0x174, virtual true, abstract: false, final false
  inline void Init(float_t trailWidth, float_t trailDuration, int32_t granularity, float_t whiteSectionMaxDuration);

  /// @brief Method OnDestroy, addr 0x239fd5c, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnValidate, addr 0x239fd68, size 0xd8, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method OnEnable, addr 0x239fe40, size 0x84, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x239fec4, size 0x84, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method SetTrailWidth, addr 0x239ff48, size 0x8, virtual false, abstract: false, final false
  inline void SetTrailWidth(float_t width);

  /// @brief Method UpdateMesh, addr 0x239f578, size 0x134, virtual false, abstract: false, final false
  inline void UpdateMesh(::GlobalNamespace::TrailElementCollection* trailElementCollection, ::UnityEngine::Color color);

  /// @brief Method UpdateVertices, addr 0x239ff50, size 0x470, virtual true, abstract: false, final false
  inline void UpdateVertices(::GlobalNamespace::TrailElementCollection* trailElementCollection, ::UnityEngine::Color color);

  /// @brief Method UpdateIndices, addr 0x239fc04, size 0x158, virtual false, abstract: false, final false
  inline void UpdateIndices();

  static inline ::GlobalNamespace::SaberTrailRenderer* New_ctor();

  /// @brief Method .ctor, addr 0x23a0654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberTrailRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberTrailRenderer(SaberTrailRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberTrailRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberTrailRenderer(SaberTrailRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberTrailRenderer();

public:
  /// @brief Field _meshRenderer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

  /// @brief Field _meshFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____meshFilter;

  /// @brief Field _mesh, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____mesh;

  /// @brief Field _vertices, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____vertices;

  /// @brief Field _indices, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____indices;

  /// @brief Field _uvs, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ____uvs;

  /// @brief Field _colors, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____colors;

  /// @brief Field _trailWidth, offset: 0x50, size: 0x4, def value: None
  float_t ____trailWidth;

  /// @brief Field _trailDuration, offset: 0x54, size: 0x4, def value: None
  float_t ____trailDuration;

  /// @brief Field _segmentDuration, offset: 0x58, size: 0x4, def value: None
  float_t ____segmentDuration;

  /// @brief Field _granularity, offset: 0x5c, size: 0x4, def value: None
  int32_t ____granularity;

  /// @brief Field _whiteSectionMaxDuration, offset: 0x60, size: 0x4, def value: None
  float_t ____whiteSectionMaxDuration;

  /// @brief Field kMinMotionBlurSpeed offset 0xffffffff size 0x4
  static constexpr float_t kMinMotionBlurSpeed{ 2.5 };

  /// @brief Field kMotionBlurStrength offset 0xffffffff size 0x4
  static constexpr float_t kMotionBlurStrength{ 0.8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberTrailRenderer, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____meshRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____meshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____mesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____vertices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____indices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____uvs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____colors) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____trailWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____trailDuration) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____segmentDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____granularity) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____whiteSectionMaxDuration) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberTrailRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTrailRenderer*, "", "SaberTrailRenderer");
