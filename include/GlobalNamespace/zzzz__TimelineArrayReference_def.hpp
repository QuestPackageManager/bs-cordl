#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineArrayReference)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
struct __TimelineArrayReference__ArrayTypes;
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
struct __TimelineArrayReference__ArrayTypes;
}
namespace GlobalNamespace {
class TimelineArrayReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TimelineArrayReference__ArrayTypes);
MARK_REF_PTR_T(::GlobalNamespace::TimelineArrayReference);
// Type: ::ArrayTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TimelineArrayReference::ArrayTypes
struct CORDL_TYPE __TimelineArrayReference__ArrayTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimelineArrayReference__ArrayTypes_Unwrapped
  enum struct ____TimelineArrayReference__ArrayTypes_Unwrapped : int32_t {
    __E_TubeLight = static_cast<int32_t>(0x0),
    __E_Transform = static_cast<int32_t>(0x1),
    __E_Canvas = static_cast<int32_t>(0x2),
    __E_TextMeshPro = static_cast<int32_t>(0x3),
    __E_DirectionalLight = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimelineArrayReference__ArrayTypes_Unwrapped() const noexcept {
    return static_cast<____TimelineArrayReference__ArrayTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____TimelineArrayReference__ArrayTypes_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineArrayReference__ArrayTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineArrayReference__ArrayTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Canvas value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const Canvas;

  /// @brief Field DirectionalLight value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const DirectionalLight;

  /// @brief Field TextMeshPro value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const TextMeshPro;

  /// @brief Field Transform value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const Transform;

  /// @brief Field TubeLight value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const TubeLight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TimelineArrayReference__ArrayTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TimelineArrayReference__ArrayTypes, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TimelineArrayReference
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TimelineArrayReference*
class CORDL_TYPE TimelineArrayReference : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ArrayTypes = ::GlobalNamespace::__TimelineArrayReference__ArrayTypes;

  /// @brief Field _canvasGroupArray, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroupArray,
                      put = __cordl_internal_set__canvasGroupArray))::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> _canvasGroupArray;

  /// @brief Field _directionalLights, offset 0x40, size 0x8
  __declspec(
      property(get = __cordl_internal_get__directionalLights,
               put = __cordl_internal_set__directionalLights))::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> _directionalLights;

  /// @brief Field _tmproArray, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tmproArray, put = __cordl_internal_set__tmproArray))::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> _tmproArray;

  /// @brief Field _transformArray, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__transformArray,
                      put = __cordl_internal_set__transformArray))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> _transformArray;

  /// @brief Field _tubeLightArray, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__tubeLightArray,
               put = __cordl_internal_set__tubeLightArray))::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> _tubeLightArray;

  /// @brief Field arrayType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_arrayType, put = __cordl_internal_set_arrayType))::GlobalNamespace::__TimelineArrayReference__ArrayTypes arrayType;

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

  constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const& __cordl_internal_get_arrayType() const;

  constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes& __cordl_internal_get_arrayType();

  constexpr void __cordl_internal_set__canvasGroupArray(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> value);

  constexpr void __cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value);

  constexpr void __cordl_internal_set__tmproArray(::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> value);

  constexpr void __cordl_internal_set__transformArray(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__tubeLightArray(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  constexpr void __cordl_internal_set_arrayType(::GlobalNamespace::__TimelineArrayReference__ArrayTypes value);

  /// @brief Method .ctor, addr 0x2411c10, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field arrayType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__TimelineArrayReference__ArrayTypes ___arrayType;

  /// @brief Field _tubeLightArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____tubeLightArray;

  /// @brief Field _canvasGroupArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> ____canvasGroupArray;

  /// @brief Field _tmproArray, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> ____tmproArray;

  /// @brief Field _transformArray, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____transformArray;

  /// @brief Field _directionalLights, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> ____directionalLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelineArrayReference, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ___arrayType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____tubeLightArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____canvasGroupArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____tmproArray) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____transformArray) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimelineArrayReference, ____directionalLights) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TimelineArrayReference__ArrayTypes, "", "TimelineArrayReference/ArrayTypes");
NEED_NO_BOX(::GlobalNamespace::TimelineArrayReference);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelineArrayReference*, "", "TimelineArrayReference");
