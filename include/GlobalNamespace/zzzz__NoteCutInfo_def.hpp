#pragma once
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
struct __NoteCutInfo__FailReason;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NoteCutInfo__FailReason;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NoteCutInfo__FailReason);
MARK_VAL_T(::GlobalNamespace::NoteCutInfo);
// Type: ::FailReason
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15024))
// CS Name: ::NoteCutInfo::FailReason
struct CORDL_TYPE __NoteCutInfo__FailReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NoteCutInfo__FailReason_Unwrapped
  enum struct ____NoteCutInfo__FailReason_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TooSoon = static_cast<int32_t>(0x1),
    __E_WrongColor = static_cast<int32_t>(0x2),
    __E_CutHarder = static_cast<int32_t>(0x3),
    __E_WrongDirection = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NoteCutInfo__FailReason_Unwrapped() const noexcept {
    return static_cast<____NoteCutInfo__FailReason_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteCutInfo__FailReason(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteCutInfo__FailReason();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteCutInfo__FailReason const None;

  /// @brief Field TooSoon value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteCutInfo__FailReason const TooSoon;

  /// @brief Field WrongColor value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteCutInfo__FailReason const WrongColor;

  /// @brief Field CutHarder value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__NoteCutInfo__FailReason const CutHarder;

  /// @brief Field WrongDirection value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__NoteCutInfo__FailReason const WrongDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutInfo__FailReason, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteCutInfo__FailReason, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteCutInfo
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(15036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15025))
// CS Name: ::NoteCutInfo
struct CORDL_TYPE NoteCutInfo {
public:
  // Declarations
  using FailReason = ::GlobalNamespace::__NoteCutInfo__FailReason;

  __declspec(property(get = get_allIsOK)) bool allIsOK;

  __declspec(property(get = get_allExceptSaberTypeIsOK)) bool allExceptSaberTypeIsOK;

  __declspec(property(get = get_failReason))::GlobalNamespace::__NoteCutInfo__FailReason failReason;

  /// @brief Method get_allIsOK, addr 0x12a3fb8, size 0x30, virtual false, abstract: false, final false
  inline bool get_allIsOK();

  /// @brief Method get_allExceptSaberTypeIsOK, addr 0x12a3fe8, size 0x28, virtual false, abstract: false, final false
  inline bool get_allExceptSaberTypeIsOK();

  /// @brief Method get_failReason, addr 0x12a4010, size 0x44, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__NoteCutInfo__FailReason get_failReason();

  /// @brief Method .ctor, addr 0x12a4054, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::NoteData* noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed, ::UnityEngine::Vector3 saberDir,
                    ::GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal,
                    float_t cutDistanceToCenter, float_t cutAngle, ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Quaternion inverseWorldRotation, ::UnityEngine::Quaternion noteRotation,
                    ::UnityEngine::Vector3 notePosition, ::GlobalNamespace::ISaberMovementData* saberMovementData);

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

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutInfo();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutInfo, 0x90>, "Size mismatch!");

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutInfo__FailReason, "", "NoteCutInfo/FailReason");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutInfo, "", "NoteCutInfo");
