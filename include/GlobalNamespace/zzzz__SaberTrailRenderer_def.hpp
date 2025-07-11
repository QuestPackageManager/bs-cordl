#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberTrailRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
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
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberTrailRenderer
class CORDL_TYPE SaberTrailRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bounds, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF__bounds, put = setStaticF__bounds)) ::UnityEngine::Bounds _bounds;

  /// @brief Field _colors, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _colors;

  /// @brief Field _granularity, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__granularity, put = __cordl_internal_set__granularity)) int32_t _granularity;

  /// @brief Field _indices, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__indices, put = __cordl_internal_set__indices)) ::ArrayW<int32_t, ::Array<int32_t>*> _indices;

  /// @brief Field _inverseGranularity, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__inverseGranularity, put = __cordl_internal_set__inverseGranularity)) float_t _inverseGranularity;

  /// @brief Field _inverseSegmentDuration, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__inverseSegmentDuration, put = __cordl_internal_set__inverseSegmentDuration)) float_t _inverseSegmentDuration;

  /// @brief Field _inverseTrailDuration, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__inverseTrailDuration, put = __cordl_internal_set__inverseTrailDuration)) float_t _inverseTrailDuration;

  /// @brief Field _mesh, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshFilter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _meshRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _saberTravelledDistanceId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__saberTravelledDistanceId, put = setStaticF__saberTravelledDistanceId)) int32_t _saberTravelledDistanceId;

  /// @brief Field _trailWidth, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__trailWidth, put = __cordl_internal_set__trailWidth)) float_t _trailWidth;

  /// @brief Field _uvs, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__uvs, put = __cordl_internal_set__uvs)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _uvs;

  /// @brief Field _vertices, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__vertices, put = __cordl_internal_set__vertices)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _vertices;

  /// @brief Field _whiteSectionMaxDuration, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__whiteSectionMaxDuration, put = __cordl_internal_set__whiteSectionMaxDuration)) float_t _whiteSectionMaxDuration;

  /// @brief Method Init, addr 0x4088188, size 0x17c, virtual true, abstract: false, final false
  inline void Init(float_t trailWidth, float_t trailDuration, int32_t granularity, float_t whiteSectionMaxDuration);

  static inline ::GlobalNamespace::SaberTrailRenderer* New_ctor();

  /// @brief Method OnDestroy, addr 0x408845c, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x40885c4, size 0x84, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4088540, size 0x84, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x4088468, size 0xd8, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetTrailWidth, addr 0x4088648, size 0x8, virtual false, abstract: false, final false
  inline void SetTrailWidth(float_t width);

  /// @brief Method UpdateIndices, addr 0x4088304, size 0x158, virtual false, abstract: false, final false
  inline void UpdateIndices();

  /// @brief Method UpdateMesh, addr 0x4087c74, size 0x134, virtual false, abstract: false, final false
  inline void UpdateMesh(::GlobalNamespace::TrailElementCollection* trailElementCollection, ::UnityEngine::Color color);

  /// @brief Method UpdateVertices, addr 0x4088650, size 0x440, virtual true, abstract: false, final false
  inline void UpdateVertices(::GlobalNamespace::TrailElementCollection* trailElementCollection, ::UnityEngine::Color color);

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get__colors();

  constexpr int32_t const& __cordl_internal_get__granularity() const;

  constexpr int32_t& __cordl_internal_get__granularity();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__indices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__indices();

  constexpr float_t const& __cordl_internal_get__inverseGranularity() const;

  constexpr float_t& __cordl_internal_get__inverseGranularity();

  constexpr float_t const& __cordl_internal_get__inverseSegmentDuration() const;

  constexpr float_t& __cordl_internal_get__inverseSegmentDuration();

  constexpr float_t const& __cordl_internal_get__inverseTrailDuration() const;

  constexpr float_t& __cordl_internal_get__inverseTrailDuration();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr float_t const& __cordl_internal_get__trailWidth() const;

  constexpr float_t& __cordl_internal_get__trailWidth();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__uvs() const;

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__uvs();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__vertices() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__vertices();

  constexpr float_t const& __cordl_internal_get__whiteSectionMaxDuration() const;

  constexpr float_t& __cordl_internal_get__whiteSectionMaxDuration();

  constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set__granularity(int32_t value);

  constexpr void __cordl_internal_set__indices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__inverseGranularity(float_t value);

  constexpr void __cordl_internal_set__inverseSegmentDuration(float_t value);

  constexpr void __cordl_internal_set__inverseTrailDuration(float_t value);

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__trailWidth(float_t value);

  constexpr void __cordl_internal_set__uvs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr void __cordl_internal_set__vertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__whiteSectionMaxDuration(float_t value);

  /// @brief Method .ctor, addr 0x4088d24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Bounds getStaticF__bounds();

  static inline int32_t getStaticF__saberTravelledDistanceId();

  static inline void setStaticF__bounds(::UnityEngine::Bounds value);

  static inline void setStaticF__saberTravelledDistanceId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberTrailRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberTrailRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberTrailRenderer(SaberTrailRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberTrailRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberTrailRenderer(SaberTrailRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18833 };

  /// @brief Field kMinMotionBlurSpeed offset 0xffffffff size 0x4
  static constexpr float_t kMinMotionBlurSpeed{ static_cast<float_t>(2.5f) };

  /// @brief Field kMotionBlurStrength offset 0xffffffff size 0x4
  static constexpr float_t kMotionBlurStrength{ static_cast<float_t>(0.8f) };

  /// @brief Field _meshRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _meshFilter, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field _mesh, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief Field _vertices, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____vertices;

  /// @brief Field _indices, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____indices;

  /// @brief Field _uvs, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ____uvs;

  /// @brief Field _colors, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____colors;

  /// @brief Field _trailWidth, offset: 0x58, size: 0x4, def value: None
  float_t ____trailWidth;

  /// @brief Field _inverseTrailDuration, offset: 0x5c, size: 0x4, def value: None
  float_t ____inverseTrailDuration;

  /// @brief Field _inverseSegmentDuration, offset: 0x60, size: 0x4, def value: None
  float_t ____inverseSegmentDuration;

  /// @brief Field _granularity, offset: 0x64, size: 0x4, def value: None
  int32_t ____granularity;

  /// @brief Field _inverseGranularity, offset: 0x68, size: 0x4, def value: None
  float_t ____inverseGranularity;

  /// @brief Field _whiteSectionMaxDuration, offset: 0x6c, size: 0x4, def value: None
  float_t ____whiteSectionMaxDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____meshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____meshFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____mesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____vertices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____indices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____uvs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____colors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____trailWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____inverseTrailDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____inverseSegmentDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____granularity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____inverseGranularity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrailRenderer, ____whiteSectionMaxDuration) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberTrailRenderer, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberTrailRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTrailRenderer*, "", "SaberTrailRenderer");
