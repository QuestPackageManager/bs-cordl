#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicBoneColliderBase)
namespace GlobalNamespace {
struct __DynamicBoneColliderBase__Bound;
}
namespace GlobalNamespace {
struct __DynamicBoneColliderBase__Direction;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __DynamicBoneColliderBase__Bound;
}
namespace GlobalNamespace {
struct __DynamicBoneColliderBase__Direction;
}
namespace GlobalNamespace {
class DynamicBoneColliderBase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DynamicBoneColliderBase__Bound);
MARK_VAL_T(::GlobalNamespace::__DynamicBoneColliderBase__Direction);
MARK_REF_PTR_T(::GlobalNamespace::DynamicBoneColliderBase);
// Type: ::Direction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DynamicBoneColliderBase::Direction
struct CORDL_TYPE __DynamicBoneColliderBase__Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DynamicBoneColliderBase__Direction_Unwrapped
  enum struct ____DynamicBoneColliderBase__Direction_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x0),
    __E_Y = static_cast<int32_t>(0x1),
    __E_Z = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DynamicBoneColliderBase__Direction_Unwrapped() const noexcept {
    return static_cast<____DynamicBoneColliderBase__Direction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicBoneColliderBase__Direction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DynamicBoneColliderBase__Direction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field X value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DynamicBoneColliderBase__Direction const X;

  /// @brief Field Y value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DynamicBoneColliderBase__Direction const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__DynamicBoneColliderBase__Direction const Z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DynamicBoneColliderBase__Direction, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBoneColliderBase__Direction, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Bound
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DynamicBoneColliderBase::Bound
struct CORDL_TYPE __DynamicBoneColliderBase__Bound {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DynamicBoneColliderBase__Bound_Unwrapped
  enum struct ____DynamicBoneColliderBase__Bound_Unwrapped : int32_t {
    __E_Outside = static_cast<int32_t>(0x0),
    __E_Inside = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DynamicBoneColliderBase__Bound_Unwrapped() const noexcept {
    return static_cast<____DynamicBoneColliderBase__Bound_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicBoneColliderBase__Bound();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DynamicBoneColliderBase__Bound(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Inside value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DynamicBoneColliderBase__Bound const Inside;

  /// @brief Field Outside value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DynamicBoneColliderBase__Bound const Outside;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DynamicBoneColliderBase__Bound, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DynamicBoneColliderBase__Bound, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DynamicBoneColliderBase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DynamicBoneColliderBase*
class CORDL_TYPE DynamicBoneColliderBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Bound = ::GlobalNamespace::__DynamicBoneColliderBase__Bound;

  using Direction = ::GlobalNamespace::__DynamicBoneColliderBase__Direction;

  /// @brief Field m_Bound, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Bound, put = __cordl_internal_set_m_Bound))::GlobalNamespace::__DynamicBoneColliderBase__Bound m_Bound;

  /// @brief Field m_Center, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Center, put = __cordl_internal_set_m_Center))::UnityEngine::Vector3 m_Center;

  /// @brief Field m_Direction, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Direction, put = __cordl_internal_set_m_Direction))::GlobalNamespace::__DynamicBoneColliderBase__Direction m_Direction;

  /// @brief Method Collide, addr 0x130c980, size 0x4, virtual true, abstract: false, final false
  inline void Collide(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius);

  static inline ::GlobalNamespace::DynamicBoneColliderBase* New_ctor();

  constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound const& __cordl_internal_get_m_Bound() const;

  constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound& __cordl_internal_get_m_Bound();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Center() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Center();

  constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction const& __cordl_internal_get_m_Direction() const;

  constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction& __cordl_internal_get_m_Direction();

  constexpr void __cordl_internal_set_m_Bound(::GlobalNamespace::__DynamicBoneColliderBase__Bound value);

  constexpr void __cordl_internal_set_m_Center(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Direction(::GlobalNamespace::__DynamicBoneColliderBase__Direction value);

  /// @brief Method .ctor, addr 0x130c91c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicBoneColliderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicBoneColliderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicBoneColliderBase(DynamicBoneColliderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicBoneColliderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicBoneColliderBase(DynamicBoneColliderBase const&) = delete;

  /// @brief Field m_Direction, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__DynamicBoneColliderBase__Direction ___m_Direction;

  /// @brief Field m_Center, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Center;

  /// @brief Field m_Bound, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__DynamicBoneColliderBase__Bound ___m_Bound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DynamicBoneColliderBase, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBoneColliderBase, ___m_Direction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBoneColliderBase, ___m_Center) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBoneColliderBase, ___m_Bound) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DynamicBoneColliderBase__Bound, "", "DynamicBoneColliderBase/Bound");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DynamicBoneColliderBase__Direction, "", "DynamicBoneColliderBase/Direction");
NEED_NO_BOX(::GlobalNamespace::DynamicBoneColliderBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBoneColliderBase*, "", "DynamicBoneColliderBase");
