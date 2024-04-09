#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneObjectTransformType)
namespace GlobalNamespace {
struct __OVRSceneObjectTransformType__Transformation;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRSceneObjectTransformType__Transformation;
}
namespace GlobalNamespace {
class OVRSceneObjectTransformType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRSceneObjectTransformType__Transformation);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneObjectTransformType);
// Type: ::Transformation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneObjectTransformType::Transformation
struct CORDL_TYPE __OVRSceneObjectTransformType__Transformation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSceneObjectTransformType__Transformation_Unwrapped
  enum struct ____OVRSceneObjectTransformType__Transformation_Unwrapped : int32_t {
    __E_Volume = static_cast<int32_t>(0x0),
    __E_Plane = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRSceneObjectTransformType__Transformation_Unwrapped() const noexcept {
    return static_cast<____OVRSceneObjectTransformType__Transformation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneObjectTransformType__Transformation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSceneObjectTransformType__Transformation(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const None;

  /// @brief Field Plane value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const Plane;

  /// @brief Field Volume value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const Volume;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneObjectTransformType__Transformation, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneObjectTransformType__Transformation, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneObjectTransformType
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneObjectTransformType*
class CORDL_TYPE OVRSceneObjectTransformType : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Transformation = ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation;

  /// @brief Field TransformType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_TransformType, put = __cordl_internal_set_TransformType))::GlobalNamespace::__OVRSceneObjectTransformType__Transformation TransformType;

  static inline ::GlobalNamespace::OVRSceneObjectTransformType* New_ctor();

  constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const& __cordl_internal_get_TransformType() const;

  constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation& __cordl_internal_get_TransformType();

  constexpr void __cordl_internal_set_TransformType(::GlobalNamespace::__OVRSceneObjectTransformType__Transformation value);

  /// @brief Method .ctor, addr 0x2a5c5cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneObjectTransformType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneObjectTransformType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneObjectTransformType(OVRSceneObjectTransformType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneObjectTransformType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneObjectTransformType(OVRSceneObjectTransformType const&) = delete;

  /// @brief Field TransformType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation ___TransformType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneObjectTransformType, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneObjectTransformType, ___TransformType) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneObjectTransformType__Transformation, "", "OVRSceneObjectTransformType/Transformation");
NEED_NO_BOX(::GlobalNamespace::OVRSceneObjectTransformType);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneObjectTransformType*, "", "OVRSceneObjectTransformType");
