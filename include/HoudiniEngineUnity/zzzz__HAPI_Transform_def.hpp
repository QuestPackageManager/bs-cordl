#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_Transform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_Transform)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Transform);
// Dependencies HoudiniEngineUnity.HAPI_RSTOrder
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_Transform
struct CORDL_TYPE HAPI_Transform {
public:
  // Declarations
  /// @brief Method Init, addr 0x3a47f64, size 0xe0, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method .ctor, addr 0x3a3ee7c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(bool initializeFields);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_Transform();

  // Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rotationQuaternion", ty:
  // "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name:
  // "shear", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rstOrder", ty: "::HoudiniEngineUnity::HAPI_RSTOrder", modifiers: "", def_value: None }]
  constexpr HAPI_Transform(::ArrayW<float_t, ::Array<float_t>*> position, ::ArrayW<float_t, ::Array<float_t>*> rotationQuaternion, ::ArrayW<float_t, ::Array<float_t>*> scale,
                           ::ArrayW<float_t, ::Array<float_t>*> shear, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field position, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> position;

  /// @brief Field rotationQuaternion, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> rotationQuaternion;

  /// @brief Field scale, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> scale;

  /// @brief Field shear, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> shear;

  /// @brief Field rstOrder, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_Transform, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Transform, rotationQuaternion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Transform, scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Transform, shear) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Transform, rstOrder) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Transform, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Transform, "HoudiniEngineUnity", "HAPI_Transform");
