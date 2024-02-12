#pragma once
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
// Type: ::TimeHelper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14503))
// CS Name: ::TimeHelper*
class CORDL_TYPE TimeHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _accumulator, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__accumulator, put = __cordl_internal_set__accumulator)) float_t _accumulator;

  /// @brief Field <time>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__time_k__BackingField, put = setStaticF__time_k__BackingField)) float_t _time_k__BackingField;

  /// @brief Field <deltaTime>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__deltaTime_k__BackingField, put = setStaticF__deltaTime_k__BackingField)) float_t _deltaTime_k__BackingField;

  /// @brief Field <fixedDeltaTime>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__fixedDeltaTime_k__BackingField, put = setStaticF__fixedDeltaTime_k__BackingField)) float_t _fixedDeltaTime_k__BackingField;

  /// @brief Field <interpolationFactor>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__interpolationFactor_k__BackingField, put = setStaticF__interpolationFactor_k__BackingField)) float_t _interpolationFactor_k__BackingField;

  constexpr float_t& __cordl_internal_get__accumulator();

  constexpr float_t const& __cordl_internal_get__accumulator() const;

  constexpr void __cordl_internal_set__accumulator(float_t value);

  static inline void setStaticF__time_k__BackingField(float_t value);

  static inline float_t getStaticF__time_k__BackingField();

  static inline void setStaticF__deltaTime_k__BackingField(float_t value);

  static inline float_t getStaticF__deltaTime_k__BackingField();

  static inline void setStaticF__fixedDeltaTime_k__BackingField(float_t value);

  static inline float_t getStaticF__fixedDeltaTime_k__BackingField();

  static inline void setStaticF__interpolationFactor_k__BackingField(float_t value);

  static inline float_t getStaticF__interpolationFactor_k__BackingField();

  /// @brief Method get_time, addr 0x2184e18, size 0x48, virtual false, abstract: false, final false
  static inline float_t get_time();

  /// @brief Method set_time, addr 0x2184e60, size 0x54, virtual false, abstract: false, final false
  static inline void set_time(float_t value);

  /// @brief Method get_deltaTime, addr 0x2184eb4, size 0x48, virtual false, abstract: false, final false
  static inline float_t get_deltaTime();

  /// @brief Method set_deltaTime, addr 0x2184efc, size 0x54, virtual false, abstract: false, final false
  static inline void set_deltaTime(float_t value);

  /// @brief Method get_fixedDeltaTime, addr 0x2184f50, size 0x48, virtual false, abstract: false, final false
  static inline float_t get_fixedDeltaTime();

  /// @brief Method set_fixedDeltaTime, addr 0x2184f98, size 0x54, virtual false, abstract: false, final false
  static inline void set_fixedDeltaTime(float_t value);

  /// @brief Method get_interpolationFactor, addr 0x2184fec, size 0x48, virtual false, abstract: false, final false
  static inline float_t get_interpolationFactor();

  /// @brief Method set_interpolationFactor, addr 0x2185034, size 0x54, virtual false, abstract: false, final false
  static inline void set_interpolationFactor(float_t value);

  /// @brief Method Awake, addr 0x2185088, size 0x94, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x218511c, size 0x94, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Update, addr 0x21851b0, size 0x174, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method __SetTime, addr 0x2185324, size 0x4c, virtual false, abstract: false, final false
  static inline void __SetTime(float_t time);

  static inline ::GlobalNamespace::TimeHelper* New_ctor();

  /// @brief Method .ctor, addr 0x2185370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeHelper(TimeHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeHelper(TimeHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeHelper();

public:
  /// @brief Field _accumulator, offset: 0x18, size: 0x4, def value: None
  float_t ____accumulator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeHelper, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____accumulator) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeHelper*, "", "TimeHelper");
