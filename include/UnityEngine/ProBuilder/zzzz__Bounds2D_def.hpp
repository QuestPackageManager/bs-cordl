#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Bounds2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Bounds2D)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Bounds2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Bounds2D);
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Bounds2D
class CORDL_TYPE Bounds2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field center, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_center, put = __cordl_internal_set_center)) ::UnityEngine::Vector2 center;

  __declspec(property(get = get_corners)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> corners;

  __declspec(property(get = get_extents)) ::UnityEngine::Vector2 extents;

  /// @brief Field m_Extents, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Extents, put = __cordl_internal_set_m_Extents)) ::UnityEngine::Vector2 m_Extents;

  /// @brief Field m_Size, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) ::UnityEngine::Vector2 m_Size;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector2 size;

  /// @brief Method Center, addr 0x470f980, size 0x2b4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  /// @brief Method Center, addr 0x470fc34, size 0x458, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Center, addr 0x47104d8, size 0x544, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* points, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method ContainsPoint, addr 0x470f6a4, size 0x54, virtual false, abstract: false, final false
  inline bool ContainsPoint(::UnityEngine::Vector2 point);

  /// @brief Method Intersects, addr 0x470f908, size 0x3c, virtual false, abstract: false, final false
  inline bool Intersects(::UnityEngine::ProBuilder::Bounds2D* bounds);

  /// @brief Method Intersects, addr 0x470f944, size 0x3c, virtual false, abstract: false, final false
  inline bool Intersects(::UnityEngine::Rect rect);

  /// @brief Method IntersectsLineSegment, addr 0x470f6f8, size 0x198, virtual false, abstract: false, final false
  inline bool IntersectsLineSegment(::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor();

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> points, int32_t length);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points,
                                                              ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method SetWithPoints, addr 0x470eab8, size 0x2f0, virtual false, abstract: false, final false
  inline void SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  /// @brief Method SetWithPoints, addr 0x470ee38, size 0x560, virtual false, abstract: false, final false
  inline void SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Size, addr 0x471008c, size 0x44c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Size(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method ToString, addr 0x4710a1c, size 0x134, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_center() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_center();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Extents() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Extents();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Size() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Size();

  constexpr void __cordl_internal_set_center(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Extents(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Size(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x470e91c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x470e98c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size);

  /// @brief Method .ctor, addr 0x470f55c, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> points, int32_t length);

  /// @brief Method .ctor, addr 0x470f398, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points, ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges);

  /// @brief Method .ctor, addr 0x470ea38, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  /// @brief Method .ctor, addr 0x470eda8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method get_corners, addr 0x470e854, size 0xc8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_corners();

  /// @brief Method get_extents, addr 0x470e84c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_extents();

  /// @brief Method get_size, addr 0x470e82c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method set_size, addr 0x470e834, size 0x18, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bounds2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bounds2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bounds2D(Bounds2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bounds2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bounds2D(Bounds2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14223 };

  /// @brief Field center, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___center;

  /// @brief Field m_Size, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Size;

  /// @brief Field m_Extents, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Extents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Bounds2D, ___center) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Bounds2D, ___m_Size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Bounds2D, ___m_Extents) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Bounds2D, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Bounds2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Bounds2D*, "UnityEngine.ProBuilder", "Bounds2D");
