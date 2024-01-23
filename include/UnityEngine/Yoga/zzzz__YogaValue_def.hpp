#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Yoga/zzzz__YogaUnit_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaValue)
namespace System {
class Object;
}
namespace UnityEngine::Yoga {
struct YogaUnit;
}
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaValue);
// Type: UnityEngine.Yoga::YogaValue
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15363))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15364))
// CS Name: ::UnityEngine.Yoga::YogaValue
struct CORDL_TYPE YogaValue {
public:
  // Declarations
  __declspec(property(get = get_Unit))::UnityEngine::Yoga::YogaUnit Unit;

  __declspec(property(get = get_Value)) float_t Value;

  /// @brief Method get_Unit, addr 0x2ea1fd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Yoga::YogaUnit get_Unit();

  /// @brief Method get_Value, addr 0x2ea1fdc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Value();

  /// @brief Method Point, addr 0x2ea5184, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaValue Point(float_t value);

  /// @brief Method Equals, addr 0x2ea51a8, size 0x60, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Yoga::YogaValue other);

  /// @brief Method Equals, addr 0x2ea5208, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2ea5280, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Auto, addr 0x2ea52bc, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaValue Auto();

  /// @brief Method Percent, addr 0x2ea52c8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaValue Percent(float_t value);

  /// @brief Method op_Implicit, addr 0x2ea52f0, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaValue op_Implicit___UnityEngine__Yoga__YogaValue(float_t pointValue);

  // Ctor Parameters [CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "unit", ty: "::UnityEngine::Yoga::YogaUnit", modifiers: "", def_value: None }]
  constexpr YogaValue(float_t value, ::UnityEngine::Yoga::YogaUnit unit) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaValue();

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  float_t value;

  /// @brief Field unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Yoga::YogaUnit unit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaValue, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaValue, value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaValue, unit) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaValue, "UnityEngine.Yoga", "YogaValue");
