#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutInfo)
namespace GlobalNamespace {
class ISaberMovementData;
}
namespace GlobalNamespace {
struct NoteCutInfo_FailReason;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct NoteCutInfo_FailReason;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoteCutInfo_FailReason);
MARK_VAL_T(::GlobalNamespace::NoteCutInfo);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NoteCutInfo/FailReason
struct CORDL_TYPE NoteCutInfo_FailReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoteCutInfo_FailReason_Unwrapped
  enum struct __NoteCutInfo_FailReason_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TooSoon = static_cast<int32_t>(0x1),
    __E_WrongColor = static_cast<int32_t>(0x2),
    __E_CutHarder = static_cast<int32_t>(0x3),
    __E_WrongDirection = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoteCutInfo_FailReason_Unwrapped() const noexcept {
    return static_cast<__NoteCutInfo_FailReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutInfo_FailReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoteCutInfo_FailReason(int32_t value__) noexcept;

  /// @brief Field CutHarder value: I32(3)
  static ::GlobalNamespace::NoteCutInfo_FailReason const CutHarder;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::NoteCutInfo_FailReason const None;

  /// @brief Field TooSoon value: I32(1)
  static ::GlobalNamespace::NoteCutInfo_FailReason const TooSoon;

  /// @brief Field WrongColor value: I32(2)
  static ::GlobalNamespace::NoteCutInfo_FailReason const WrongColor;

  /// @brief Field WrongDirection value: I32(4)
  static ::GlobalNamespace::NoteCutInfo_FailReason const WrongDirection;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17009 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutInfo_FailReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutInfo_FailReason, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SaberType, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: NoteCutInfo
struct CORDL_TYPE NoteCutInfo {
public:
  // Declarations
  using FailReason = ::GlobalNamespace::NoteCutInfo_FailReason;

  __declspec(property(get = get_allExceptSaberTypeIsOK)) bool allExceptSaberTypeIsOK;

  __declspec(property(get = get_allIsOK)) bool allIsOK;

  __declspec(property(get = get_failReason)) ::GlobalNamespace::NoteCutInfo_FailReason failReason;

  /// @brief Method .ctor, addr 0x272201c, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::NoteData* noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed, ::UnityEngine::Vector3 saberDir,
                    ::GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal,
                    float_t cutDistanceToCenter, float_t cutAngle, ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Quaternion inverseWorldRotation, ::UnityEngine::Quaternion noteRotation,
                    ::UnityEngine::Vector3 notePosition, ::GlobalNamespace::ISaberMovementData* saberMovementData);

  /// @brief Method get_allExceptSaberTypeIsOK, addr 0x2721fb0, size 0x28, virtual false, abstract: false, final false
  inline bool get_allExceptSaberTypeIsOK();

  /// @brief Method get_allIsOK, addr 0x2721f80, size 0x30, virtual false, abstract: false, final false
  inline bool get_allIsOK();

  /// @brief Method get_failReason, addr 0x2721fd8, size 0x44, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteCutInfo_FailReason get_failReason();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutInfo();

  // Ctor Parameters [CppParam { name: "noteData", ty: "::GlobalNamespace::NoteData*", modifiers: "", def_value: None }, CppParam { name: "speedOK", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "directionOK", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saberTypeOK", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "wasCutTooSoon", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "saberSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "saberDir", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "saberType", ty: "::GlobalNamespace::SaberType", modifiers: "", def_value: None }, CppParam { name: "timeDeviation", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "cutDirDeviation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam
  // { name: "cutNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "cutAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "cutDistanceToCenter", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "worldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name:
  // "inverseWorldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "noteRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None },
  // CppParam { name: "notePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "saberMovementData", ty: "::GlobalNamespace::ISaberMovementData*", modifiers: "",
  // def_value: None }]
  constexpr NoteCutInfo(::GlobalNamespace::NoteData* noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed, ::UnityEngine::Vector3 saberDir,
                        ::GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float_t cutAngle,
                        float_t cutDistanceToCenter, ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Quaternion inverseWorldRotation, ::UnityEngine::Quaternion noteRotation,
                        ::UnityEngine::Vector3 notePosition, ::GlobalNamespace::ISaberMovementData* saberMovementData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field noteData, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::NoteData* noteData;

  /// @brief Field speedOK, offset: 0x8, size: 0x1, def value: None
  bool speedOK;

  /// @brief Field directionOK, offset: 0x9, size: 0x1, def value: None
  bool directionOK;

  /// @brief Field saberTypeOK, offset: 0xa, size: 0x1, def value: None
  bool saberTypeOK;

  /// @brief Field wasCutTooSoon, offset: 0xb, size: 0x1, def value: None
  bool wasCutTooSoon;

  /// @brief Field saberSpeed, offset: 0xc, size: 0x4, def value: None
  float_t saberSpeed;

  /// @brief Field saberDir, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 saberDir;

  /// @brief Field saberType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::SaberType saberType;

  /// @brief Field timeDeviation, offset: 0x20, size: 0x4, def value: None
  float_t timeDeviation;

  /// @brief Field cutDirDeviation, offset: 0x24, size: 0x4, def value: None
  float_t cutDirDeviation;

  /// @brief Field cutPoint, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 cutPoint;

  /// @brief Field cutNormal, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 cutNormal;

  /// @brief Field cutAngle, offset: 0x40, size: 0x4, def value: None
  float_t cutAngle;

  /// @brief Field cutDistanceToCenter, offset: 0x44, size: 0x4, def value: None
  float_t cutDistanceToCenter;

  /// @brief Field worldRotation, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Quaternion worldRotation;

  /// @brief Field inverseWorldRotation, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Quaternion inverseWorldRotation;

  /// @brief Field noteRotation, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Quaternion noteRotation;

  /// @brief Field notePosition, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 notePosition;

  /// @brief Field saberMovementData, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::ISaberMovementData* saberMovementData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutInfo, noteData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, speedOK) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, directionOK) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, saberTypeOK) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, wasCutTooSoon) == 0xb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, saberSpeed) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, saberDir) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, saberType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, timeDeviation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, cutDirDeviation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, cutPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, cutNormal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, cutAngle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, cutDistanceToCenter) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, worldRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, inverseWorldRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, noteRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, notePosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutInfo, saberMovementData) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutInfo, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutInfo_FailReason, "", "NoteCutInfo/FailReason");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutInfo, "", "NoteCutInfo");
