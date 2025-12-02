#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatTextureProcessor3DParameterEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatTextureProcessor3DParameterEffectTarget)
namespace GlobalNamespace {
struct FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel;
}
namespace GlobalNamespace {
struct FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter;
}
namespace GlobalNamespace {
class TextureProcessor3D;
}
// Forward declare root types
namespace GlobalNamespace {
struct FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel;
}
namespace GlobalNamespace {
struct FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter;
}
namespace GlobalNamespace {
class FloatTextureProcessor3DParameterEffectTarget;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel);
MARK_VAL_T(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter);
MARK_REF_PTR_T(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: FloatTextureProcessor3DParameterEffectTarget/TextureProcessor3DParameter
struct CORDL_TYPE FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter_Unwrapped
  enum struct __FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter_Unwrapped : int32_t {
    __E_ComputeKernel = static_cast<int32_t>(0x0),
    __E_TextureIndex = static_cast<int32_t>(0x1),
    __E_Speed = static_cast<int32_t>(0x2),
    __E_SpatialScale = static_cast<int32_t>(0x3),
    __E_Phase = static_cast<int32_t>(0x4),
    __E_Param1 = static_cast<int32_t>(0x5),
    __E_Param2 = static_cast<int32_t>(0x6),
    __E_OutputOffset = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter_Unwrapped() const noexcept {
    return static_cast<__FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter(int32_t value__) noexcept;

  /// @brief Field ComputeKernel value: I32(0)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const ComputeKernel;

  /// @brief Field OutputOffset value: I32(7)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const OutputOffset;

  /// @brief Field Param1 value: I32(5)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const Param1;

  /// @brief Field Param2 value: I32(6)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const Param2;

  /// @brief Field Phase value: I32(4)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const Phase;

  /// @brief Field SpatialScale value: I32(3)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const SpatialScale;

  /// @brief Field Speed value: I32(2)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const Speed;

  /// @brief Field TextureIndex value: I32(1)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const TextureIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5850 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: FloatTextureProcessor3DParameterEffectTarget/TextureProcessor3DChannel
struct CORDL_TYPE FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel_Unwrapped
  enum struct __FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel_Unwrapped : int32_t {
    __E_A = static_cast<int32_t>(0x0),
    __E_B = static_cast<int32_t>(0x1),
    __E_C = static_cast<int32_t>(0x2),
    __E_D = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel_Unwrapped() const noexcept {
    return static_cast<__FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel(int32_t value__) noexcept;

  /// @brief Field A value: I32(0)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel const A;

  /// @brief Field B value: I32(1)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel const B;

  /// @brief Field C value: I32(2)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel const C;

  /// @brief Field D value: I32(3)
  static ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel const D;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5851 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FloatFxGroupEffectTarget, FloatTextureProcessor3DParameterEffectTarget::TextureProcessor3DChannel, FloatTextureProcessor3DParameterEffectTarget::TextureProcessor3DParameter,
// UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatTextureProcessor3DParameterEffectTarget
class CORDL_TYPE FloatTextureProcessor3DParameterEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  using TextureProcessor3DChannel = ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel;

  using TextureProcessor3DParameter = ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter;

  /// @brief Field _channel, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__channel, put = __cordl_internal_set__channel)) ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel _channel;

  /// @brief Field _parameter, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__parameter,
                      put = __cordl_internal_set__parameter)) ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter _parameter;

  /// @brief Field _textureProcessor3D, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__textureProcessor3D, put = __cordl_internal_set__textureProcessor3D)) ::UnityW<::GlobalNamespace::TextureProcessor3D> _textureProcessor3D;

  /// @brief Field _valueBounds, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__valueBounds, put = __cordl_internal_set__valueBounds)) ::UnityEngine::Vector2 _valueBounds;

  static inline ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget* New_ctor();

  /// @brief Method SetFloat, addr 0x577badc, size 0xcfc, virtual false, abstract: false, final false
  inline void SetFloat(float_t value);

  /// @brief Method SetValue, addr 0x577bad8, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x577c7d8, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel const& __cordl_internal_get__channel() const;

  constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel& __cordl_internal_get__channel();

  constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const& __cordl_internal_get__parameter() const;

  constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter& __cordl_internal_get__parameter();

  constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D> const& __cordl_internal_get__textureProcessor3D() const;

  constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D>& __cordl_internal_get__textureProcessor3D();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__valueBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__valueBounds();

  constexpr void __cordl_internal_set__channel(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel value);

  constexpr void __cordl_internal_set__parameter(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter value);

  constexpr void __cordl_internal_set__textureProcessor3D(::UnityW<::GlobalNamespace::TextureProcessor3D> value);

  constexpr void __cordl_internal_set__valueBounds(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x577c7dc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTextureProcessor3DParameterEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatTextureProcessor3DParameterEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatTextureProcessor3DParameterEffectTarget(FloatTextureProcessor3DParameterEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatTextureProcessor3DParameterEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatTextureProcessor3DParameterEffectTarget(FloatTextureProcessor3DParameterEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5852 };

  /// @brief Field _textureProcessor3D, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextureProcessor3D> ____textureProcessor3D;

  /// @brief Field _parameter, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter ____parameter;

  /// @brief Field _channel, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel ____channel;

  /// @brief Field _valueBounds, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____valueBounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget, ____textureProcessor3D) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget, ____parameter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget, ____channel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget, ____valueBounds) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel, "", "FloatTextureProcessor3DParameterEffectTarget/TextureProcessor3DChannel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter, "", "FloatTextureProcessor3DParameterEffectTarget/TextureProcessor3DParameter");
NEED_NO_BOX(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*, "", "FloatTextureProcessor3DParameterEffectTarget");
