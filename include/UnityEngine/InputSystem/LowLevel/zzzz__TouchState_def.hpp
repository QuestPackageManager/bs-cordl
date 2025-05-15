#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/TouchState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchState)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchState);
// Dependencies UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo, UnityEngine.Vector2
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.TouchState
#pragma pack(push, 0)
struct CORDL_TYPE TouchState {
public:
  // Declarations
  __declspec(property(get = get_beganInSameFrame, put = set_beganInSameFrame)) bool beganInSameFrame;

  /// @brief Field delta, offset 0xc, size 0x8
  __declspec(property(get = __cordl_internal_get_delta, put = __cordl_internal_set_delta)) ::UnityEngine::Vector2 delta;

  /// @brief Field displayIndex, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_displayIndex, put = __cordl_internal_set_displayIndex)) uint8_t displayIndex;

  /// @brief Field flags, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) uint8_t flags;

  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  __declspec(property(get = get_isInProgress)) bool isInProgress;

  __declspec(property(get = get_isIndirectTouch, put = set_isIndirectTouch)) bool isIndirectTouch;

  __declspec(property(get = get_isNoneEndedOrCanceled)) bool isNoneEndedOrCanceled;

  __declspec(property(get = get_isOrphanedPrimaryTouch, put = set_isOrphanedPrimaryTouch)) bool isOrphanedPrimaryTouch;

  __declspec(property(get = get_isPrimaryTouch, put = set_isPrimaryTouch)) bool isPrimaryTouch;

  __declspec(property(get = get_isTap, put = set_isTap)) bool isTap;

  __declspec(property(get = get_isTapPress, put = set_isTapPress)) bool isTapPress;

  __declspec(property(get = get_isTapRelease, put = set_isTapRelease)) bool isTapRelease;

  __declspec(property(get = get_phase, put = set_phase)) ::UnityEngine::InputSystem::TouchPhase phase;

  /// @brief Field phaseId, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_phaseId, put = __cordl_internal_set_phaseId)) uint8_t phaseId;

  /// @brief Field position, offset 0x4, size 0x8
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) ::UnityEngine::Vector2 position;

  /// @brief Field pressure, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_pressure, put = __cordl_internal_set_pressure)) float_t pressure;

  /// @brief Field radius, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) ::UnityEngine::Vector2 radius;

  /// @brief Field startPosition, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_startPosition, put = __cordl_internal_set_startPosition)) ::UnityEngine::Vector2 startPosition;

  /// @brief Field startTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_startTime, put = __cordl_internal_set_startTime)) double_t startTime;

  /// @brief Field tapCount, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_tapCount, put = __cordl_internal_set_tapCount)) uint8_t tapCount;

  /// @brief Field touchId, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_touchId, put = __cordl_internal_set_touchId)) int32_t touchId;

  /// @brief Field updateStepCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_updateStepCount, put = __cordl_internal_set_updateStepCount)) uint32_t updateStepCount;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method ToString, addr 0x46092b8, size 0x2c0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_delta() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_delta();

  constexpr uint8_t const& __cordl_internal_get_displayIndex() const;

  constexpr uint8_t& __cordl_internal_get_displayIndex();

  constexpr uint8_t const& __cordl_internal_get_flags() const;

  constexpr uint8_t& __cordl_internal_get_flags();

  constexpr uint8_t const& __cordl_internal_get_phaseId() const;

  constexpr uint8_t& __cordl_internal_get_phaseId();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_position();

  constexpr float_t const& __cordl_internal_get_pressure() const;

  constexpr float_t& __cordl_internal_get_pressure();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_radius() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_radius();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_startPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_startPosition();

  constexpr double_t const& __cordl_internal_get_startTime() const;

  constexpr double_t& __cordl_internal_get_startTime();

  constexpr uint8_t const& __cordl_internal_get_tapCount() const;

  constexpr uint8_t& __cordl_internal_get_tapCount();

  constexpr int32_t const& __cordl_internal_get_touchId() const;

  constexpr int32_t& __cordl_internal_get_touchId();

  constexpr uint32_t const& __cordl_internal_get_updateStepCount() const;

  constexpr uint32_t& __cordl_internal_get_updateStepCount();

  constexpr void __cordl_internal_set_delta(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_displayIndex(uint8_t value);

  constexpr void __cordl_internal_set_flags(uint8_t value);

  constexpr void __cordl_internal_set_phaseId(uint8_t value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_pressure(float_t value);

  constexpr void __cordl_internal_set_radius(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_startPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_startTime(double_t value);

  constexpr void __cordl_internal_set_tapCount(uint8_t value);

  constexpr void __cordl_internal_set_touchId(int32_t value);

  constexpr void __cordl_internal_set_updateStepCount(uint32_t value);

  /// @brief Method get_Format, addr 0x4609170, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format();

  /// @brief Method get_beganInSameFrame, addr 0x4601614, size 0xc, virtual false, abstract: false, final false
  inline bool get_beganInSameFrame();

  /// @brief Method get_format, addr 0x4609288, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_isInProgress, addr 0x46091cc, size 0x28, virtual false, abstract: false, final false
  inline bool get_isInProgress();

  /// @brief Method get_isIndirectTouch, addr 0x4609220, size 0xc, virtual false, abstract: false, final false
  inline bool get_isIndirectTouch();

  /// @brief Method get_isNoneEndedOrCanceled, addr 0x46091a8, size 0x24, virtual false, abstract: false, final false
  inline bool get_isNoneEndedOrCanceled();

  /// @brief Method get_isOrphanedPrimaryTouch, addr 0x46091f4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOrphanedPrimaryTouch();

  /// @brief Method get_isPrimaryTouch, addr 0x4605a88, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPrimaryTouch();

  /// @brief Method get_isTap, addr 0x46021b4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isTap();

  /// @brief Method get_isTapPress, addr 0x460923c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isTapPress();

  /// @brief Method get_isTapRelease, addr 0x460137c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isTapRelease();

  /// @brief Method get_phase, addr 0x46091a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::TouchPhase get_phase();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  /// @brief Method set_beganInSameFrame, addr 0x4601620, size 0x1c, virtual false, abstract: false, final false
  inline void set_beganInSameFrame(bool value);

  /// @brief Method set_isIndirectTouch, addr 0x460922c, size 0x10, virtual false, abstract: false, final false
  inline void set_isIndirectTouch(bool value);

  /// @brief Method set_isOrphanedPrimaryTouch, addr 0x4609200, size 0x20, virtual false, abstract: false, final false
  inline void set_isOrphanedPrimaryTouch(bool value);

  /// @brief Method set_isPrimaryTouch, addr 0x4605a68, size 0x20, virtual false, abstract: false, final false
  inline void set_isPrimaryTouch(bool value);

  /// @brief Method set_isTap, addr 0x4605a94, size 0x20, virtual false, abstract: false, final false
  inline void set_isTap(bool value);

  /// @brief Method set_isTapPress, addr 0x4609248, size 0x20, virtual false, abstract: false, final false
  inline void set_isTapPress(bool value);

  /// @brief Method set_isTapRelease, addr 0x4609268, size 0x20, virtual false, abstract: false, final false
  inline void set_isTapRelease(bool value);

  /// @brief Method set_phase, addr 0x4603af0, size 0x8, virtual false, abstract: false, final false
  inline void set_phase(::UnityEngine::InputSystem::TouchPhase value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchState();

  // Ctor Parameters [CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam
  // { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "phaseId", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "tapCount", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "displayIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "updateStepCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "startTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "startPosition", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr TouchState(int32_t touchId, ::UnityEngine::Vector2 position, ::UnityEngine::Vector2 delta, float_t pressure, ::UnityEngine::Vector2 radius, uint8_t phaseId, uint8_t tapCount,
                       uint8_t displayIndex, uint8_t flags, uint32_t updateStepCount, double_t startTime, ::UnityEngine::Vector2 startPosition) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___touchId_padding[0x0];
      /// @brief Field touchId, offset: 0x0, size: 0x4, def value: None
      int32_t ___touchId;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___touchId_padding_forAlignment[0x0];
      /// @brief Field touchId, offset: 0x0, size: 0x4, def value: None
      int32_t ___touchId_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___position_padding[0x4];
      /// @brief Field position, offset: 0x4, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___position;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___position_padding_forAlignment[0x4];
      /// @brief Field position, offset: 0x4, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___position_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___delta_padding[0xc];
      /// @brief Field delta, offset: 0xc, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___delta;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___delta_padding_forAlignment[0xc];
      /// @brief Field delta, offset: 0xc, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___delta_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___pressure_padding[0x14];
      /// @brief Field pressure, offset: 0x14, size: 0x4, def value: None
      float_t ___pressure;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___pressure_padding_forAlignment[0x14];
      /// @brief Field pressure, offset: 0x14, size: 0x4, def value: None
      float_t ___pressure_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___radius_padding[0x18];
      /// @brief Field radius, offset: 0x18, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___radius;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___radius_padding_forAlignment[0x18];
      /// @brief Field radius, offset: 0x18, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___radius_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x20
      uint8_t ___phaseId_padding[0x20];
      /// @brief Field phaseId, offset: 0x20, size: 0x1, def value: None
      uint8_t ___phaseId;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x20 for alignment
      uint8_t ___phaseId_padding_forAlignment[0x20];
      /// @brief Field phaseId, offset: 0x20, size: 0x1, def value: None
      uint8_t ___phaseId_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x21
      uint8_t ___tapCount_padding[0x21];
      /// @brief Field tapCount, offset: 0x21, size: 0x1, def value: None
      uint8_t ___tapCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x21 for alignment
      uint8_t ___tapCount_padding_forAlignment[0x21];
      /// @brief Field tapCount, offset: 0x21, size: 0x1, def value: None
      uint8_t ___tapCount_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x22
      uint8_t ___displayIndex_padding[0x22];
      /// @brief Field displayIndex, offset: 0x22, size: 0x1, def value: None
      uint8_t ___displayIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x22 for alignment
      uint8_t ___displayIndex_padding_forAlignment[0x22];
      /// @brief Field displayIndex, offset: 0x22, size: 0x1, def value: None
      uint8_t ___displayIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x23
      uint8_t ___flags_padding[0x23];
      /// @brief Field flags, offset: 0x23, size: 0x1, def value: None
      uint8_t ___flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x23 for alignment
      uint8_t ___flags_padding_forAlignment[0x23];
      /// @brief Field flags, offset: 0x23, size: 0x1, def value: None
      uint8_t ___flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x24
      uint8_t ___updateStepCount_padding[0x24];
      /// @brief Field updateStepCount, offset: 0x24, size: 0x4, def value: None
      uint32_t ___updateStepCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x24 for alignment
      uint8_t ___updateStepCount_padding_forAlignment[0x24];
      /// @brief Field updateStepCount, offset: 0x24, size: 0x4, def value: None
      uint32_t ___updateStepCount_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x28
      uint8_t ___startTime_padding[0x28];
      /// @brief Field startTime, offset: 0x28, size: 0x8, def value: None
      double_t ___startTime;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x28 for alignment
      uint8_t ___startTime_padding_forAlignment[0x28];
      /// @brief Field startTime, offset: 0x28, size: 0x8, def value: None
      double_t ___startTime_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x30
      uint8_t ___startPosition_padding[0x30];
      /// @brief Field startPosition, offset: 0x30, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___startPosition;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x30 for alignment
      uint8_t ___startPosition_padding_forAlignment[0x30];
      /// @brief Field startPosition, offset: 0x30, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___startPosition_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6924 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field kSizeInBytes offset 0xffffffff size 0x4
  static constexpr int32_t kSizeInBytes{ static_cast<int32_t>(0x38) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TouchState, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchState, "UnityEngine.InputSystem.LowLevel", "TouchState");
