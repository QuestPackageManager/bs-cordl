#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerErrorErrorKey)
// Forward declare root types
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::MultiplayerErrorErrorKey);
// Type: Oculus.Platform::MultiplayerErrorErrorKey
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13336))
// CS Name: ::Oculus.Platform::MultiplayerErrorErrorKey
struct CORDL_TYPE MultiplayerErrorErrorKey {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerErrorErrorKey_Unwrapped
  enum struct __MultiplayerErrorErrorKey_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_DestinationUnavailable = static_cast<int32_t>(0x1),
    __E_DlcRequired = static_cast<int32_t>(0x2),
    __E_General = static_cast<int32_t>(0x3),
    __E_GroupFull = static_cast<int32_t>(0x4),
    __E_InviterNotJoinable = static_cast<int32_t>(0x5),
    __E_LevelNotHighEnough = static_cast<int32_t>(0x6),
    __E_LevelNotUnlocked = static_cast<int32_t>(0x7),
    __E_NetworkTimeout = static_cast<int32_t>(0x8),
    __E_NoLongerAvailable = static_cast<int32_t>(0x9),
    __E_UpdateRequired = static_cast<int32_t>(0xa),
    __E_TutorialRequired = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerErrorErrorKey_Unwrapped() const noexcept {
    return static_cast<__MultiplayerErrorErrorKey_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerErrorErrorKey(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerErrorErrorKey();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const Unknown;

  /// @brief Field DestinationUnavailable value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const DestinationUnavailable;

  /// @brief Field DlcRequired value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const DlcRequired;

  /// @brief Field General value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const General;

  /// @brief Field GroupFull value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const GroupFull;

  /// @brief Field InviterNotJoinable value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const InviterNotJoinable;

  /// @brief Field LevelNotHighEnough value: static_cast<int32_t>(0x6)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const LevelNotHighEnough;

  /// @brief Field LevelNotUnlocked value: static_cast<int32_t>(0x7)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const LevelNotUnlocked;

  /// @brief Field NetworkTimeout value: static_cast<int32_t>(0x8)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const NetworkTimeout;

  /// @brief Field NoLongerAvailable value: static_cast<int32_t>(0x9)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const NoLongerAvailable;

  /// @brief Field UpdateRequired value: static_cast<int32_t>(0xa)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const UpdateRequired;

  /// @brief Field TutorialRequired value: static_cast<int32_t>(0xb)
  static ::Oculus::Platform::MultiplayerErrorErrorKey const TutorialRequired;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MultiplayerErrorErrorKey, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::MultiplayerErrorErrorKey, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MultiplayerErrorErrorKey, "Oculus.Platform", "MultiplayerErrorErrorKey");
