#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeHelper)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeHelper);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimeHelper
class CORDL_TYPE TimeHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_DeltaTime, put = set_DeltaTime)) float_t DeltaTime;

  __declspec(property(get = get_FixedDeltaTime, put = set_FixedDeltaTime)) float_t FixedDeltaTime;

  __declspec(property(get = get_InterpolationFactor, put = set_InterpolationFactor)) float_t InterpolationFactor;

  __declspec(property(get = get_Time, put = set_Time)) float_t Time;

  __declspec(property(get = get_TimeHelperOffset, put = set_TimeHelperOffset)) ::UnityEngine::Vector4 TimeHelperOffset;

  /// @brief Field <DeltaTime>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__DeltaTime_k__BackingField, put = __cordl_internal_set__DeltaTime_k__BackingField)) float_t _DeltaTime_k__BackingField;

  /// @brief Field <FixedDeltaTime>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__FixedDeltaTime_k__BackingField, put = __cordl_internal_set__FixedDeltaTime_k__BackingField)) float_t _FixedDeltaTime_k__BackingField;

  /// @brief Field <InterpolationFactor>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__InterpolationFactor_k__BackingField, put = __cordl_internal_set__InterpolationFactor_k__BackingField)) float_t _InterpolationFactor_k__BackingField;

  /// @brief Field <TimeHelperOffset>k__BackingField, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get__TimeHelperOffset_k__BackingField,
                      put = __cordl_internal_set__TimeHelperOffset_k__BackingField)) ::UnityEngine::Vector4 _TimeHelperOffset_k__BackingField;

  /// @brief Field _accumulator, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__accumulator, put = __cordl_internal_set__accumulator)) float_t _accumulator;

  /// @brief Field _baseFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__baseFrameCount, put = __cordl_internal_set__baseFrameCount)) int32_t _baseFrameCount;

  /// @brief Field _shouldResetAccumulator, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldResetAccumulator, put = __cordl_internal_set__shouldResetAccumulator)) bool _shouldResetAccumulator;

  /// @brief Field _time, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__time, put = __cordl_internal_set__time)) float_t _time;

  /// @brief Field kTimeHelperPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kTimeHelperPropertyID, put = setStaticF_kTimeHelperPropertyID)) int32_t kTimeHelperPropertyID;

  /// @brief Field kTimeID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kTimeID, put = setStaticF_kTimeID)) int32_t kTimeID;

  /// @brief Method Awake, addr 0x569fcc0, size 0x54, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method EncodeTimeAsVector, addr 0x569fe74, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 EncodeTimeAsVector(float_t time);

  /// @brief Method FixedUpdate, addr 0x569fd14, size 0x90, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetFrameCount, addr 0x569fe08, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetFrameCount();

  /// @brief Method GetShaderTimeValue, addr 0x569fe4c, size 0x28, virtual false, abstract: false, final false
  static inline float_t GetShaderTimeValue();

  static inline ::GlobalNamespace::TimeHelper* New_ctor();

  /// @brief Method SetCommandBufferTimeProperties, addr 0x569fe90, size 0xd8, virtual false, abstract: false, final false
  inline void SetCommandBufferTimeProperties(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method SetTime, addr 0x569f584, size 0xe0, virtual false, abstract: false, final false
  inline void SetTime(float_t time);

  /// @brief Method Update, addr 0x569fda4, size 0x64, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__DeltaTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__DeltaTime_k__BackingField();

  constexpr float_t const& __cordl_internal_get__FixedDeltaTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__FixedDeltaTime_k__BackingField();

  constexpr float_t const& __cordl_internal_get__InterpolationFactor_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__InterpolationFactor_k__BackingField();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__TimeHelperOffset_k__BackingField() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get__TimeHelperOffset_k__BackingField();

  constexpr float_t const& __cordl_internal_get__accumulator() const;

  constexpr float_t& __cordl_internal_get__accumulator();

  constexpr int32_t const& __cordl_internal_get__baseFrameCount() const;

  constexpr int32_t& __cordl_internal_get__baseFrameCount();

  constexpr bool const& __cordl_internal_get__shouldResetAccumulator() const;

  constexpr bool& __cordl_internal_get__shouldResetAccumulator();

  constexpr float_t const& __cordl_internal_get__time() const;

  constexpr float_t& __cordl_internal_get__time();

  constexpr void __cordl_internal_set__DeltaTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__FixedDeltaTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__InterpolationFactor_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__TimeHelperOffset_k__BackingField(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set__accumulator(float_t value);

  constexpr void __cordl_internal_set__baseFrameCount(int32_t value);

  constexpr void __cordl_internal_set__shouldResetAccumulator(bool value);

  constexpr void __cordl_internal_set__time(float_t value);

  /// @brief Method .ctor, addr 0x569ff68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_kTimeHelperPropertyID();

  static inline int32_t getStaticF_kTimeID();

  /// @brief Method get_DeltaTime, addr 0x569fc78, size 0x8, virtual false, abstract: false, final false
  inline float_t get_DeltaTime();

  /// @brief Method get_FixedDeltaTime, addr 0x569fc88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FixedDeltaTime();

  /// @brief Method get_InterpolationFactor, addr 0x569fc98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_InterpolationFactor();

  /// @brief Method get_Time, addr 0x569fc68, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Time();

  /// @brief Method get_TimeHelperOffset, addr 0x569fca8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_TimeHelperOffset();

  static inline void setStaticF_kTimeHelperPropertyID(int32_t value);

  static inline void setStaticF_kTimeID(int32_t value);

  /// @brief Method set_DeltaTime, addr 0x569fc80, size 0x8, virtual false, abstract: false, final false
  inline void set_DeltaTime(float_t value);

  /// @brief Method set_FixedDeltaTime, addr 0x569fc90, size 0x8, virtual false, abstract: false, final false
  inline void set_FixedDeltaTime(float_t value);

  /// @brief Method set_InterpolationFactor, addr 0x569fca0, size 0x8, virtual false, abstract: false, final false
  inline void set_InterpolationFactor(float_t value);

  /// @brief Method set_Time, addr 0x569fc70, size 0x8, virtual false, abstract: false, final false
  inline void set_Time(float_t value);

  /// @brief Method set_TimeHelperOffset, addr 0x569fcb4, size 0xc, virtual false, abstract: false, final false
  inline void set_TimeHelperOffset(::UnityEngine::Vector4 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeHelper(TimeHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeHelper(TimeHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20242 };

  /// @brief Field <DeltaTime>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____DeltaTime_k__BackingField;

  /// @brief Field <FixedDeltaTime>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____FixedDeltaTime_k__BackingField;

  /// @brief Field <InterpolationFactor>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____InterpolationFactor_k__BackingField;

  /// @brief Field <TimeHelperOffset>k__BackingField, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ____TimeHelperOffset_k__BackingField;

  /// @brief Field _time, offset: 0x3c, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _baseFrameCount, offset: 0x40, size: 0x4, def value: None
  int32_t ____baseFrameCount;

  /// @brief Field _accumulator, offset: 0x44, size: 0x4, def value: None
  float_t ____accumulator;

  /// @brief Field _shouldResetAccumulator, offset: 0x48, size: 0x1, def value: None
  bool ____shouldResetAccumulator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeHelper, ____DeltaTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____FixedDeltaTime_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____InterpolationFactor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____TimeHelperOffset_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____time) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____baseFrameCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____accumulator) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____shouldResetAccumulator) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeHelper, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeHelper*, "", "TimeHelper");
