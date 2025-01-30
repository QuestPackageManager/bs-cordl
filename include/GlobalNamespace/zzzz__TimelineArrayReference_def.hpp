#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelineArrayReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineArrayReference)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
struct TimelineArrayReference_ArrayTypes;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimelineArrayReference_ArrayTypes;
}
namespace GlobalNamespace {
class TimelineArrayReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimelineArrayReference_ArrayTypes);
MARK_REF_PTR_T(::GlobalNamespace::TimelineArrayReference);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: TimelineArrayReference/ArrayTypes
struct CORDL_TYPE TimelineArrayReference_ArrayTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimelineArrayReference_ArrayTypes_Unwrapped
  enum struct __TimelineArrayReference_ArrayTypes_Unwrapped : int32_t {
    __E_TubeLight = static_cast<int32_t>(0x0),
    __E_Transform = static_cast<int32_t>(0x1),
    __E_Canvas = static_cast<int32_t>(0x2),
    __E_TextMeshPro = static_cast<int32_t>(0x3),
    __E_DirectionalLight = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimelineArrayReference_ArrayTypes_Unwrapped() const noexcept {
    return static_cast<__TimelineArrayReference_ArrayTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineArrayReference_ArrayTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimelineArrayReference_ArrayTypes(int32_t value__) noexcept;

  /// @brief Field Canvas value: I32(2)
  static ::GlobalNamespace::TimelineArrayReference_ArrayTypes const Canvas;

  /// @brief Field DirectionalLight value: I32(4)
  static ::GlobalNamespace::TimelineArrayReference_ArrayTypes const DirectionalLight;

  /// @brief Field TextMeshPro value: I32(3)
  static ::GlobalNamespace::TimelineArrayReference_ArrayTypes const TextMeshPro;

  /// @brief Field Transform value: I32(1)
  static ::GlobalNamespace::TimelineArrayReference_ArrayTypes const Transform;

  /// @brief Field TubeLight value: I32(0)
  static ::GlobalNamespace::TimelineArrayReference_ArrayTypes const TubeLight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5207 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelineArrayReference_ArrayTypes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelineArrayReference_ArrayTypes, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TimelineArrayReference::ArrayTypes, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimelineArrayReference
class CORDL_TYPE TimelineArrayReference : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ArrayTypes = ::GlobalNamespace::TimelineArrayReference_ArrayTypes;

  /// @brief Field _canvasGroupArray, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroupArray,
                      put = __cordl_internal_set__canvasGroupArray)) ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>
      _canvasGroupArray;

  /// @brief Field _directionalLights, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLights,
                      put = __cordl_internal_set__directionalLights)) ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>
      _directionalLights;

  /// @brief Field _tmproArray, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tmproArray, put = __cordl_internal_set__tmproArray)) ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> _tmproArray;

  /// @brief Field _transformArray, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transformArray,
                      put = __cordl_internal_set__transformArray)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
      _transformArray;

  /// @brief Field _tubeLightArray, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeLightArray,
                      put = __cordl_internal_set__tubeLightArray)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>
      _tubeLightArray;

  /// @brief Field arrayType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_arrayType, put = __cordl_internal_set_arrayType)) ::GlobalNamespace::TimelineArrayReference_ArrayTypes arrayType;

  static inline ::GlobalNamespace::TimelineArrayReference* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> const& __cordl_internal_get__canvasGroupArray() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>& __cordl_internal_get__canvasGroupArray();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> const& __cordl_internal_get__directionalLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>& __cordl_internal_get__directionalLights();

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> const& __cordl_internal_get__tmproArray() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*>& __cordl_internal_get__tmproArray();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transformArray() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transformArray();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__tubeLightArray() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__tubeLightArray();

  constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes const& __cordl_internal_get_arrayType() const;

  constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes& __cordl_internal_get_arrayType();

  constexpr void __cordl_internal_set__canvasGroupArray(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> value);

  constexpr void __cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value);

  constexpr void __cordl_internal_set__tmproArray(::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> value);

  constexpr void __cordl_internal_set__transformArray(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__tubeLightArray(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  constexpr void __cordl_internal_set_arrayType(::GlobalNamespace::TimelineArrayReference_ArrayTypes value);

  /// @brief Method .ctor, addr 0x3b381a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineArrayReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineArrayReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineArrayReference(TimelineArrayReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineArrayReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineArrayReference(TimelineArrayReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5208 };

  /// @brief Field arrayType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::TimelineArrayReference_ArrayTypes ___arrayType;

  /// @brief Field _tubeLightArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____tubeLightArray;

  /// @brief Field _canvasGroupArray, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> ____canvasGroupArray;

  /// @brief Field _tmproArray, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> ____tmproArray;

  /// @brief Field _transformArray, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____transformArray;

  /// @brief Field _directionalLights, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> ____directionalLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ___arrayType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____tubeLightArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____canvasGroupArray) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____tmproArray) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____transformArray) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____directionalLights) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelineArrayReference, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelineArrayReference_ArrayTypes, "", "TimelineArrayReference/ArrayTypes");
NEED_NO_BOX(::GlobalNamespace::TimelineArrayReference);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelineArrayReference*, "", "TimelineArrayReference");
