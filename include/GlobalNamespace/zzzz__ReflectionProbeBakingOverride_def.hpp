#pragma once
// IWYU pragma private; include "GlobalNamespace/ReflectionProbeBakingOverride.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ReflectionProbeBakingOverride_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeBakingOverride)
namespace GlobalNamespace {
struct __ReflectionProbeBakingOverride__ActiveStateHandling;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ReflectionProbeBakingOverride__ActiveStateHandling;
}
namespace GlobalNamespace {
class ReflectionProbeBakingOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling);
MARK_REF_PTR_T(::GlobalNamespace::ReflectionProbeBakingOverride);
// Type: ::ActiveStateHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ReflectionProbeBakingOverride::ActiveStateHandling
struct CORDL_TYPE __ReflectionProbeBakingOverride__ActiveStateHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped
  enum struct ____ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped : int32_t {
    __E_LeaveAsIs = static_cast<int32_t>(0x0),
    __E_Enable = static_cast<int32_t>(0x1),
    __E_Disable = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped() const noexcept {
    return static_cast<____ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionProbeBakingOverride__ActiveStateHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReflectionProbeBakingOverride__ActiveStateHandling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disable value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const Disable;

  /// @brief Field Enable value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const Enable;

  /// @brief Field LeaveAsIs value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const LeaveAsIs;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5038 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ReflectionProbeBakingOverride
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReflectionProbeBakingOverride*
class CORDL_TYPE ReflectionProbeBakingOverride : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ActiveStateHandling = ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling;

  /// @brief Field _localPosition, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__localPosition, put = __cordl_internal_set__localPosition)) ::UnityEngine::Vector3 _localPosition;

  /// @brief Field _localRotation, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__localRotation, put = __cordl_internal_set__localRotation)) ::UnityEngine::Vector3 _localRotation;

  /// @brief Field _localScale, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__localScale, put = __cordl_internal_set__localScale)) ::UnityEngine::Vector3 _localScale;

  /// @brief Field _setPosition, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__setPosition, put = __cordl_internal_set__setPosition)) bool _setPosition;

  /// @brief Field _setRotation, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__setRotation, put = __cordl_internal_set__setRotation)) bool _setRotation;

  /// @brief Field _setScale, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__setScale, put = __cordl_internal_set__setScale)) bool _setScale;

  /// @brief Field _stateHandling, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__stateHandling, put = __cordl_internal_set__stateHandling)) ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling _stateHandling;

  static inline ::GlobalNamespace::ReflectionProbeBakingOverride* New_ctor();

  /// @brief Method UpdateForProbeBaking, addr 0x3aa4374, size 0xe8, virtual false, abstract: false, final false
  inline void UpdateForProbeBaking();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localScale();

  constexpr bool const& __cordl_internal_get__setPosition() const;

  constexpr bool& __cordl_internal_get__setPosition();

  constexpr bool const& __cordl_internal_get__setRotation() const;

  constexpr bool& __cordl_internal_get__setRotation();

  constexpr bool const& __cordl_internal_get__setScale() const;

  constexpr bool& __cordl_internal_get__setScale();

  constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const& __cordl_internal_get__stateHandling() const;

  constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling& __cordl_internal_get__stateHandling();

  constexpr void __cordl_internal_set__localPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__localRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__localScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__setPosition(bool value);

  constexpr void __cordl_internal_set__setRotation(bool value);

  constexpr void __cordl_internal_set__setScale(bool value);

  constexpr void __cordl_internal_set__stateHandling(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling value);

  /// @brief Method .ctor, addr 0x3aa445c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeBakingOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbeBakingOverride(ReflectionProbeBakingOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbeBakingOverride(ReflectionProbeBakingOverride const&) = delete;

  /// @brief Field _stateHandling, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling ____stateHandling;

  /// @brief Field _setPosition, offset: 0x24, size: 0x1, def value: None
  bool ____setPosition;

  /// @brief Field _localPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  /// @brief Field _setRotation, offset: 0x34, size: 0x1, def value: None
  bool ____setRotation;

  /// @brief Field _localRotation, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localRotation;

  /// @brief Field _setScale, offset: 0x44, size: 0x1, def value: None
  bool ____setScale;

  /// @brief Field _localScale, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localScale;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReflectionProbeBakingOverride, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeBakingOverride, ____stateHandling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeBakingOverride, ____setPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeBakingOverride, ____localPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeBakingOverride, ____setRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeBakingOverride, ____localRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeBakingOverride, ____setScale) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeBakingOverride, ____localScale) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling, "", "ReflectionProbeBakingOverride/ActiveStateHandling");
NEED_NO_BOX(::GlobalNamespace::ReflectionProbeBakingOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionProbeBakingOverride*, "", "ReflectionProbeBakingOverride");
