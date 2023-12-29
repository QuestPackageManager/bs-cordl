#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Bounds2D)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Rect;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Bounds2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Bounds2D);
// Type: UnityEngine.ProBuilder::Bounds2D
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12033))
// CS Name: ::UnityEngine.ProBuilder::Bounds2D*
class CORDL_TYPE Bounds2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field center, offset 0x10, size 0x8
  __declspec(property(get = __get_center, put = __set_center))::UnityEngine::Vector2 center;

  /// @brief Field m_Size, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Size, put = __set_m_Size))::UnityEngine::Vector2 m_Size;

  /// @brief Field m_Extents, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Extents, put = __set_m_Extents))::UnityEngine::Vector2 m_Extents;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector2 size;

  __declspec(property(get = get_extents))::UnityEngine::Vector2 extents;

  __declspec(property(get = get_corners))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> corners;

  constexpr ::UnityEngine::Vector2& __get_center();

  constexpr ::UnityEngine::Vector2 const& __get_center() const;

  constexpr void __set_center(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_Size();

  constexpr ::UnityEngine::Vector2 const& __get_m_Size() const;

  constexpr void __set_m_Size(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_Extents();

  constexpr ::UnityEngine::Vector2 const& __get_m_Extents() const;

  constexpr void __set_m_Extents(::UnityEngine::Vector2 value);

  /// @brief Method get_size addr 0x29b6840 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method set_size addr 0x29b6848 size 0x18 virtual false final false
  inline void set_size(::UnityEngine::Vector2 value);

  /// @brief Method get_extents addr 0x29b6860 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_extents();

  /// @brief Method get_corners addr 0x29b6868 size 0xc8 virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_corners();

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor();

  /// @brief Method .ctor addr 0x29b6930 size 0x70 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size);

  /// @brief Method .ctor addr 0x29b69a0 size 0xac virtual false final false
  inline void _ctor(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  /// @brief Method .ctor addr 0x29b6a4c size 0x80 virtual false final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method .ctor addr 0x29b6dbc size 0x90 virtual false final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points,
                                                              ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges);

  /// @brief Method .ctor addr 0x29b73ac size 0x1c4 virtual false final false
  inline void _ctor(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points, ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges);

  static inline ::UnityEngine::ProBuilder::Bounds2D* New_ctor(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> points, int32_t length);

  /// @brief Method .ctor addr 0x29b7570 size 0x14c virtual false final false
  inline void _ctor(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> points, int32_t length);

  /// @brief Method ContainsPoint addr 0x29b76bc size 0x54 virtual false final false
  inline bool ContainsPoint(::UnityEngine::Vector2 point);

  /// @brief Method IntersectsLineSegment addr 0x29b7710 size 0x198 virtual false final false
  inline bool IntersectsLineSegment(::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);

  /// @brief Method Intersects addr 0x29b7920 size 0x64 virtual false final false
  inline bool Intersects(::UnityEngine::ProBuilder::Bounds2D* bounds);

  /// @brief Method Intersects addr 0x29b7984 size 0x90 virtual false final false
  inline bool Intersects(::UnityEngine::Rect rect);

  /// @brief Method SetWithPoints addr 0x29b6acc size 0x2f0 virtual false final false
  inline void SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  /// @brief Method SetWithPoints addr 0x29b6e4c size 0x560 virtual false final false
  inline void SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Center addr 0x29b7a14 size 0x2b4 virtual false final false
  static inline ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  /// @brief Method Center addr 0x29b7cc8 size 0x458 virtual false final false
  static inline ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Size addr 0x29b8120 size 0x44c virtual false final false
  static inline ::UnityEngine::Vector2 Size(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Center addr 0x29b856c size 0x540 virtual false final false
  static inline ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* points, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method ToString addr 0x29b8aac size 0x1bc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Bounds2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bounds2D(Bounds2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bounds2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bounds2D(Bounds2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bounds2D();

public:
  /// @brief Field center, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___center;

  /// @brief Field m_Size, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Size;

  /// @brief Field m_Extents, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Extents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Bounds2D, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Bounds2D, ___center) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Bounds2D, ___m_Size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Bounds2D, ___m_Extents) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Bounds2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Bounds2D*, "UnityEngine.ProBuilder", "Bounds2D");
