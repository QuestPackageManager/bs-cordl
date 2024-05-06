#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_TransformEuler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_TransformEuler)
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
struct HAPI_XYZOrder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_TransformEuler);
// Type: HoudiniEngineUnity::HAPI_TransformEuler
// SizeInfo { instance_size: 40, native_size: 56, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_TransformEuler
struct CORDL_TYPE HAPI_TransformEuler {
public:
  // Declarations
  /// @brief Method Init, addr 0x25769a8, size 0xc8, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method .ctor, addr 0x256d508, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(bool initializeFields);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_TransformEuler();

  // Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rotationEuler", ty:
  // "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name:
  // "shear", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rotationOrder", ty: "::HoudiniEngineUnity::HAPI_XYZOrder", modifiers: "", def_value: None
  // }, CppParam { name: "rstOrder", ty: "::HoudiniEngineUnity::HAPI_RSTOrder", modifiers: "", def_value: None }]
  constexpr HAPI_TransformEuler(::ArrayW<float_t, ::Array<float_t>*> position, ::ArrayW<float_t, ::Array<float_t>*> rotationEuler, ::ArrayW<float_t, ::Array<float_t>*> scale,
                                ::ArrayW<float_t, ::Array<float_t>*> shear, ::HoudiniEngineUnity::HAPI_XYZOrder rotationOrder, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder) noexcept;

  /// @brief Field position, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> position;

  /// @brief Field rotationEuler, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> rotationEuler;

  /// @brief Field scale, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> scale;

  /// @brief Field shear, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> shear;

  /// @brief Field rotationOrder, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_XYZOrder rotationOrder;

  /// @brief Field rstOrder, offset: 0x24, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_TransformEuler, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_TransformEuler, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_TransformEuler, rotationEuler) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_TransformEuler, scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_TransformEuler, shear) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_TransformEuler, rotationOrder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_TransformEuler, rstOrder) == 0x24, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_TransformEuler, "HoudiniEngineUnity", "HAPI_TransformEuler");
