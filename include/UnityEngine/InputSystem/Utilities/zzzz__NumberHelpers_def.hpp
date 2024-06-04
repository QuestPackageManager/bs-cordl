#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/NumberHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NumberHelpers)
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class NumberHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::NumberHelpers);
// Type: UnityEngine.InputSystem.Utilities::NumberHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::NumberHelpers*
class CORDL_TYPE NumberHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method AlignToMultipleOf, addr 0x31a9cfc, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t AlignToMultipleOf(int32_t number, int32_t alignment);

  /// @brief Method AlignToMultipleOf, addr 0x31a9d18, size 0x1c, virtual false, abstract: false, final false
  static inline int64_t AlignToMultipleOf(int64_t number, int64_t alignment);

  /// @brief Method AlignToMultipleOf, addr 0x31a9d34, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t AlignToMultipleOf(uint32_t number, uint32_t alignment);

  /// @brief Method Approximately, addr 0x31a9d50, size 0x9c, virtual false, abstract: false, final false
  static inline bool Approximately(double_t a, double_t b);

  /// @brief Method IntToNormalizedFloat, addr 0x31a9dec, size 0x3c, virtual false, abstract: false, final false
  static inline float_t IntToNormalizedFloat(int32_t value, int32_t minValue, int32_t maxValue);

  /// @brief Method NormalizedFloatToInt, addr 0x31a9e28, size 0x50, virtual false, abstract: false, final false
  static inline int32_t NormalizedFloatToInt(float_t value, int32_t intMinValue, int32_t intMaxValue);

  /// @brief Method NormalizedFloatToUInt, addr 0x31a9eb4, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t NormalizedFloatToUInt(float_t value, uint32_t uintMinValue, uint32_t uintMaxValue);

  /// @brief Method RemapUIntBitsToNormalizeFloatToUIntBits, addr 0x31a9efc, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t RemapUIntBitsToNormalizeFloatToUIntBits(uint32_t value, uint32_t inBitSize, uint32_t outBitSize);

  /// @brief Method UIntToNormalizedFloat, addr 0x31a9e78, size 0x3c, virtual false, abstract: false, final false
  static inline float_t UIntToNormalizedFloat(uint32_t value, uint32_t minValue, uint32_t maxValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumberHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumberHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumberHelpers(NumberHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumberHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumberHelpers(NumberHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::NumberHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::NumberHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::NumberHelpers*, "UnityEngine.InputSystem.Utilities", "NumberHelpers");
