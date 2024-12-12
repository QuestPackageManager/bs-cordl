#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeFieldAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeFieldAttribute)
namespace UnityEngine::Timeline {
struct TimeFieldAttribute_UseEditMode;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct TimeFieldAttribute_UseEditMode;
}
namespace UnityEngine::Timeline {
class TimeFieldAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeFieldAttribute);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimeFieldAttribute/UseEditMode
struct CORDL_TYPE TimeFieldAttribute_UseEditMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimeFieldAttribute_UseEditMode_Unwrapped
  enum struct __TimeFieldAttribute_UseEditMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ApplyEditMode = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeFieldAttribute_UseEditMode_Unwrapped() const noexcept {
    return static_cast<__TimeFieldAttribute_UseEditMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeFieldAttribute_UseEditMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeFieldAttribute_UseEditMode(int32_t value__) noexcept;

  /// @brief Field ApplyEditMode value: I32(1)
  static ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode const ApplyEditMode;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15879 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.PropertyAttribute, UnityEngine.Timeline.TimeFieldAttribute::UseEditMode
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimeFieldAttribute
class CORDL_TYPE TimeFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  using UseEditMode = ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode;

  /// @brief Field <useEditMode>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__useEditMode_k__BackingField,
                      put = __cordl_internal_set__useEditMode_k__BackingField)) ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode _useEditMode_k__BackingField;

  __declspec(property(get = get_useEditMode)) ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode useEditMode;

  static inline ::UnityEngine::Timeline::TimeFieldAttribute* New_ctor(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode useEditMode);

  constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode const& __cordl_internal_get__useEditMode_k__BackingField() const;

  constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode& __cordl_internal_get__useEditMode_k__BackingField();

  constexpr void __cordl_internal_set__useEditMode_k__BackingField(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode value);

  /// @brief Method .ctor, addr 0x48292e4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode useEditMode);

  /// @brief Method get_useEditMode, addr 0x48292dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode get_useEditMode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeFieldAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeFieldAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeFieldAttribute(TimeFieldAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeFieldAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeFieldAttribute(TimeFieldAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15880 };

  /// @brief Field <useEditMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode ____useEditMode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimeFieldAttribute, ____useEditMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeFieldAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode, "UnityEngine.Timeline", "TimeFieldAttribute/UseEditMode");
NEED_NO_BOX(::UnityEngine::Timeline::TimeFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeFieldAttribute*, "UnityEngine.Timeline", "TimeFieldAttribute");
