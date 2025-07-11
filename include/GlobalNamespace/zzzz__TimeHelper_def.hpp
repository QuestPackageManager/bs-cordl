#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeHelper)
// Forward declare root types
namespace GlobalNamespace {
class TimeHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeHelper);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimeHelper
class CORDL_TYPE TimeHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _accumulator, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__accumulator, put = __cordl_internal_set__accumulator)) float_t _accumulator;

  /// @brief Field <deltaTime>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__deltaTime_k__BackingField, put = setStaticF__deltaTime_k__BackingField)) float_t _deltaTime_k__BackingField;

  /// @brief Field <fixedDeltaTime>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__fixedDeltaTime_k__BackingField, put = setStaticF__fixedDeltaTime_k__BackingField)) float_t _fixedDeltaTime_k__BackingField;

  /// @brief Field <interpolationFactor>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__interpolationFactor_k__BackingField, put = setStaticF__interpolationFactor_k__BackingField)) float_t _interpolationFactor_k__BackingField;

  /// @brief Field _time, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__time, put = setStaticF__time)) float_t _time;

  /// @brief Method Awake, addr 0x39c0378, size 0x94, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x39c040c, size 0x94, virtual false, abstract: false, final false
  inline void FixedUpdate();

  static inline ::GlobalNamespace::TimeHelper* New_ctor();

  /// @brief Method Update, addr 0x39c04a0, size 0x170, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method __SetTime, addr 0x39c0610, size 0x4c, virtual false, abstract: false, final false
  static inline void __SetTime(float_t time);

  constexpr float_t const& __cordl_internal_get__accumulator() const;

  constexpr float_t& __cordl_internal_get__accumulator();

  constexpr void __cordl_internal_set__accumulator(float_t value);

  /// @brief Method .ctor, addr 0x39c065c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF__deltaTime_k__BackingField();

  static inline float_t getStaticF__fixedDeltaTime_k__BackingField();

  static inline float_t getStaticF__interpolationFactor_k__BackingField();

  static inline float_t getStaticF__time();

  /// @brief Method get_deltaTime, addr 0x39c01a4, size 0x48, virtual false, abstract: false, final false
  static inline float_t get_deltaTime();

  /// @brief Method get_fixedDeltaTime, addr 0x39c0240, size 0x48, virtual false, abstract: false, final false
  static inline float_t get_fixedDeltaTime();

  /// @brief Method get_interpolationFactor, addr 0x39c02dc, size 0x48, virtual false, abstract: false, final false
  static inline float_t get_interpolationFactor();

  /// @brief Method get_time, addr 0x39c0108, size 0x48, virtual false, abstract: false, final false
  static inline float_t get_time();

  static inline void setStaticF__deltaTime_k__BackingField(float_t value);

  static inline void setStaticF__fixedDeltaTime_k__BackingField(float_t value);

  static inline void setStaticF__interpolationFactor_k__BackingField(float_t value);

  static inline void setStaticF__time(float_t value);

  /// @brief Method set_deltaTime, addr 0x39c01ec, size 0x54, virtual false, abstract: false, final false
  static inline void set_deltaTime(float_t value);

  /// @brief Method set_fixedDeltaTime, addr 0x39c0288, size 0x54, virtual false, abstract: false, final false
  static inline void set_fixedDeltaTime(float_t value);

  /// @brief Method set_interpolationFactor, addr 0x39c0324, size 0x54, virtual false, abstract: false, final false
  static inline void set_interpolationFactor(float_t value);

  /// @brief Method set_time, addr 0x39c0150, size 0x54, virtual false, abstract: false, final false
  static inline void set_time(float_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16408 };

  /// @brief Field _accumulator, offset: 0x20, size: 0x4, def value: None
  float_t ____accumulator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeHelper, ____accumulator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeHelper, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeHelper*, "", "TimeHelper");
