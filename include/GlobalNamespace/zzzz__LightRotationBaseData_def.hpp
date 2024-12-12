#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationBaseData)
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationBaseData);
// Dependencies EaseType, LightRotationDirection, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationBaseData
class CORDL_TYPE LightRotationBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_beat, put = __cordl_internal_set_beat)) float_t beat;

  /// @brief Field easeType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field loopsCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_loopsCount, put = __cordl_internal_set_loopsCount)) int32_t loopsCount;

  /// @brief Field rotation, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field rotationDirection, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationDirection, put = __cordl_internal_set_rotationDirection)) ::GlobalNamespace::LightRotationDirection rotationDirection;

  /// @brief Field usePreviousEventRotationValue, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousEventRotationValue, put = __cordl_internal_set_usePreviousEventRotationValue)) bool usePreviousEventRotationValue;

  static inline ::GlobalNamespace::LightRotationBaseData* New_ctor(float_t beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount,
                                                                   ::GlobalNamespace::LightRotationDirection rotationDirection);

  constexpr float_t const& __cordl_internal_get_beat() const;

  constexpr float_t& __cordl_internal_get_beat();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr int32_t const& __cordl_internal_get_loopsCount() const;

  constexpr int32_t& __cordl_internal_get_loopsCount();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr ::GlobalNamespace::LightRotationDirection const& __cordl_internal_get_rotationDirection() const;

  constexpr ::GlobalNamespace::LightRotationDirection& __cordl_internal_get_rotationDirection();

  constexpr bool const& __cordl_internal_get_usePreviousEventRotationValue() const;

  constexpr bool& __cordl_internal_get_usePreviousEventRotationValue();

  constexpr void __cordl_internal_set_beat(float_t value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_loopsCount(int32_t value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_rotationDirection(::GlobalNamespace::LightRotationDirection value);

  constexpr void __cordl_internal_set_usePreviousEventRotationValue(bool value);

  /// @brief Method .ctor, addr 0x26bd798, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount,
                    ::GlobalNamespace::LightRotationDirection rotationDirection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBaseData(LightRotationBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBaseData(LightRotationBaseData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12914 };

  /// @brief Field beat, offset: 0x10, size: 0x4, def value: None
  float_t ___beat;

  /// @brief Field usePreviousEventRotationValue, offset: 0x14, size: 0x1, def value: None
  bool ___usePreviousEventRotationValue;

  /// @brief Field easeType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field rotation, offset: 0x1c, size: 0x4, def value: None
  float_t ___rotation;

  /// @brief Field loopsCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___loopsCount;

  /// @brief Field rotationDirection, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::LightRotationDirection ___rotationDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___beat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___usePreviousEventRotationValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___easeType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___loopsCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___rotationDirection) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBaseData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBaseData*, "", "LightRotationBaseData");
