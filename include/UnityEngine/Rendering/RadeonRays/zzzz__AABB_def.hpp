#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/AABB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
CORDL_MODULE_EXPORT(AABB)
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class AABB;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::AABB*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::AABB*, "UnityEngine.Rendering.RadeonRays", "AABB");
// Dependencies System.Object, Unity.Mathematics.float3
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.AABB
class CORDL_TYPE AABB : public ::System::Object {
public:
  // Declarations
  /// @brief Field Max, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_Max, put = __cordl_internal_set_Max)) ::Unity::Mathematics::float3 Max;

  /// @brief Field Min, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_Min, put = __cordl_internal_set_Min)) ::Unity::Mathematics::float3 Min;

  /// @brief Method Contains, addr 0x6dfaba4, size 0x78, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Rendering::RadeonRays::AABB* rhs);

  /// @brief Method Encapsulate, addr 0x6dfaa8c, size 0x98, virtual false, abstract: false, final false
  inline void Encapsulate(::UnityEngine::Rendering::RadeonRays::AABB* aabb);

  /// @brief Method Encapsulate, addr 0x6dfab24, size 0x80, virtual false, abstract: false, final false
  inline void Encapsulate(::Unity::Mathematics::float3 point);

  /// @brief Method IsValid, addr 0x6dfac1c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::Rendering::RadeonRays::AABB* New_ctor();

  static inline ::UnityEngine::Rendering::RadeonRays::AABB* New_ctor(::Unity::Mathematics::float3 min, ::Unity::Mathematics::float3 max);

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_Max() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_Max();

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_Min() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_Min();

  constexpr void __cordl_internal_set_Max(::Unity::Mathematics::float3 value);

  constexpr void __cordl_internal_set_Min(::Unity::Mathematics::float3 value);

  /// @brief Method .ctor, addr 0x6dfaa64, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6dfaa7c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 min, ::Unity::Mathematics::float3 max);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AABB();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AABB", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AABB(AABB&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AABB", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AABB(AABB const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20416 };

  /// @brief Field Min, offset: 0x10, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___Min;

  /// @brief Field Max, offset: 0x1c, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::AABB, ___Min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::AABB, ___Max) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::AABB) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
