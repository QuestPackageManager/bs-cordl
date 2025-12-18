#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BoolParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoolParameter)
namespace UnityEngine::Rendering {
struct BoolParameter_DisplayType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BoolParameter_DisplayType;
}
namespace UnityEngine::Rendering {
class BoolParameter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BoolParameter_DisplayType);
MARK_REF_PTR_T(::UnityEngine::Rendering::BoolParameter);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BoolParameter/DisplayType
struct CORDL_TYPE BoolParameter_DisplayType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BoolParameter_DisplayType_Unwrapped
  enum struct __BoolParameter_DisplayType_Unwrapped : int32_t {
    __E_Checkbox = static_cast<int32_t>(0x0),
    __E_EnumPopup = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BoolParameter_DisplayType_Unwrapped() const noexcept {
    return static_cast<__BoolParameter_DisplayType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolParameter_DisplayType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BoolParameter_DisplayType(int32_t value__) noexcept;

  /// @brief Field Checkbox value: I32(0)
  static ::UnityEngine::Rendering::BoolParameter_DisplayType const Checkbox;

  /// @brief Field EnumPopup value: I32(1)
  static ::UnityEngine::Rendering::BoolParameter_DisplayType const EnumPopup;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12308 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BoolParameter_DisplayType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BoolParameter_DisplayType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.BoolParameter::DisplayType, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BoolParameter
class CORDL_TYPE BoolParameter : public ::UnityEngine::Rendering::VolumeParameter_1<bool> {
public:
  // Declarations
  using DisplayType = ::UnityEngine::Rendering::BoolParameter_DisplayType;

  /// @brief Field displayType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_displayType, put = __cordl_internal_set_displayType)) ::UnityEngine::Rendering::BoolParameter_DisplayType displayType;

  static inline ::UnityEngine::Rendering::BoolParameter* New_ctor(bool value, ::UnityEngine::Rendering::BoolParameter_DisplayType displayType, bool overrideState);

  static inline ::UnityEngine::Rendering::BoolParameter* New_ctor(bool value, bool overrideState);

  constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType const& __cordl_internal_get_displayType() const;

  constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType& __cordl_internal_get_displayType();

  constexpr void __cordl_internal_set_displayType(::UnityEngine::Rendering::BoolParameter_DisplayType value);

  /// @brief Method .ctor, addr 0x66155c0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(bool value, ::UnityEngine::Rendering::BoolParameter_DisplayType displayType, bool overrideState);

  /// @brief Method .ctor, addr 0x6615558, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(bool value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolParameter(BoolParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolParameter(BoolParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12309 };

  /// @brief Field displayType, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::BoolParameter_DisplayType ___displayType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BoolParameter, ___displayType) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BoolParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BoolParameter_DisplayType, "UnityEngine.Rendering", "BoolParameter/DisplayType");
NEED_NO_BOX(::UnityEngine::Rendering::BoolParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BoolParameter*, "UnityEngine.Rendering", "BoolParameter");
