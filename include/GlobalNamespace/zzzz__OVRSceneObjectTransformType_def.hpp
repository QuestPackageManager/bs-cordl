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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7972))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSceneObjectTransformType__Transformation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneObjectTransformType__Transformation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Volume value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const Volume;

  /// @brief Field Plane value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const Plane;

  /// @brief Field None value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneObjectTransformType__Transformation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneObjectTransformType
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7972)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7973))
// CS Name: ::OVRSceneObjectTransformType*
class CORDL_TYPE OVRSceneObjectTransformType : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Transformation = ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation;

  /// @brief Field TransformType, offset 0x18, size 0x4
  __declspec(property(get = __get_TransformType, put = __set_TransformType))::GlobalNamespace::__OVRSceneObjectTransformType__Transformation TransformType;

  constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation& __get_TransformType();

  constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const& __get_TransformType() const;

  constexpr void __set_TransformType(::GlobalNamespace::__OVRSceneObjectTransformType__Transformation value);

  static inline ::GlobalNamespace::OVRSceneObjectTransformType* New_ctor();

  /// @brief Method .ctor addr 0x2786ea8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneObjectTransformType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneObjectTransformType(OVRSceneObjectTransformType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneObjectTransformType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneObjectTransformType(OVRSceneObjectTransformType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneObjectTransformType();

public:
  /// @brief Field TransformType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation ___TransformType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneObjectTransformType, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneObjectTransformType__Transformation, "", "OVRSceneObjectTransformType/Transformation");
NEED_NO_BOX(::GlobalNamespace::OVRSceneObjectTransformType);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneObjectTransformType*, "", "OVRSceneObjectTransformType");
