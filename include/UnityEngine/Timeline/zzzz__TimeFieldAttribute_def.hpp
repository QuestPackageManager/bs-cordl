#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeFieldAttribute)
namespace UnityEngine::Timeline {
struct __TimeFieldAttribute__UseEditMode;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __TimeFieldAttribute__UseEditMode;
}
namespace UnityEngine::Timeline {
class TimeFieldAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeFieldAttribute);
// Type: ::UseEditMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::TimeFieldAttribute::UseEditMode
struct CORDL_TYPE __TimeFieldAttribute__UseEditMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimeFieldAttribute__UseEditMode_Unwrapped
  enum struct ____TimeFieldAttribute__UseEditMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ApplyEditMode = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimeFieldAttribute__UseEditMode_Unwrapped() const noexcept {
    return static_cast<____TimeFieldAttribute__UseEditMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeFieldAttribute__UseEditMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimeFieldAttribute__UseEditMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ApplyEditMode value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode const ApplyEditMode;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimeFieldAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::TimeFieldAttribute*
class CORDL_TYPE TimeFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  using UseEditMode = ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode;

  /// @brief Field <useEditMode>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__useEditMode_k__BackingField,
                      put = __cordl_internal_set__useEditMode_k__BackingField))::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode _useEditMode_k__BackingField;

  __declspec(property(get = get_useEditMode))::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode useEditMode;

  static inline ::UnityEngine::Timeline::TimeFieldAttribute* New_ctor(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode useEditMode);

  constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode const& __cordl_internal_get__useEditMode_k__BackingField() const;

  constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode& __cordl_internal_get__useEditMode_k__BackingField();

  constexpr void __cordl_internal_set__useEditMode_k__BackingField(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode value);

  /// @brief Method .ctor, addr 0x2d553a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode useEditMode);

  /// @brief Method get_useEditMode, addr 0x2d553a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode get_useEditMode();

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

  /// @brief Field <useEditMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode ____useEditMode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeFieldAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeFieldAttribute, ____useEditMode_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, "UnityEngine.Timeline", "TimeFieldAttribute/UseEditMode");
NEED_NO_BOX(::UnityEngine::Timeline::TimeFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeFieldAttribute*, "UnityEngine.Timeline", "TimeFieldAttribute");
