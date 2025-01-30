#pragma once
// IWYU pragma private; include "UnityEngine/NumericFieldDraggerUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NumericFieldDraggerUtility)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class NumericFieldDraggerUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::NumericFieldDraggerUtility);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.NumericFieldDraggerUtility
class CORDL_TYPE NumericFieldDraggerUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_UseYSign, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_UseYSign, put = setStaticF_s_UseYSign)) bool s_UseYSign;

  /// @brief Method Acceleration, addr 0x48a6b04, size 0x24, virtual false, abstract: false, final false
  static inline float_t Acceleration(bool shiftPressed, bool altPressed);

  /// @brief Method CalculateFloatDragSensitivity, addr 0x48a6c80, size 0x90, virtual false, abstract: false, final false
  static inline double_t CalculateFloatDragSensitivity(double_t value);

  /// @brief Method CalculateFloatDragSensitivity, addr 0x48a6d10, size 0x90, virtual false, abstract: false, final false
  static inline double_t CalculateFloatDragSensitivity(double_t value, double_t minValue, double_t maxValue);

  /// @brief Method CalculateIntDragSensitivity, addr 0x48a6dcc, size 0x7c, virtual false, abstract: false, final false
  static inline double_t CalculateIntDragSensitivity(double_t value);

  /// @brief Method CalculateIntDragSensitivity, addr 0x48a6da0, size 0x2c, virtual false, abstract: false, final false
  static inline int64_t CalculateIntDragSensitivity(int64_t value);

  /// @brief Method CalculateIntDragSensitivity, addr 0x48a6e6c, size 0xa0, virtual false, abstract: false, final false
  static inline int64_t CalculateIntDragSensitivity(int64_t value, int64_t minValue, int64_t maxValue);

  /// @brief Method CalculateIntDragSensitivity, addr 0x48a6e48, size 0x24, virtual false, abstract: false, final false
  static inline uint64_t CalculateIntDragSensitivity(uint64_t value);

  /// @brief Method NiceDelta, addr 0x48a6b28, size 0x158, virtual false, abstract: false, final false
  static inline float_t NiceDelta(::UnityEngine::Vector2 deviceDelta, float_t acceleration);

  static inline bool getStaticF_s_UseYSign();

  static inline void setStaticF_s_UseYSign(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumericFieldDraggerUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumericFieldDraggerUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumericFieldDraggerUtility(NumericFieldDraggerUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumericFieldDraggerUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumericFieldDraggerUtility(NumericFieldDraggerUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10831 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::NumericFieldDraggerUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::NumericFieldDraggerUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NumericFieldDraggerUtility*, "UnityEngine", "NumericFieldDraggerUtility");
