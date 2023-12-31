#pragma once
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
// Type: ::LightRotationBaseData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16090)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14736))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4323))
// CS Name: ::LightRotationBaseData*
class CORDL_TYPE LightRotationBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beat, offset 0x10, size 0x4
  __declspec(property(get = __get_beat, put = __set_beat)) float_t beat;

  /// @brief Field usePreviousEventRotationValue, offset 0x14, size 0x1
  __declspec(property(get = __get_usePreviousEventRotationValue, put = __set_usePreviousEventRotationValue)) bool usePreviousEventRotationValue;

  /// @brief Field easeType, offset 0x18, size 0x4
  __declspec(property(get = __get_easeType, put = __set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field rotation, offset 0x1c, size 0x4
  __declspec(property(get = __get_rotation, put = __set_rotation)) float_t rotation;

  /// @brief Field loopsCount, offset 0x20, size 0x4
  __declspec(property(get = __get_loopsCount, put = __set_loopsCount)) int32_t loopsCount;

  /// @brief Field rotationDirection, offset 0x24, size 0x4
  __declspec(property(get = __get_rotationDirection, put = __set_rotationDirection))::GlobalNamespace::LightRotationDirection rotationDirection;

  constexpr float_t& __get_beat();

  constexpr float_t const& __get_beat() const;

  constexpr void __set_beat(float_t value);

  constexpr bool& __get_usePreviousEventRotationValue();

  constexpr bool const& __get_usePreviousEventRotationValue() const;

  constexpr void __set_usePreviousEventRotationValue(bool value);

  constexpr ::GlobalNamespace::EaseType& __get_easeType();

  constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

  constexpr void __set_easeType(::GlobalNamespace::EaseType value);

  constexpr float_t& __get_rotation();

  constexpr float_t const& __get_rotation() const;

  constexpr void __set_rotation(float_t value);

  constexpr int32_t& __get_loopsCount();

  constexpr int32_t const& __get_loopsCount() const;

  constexpr void __set_loopsCount(int32_t value);

  constexpr ::GlobalNamespace::LightRotationDirection& __get_rotationDirection();

  constexpr ::GlobalNamespace::LightRotationDirection const& __get_rotationDirection() const;

  constexpr void __set_rotationDirection(::GlobalNamespace::LightRotationDirection value);

  static inline ::GlobalNamespace::LightRotationBaseData* New_ctor(float_t beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount,
                                                                   ::GlobalNamespace::LightRotationDirection rotationDirection);

  /// @brief Method .ctor, addr 0x233d558, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount,
                    ::GlobalNamespace::LightRotationDirection rotationDirection);

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBaseData(LightRotationBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBaseData(LightRotationBaseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBaseData();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBaseData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___beat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___usePreviousEventRotationValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___easeType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___loopsCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBaseData, ___rotationDirection) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBaseData*, "", "LightRotationBaseData");
