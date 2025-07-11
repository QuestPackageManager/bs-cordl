#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneObjectTransformType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneObjectTransformType)
namespace GlobalNamespace {
struct OVRSceneObjectTransformType_Transformation;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneObjectTransformType_Transformation;
}
namespace GlobalNamespace {
class OVRSceneObjectTransformType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneObjectTransformType_Transformation);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneObjectTransformType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneObjectTransformType/Transformation
struct CORDL_TYPE OVRSceneObjectTransformType_Transformation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSceneObjectTransformType_Transformation_Unwrapped
  enum struct __OVRSceneObjectTransformType_Transformation_Unwrapped : int32_t {
    __E_Volume = static_cast<int32_t>(0x0),
    __E_Plane = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSceneObjectTransformType_Transformation_Unwrapped() const noexcept {
    return static_cast<__OVRSceneObjectTransformType_Transformation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneObjectTransformType_Transformation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSceneObjectTransformType_Transformation(int32_t value__) noexcept;

  /// @brief Field None value: I32(2)
  static ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const None;

  /// @brief Field Plane value: I32(1)
  static ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const Plane;

  /// @brief Field Volume value: I32(0)
  static ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const Volume;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8288 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneObjectTransformType_Transformation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneObjectTransformType_Transformation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSceneObjectTransformType::Transformation, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneObjectTransformType
class CORDL_TYPE OVRSceneObjectTransformType : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Transformation = ::GlobalNamespace::OVRSceneObjectTransformType_Transformation;

  /// @brief Field TransformType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_TransformType, put = __cordl_internal_set_TransformType)) ::GlobalNamespace::OVRSceneObjectTransformType_Transformation TransformType;

  static inline ::GlobalNamespace::OVRSceneObjectTransformType* New_ctor();

  constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const& __cordl_internal_get_TransformType() const;

  constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation& __cordl_internal_get_TransformType();

  constexpr void __cordl_internal_set_TransformType(::GlobalNamespace::OVRSceneObjectTransformType_Transformation value);

  /// @brief Method .ctor, addr 0x400e65c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8289 };

  /// @brief Field TransformType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRSceneObjectTransformType_Transformation ___TransformType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneObjectTransformType, ___TransformType) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneObjectTransformType, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneObjectTransformType_Transformation, "", "OVRSceneObjectTransformType/Transformation");
NEED_NO_BOX(::GlobalNamespace::OVRSceneObjectTransformType);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneObjectTransformType*, "", "OVRSceneObjectTransformType");
