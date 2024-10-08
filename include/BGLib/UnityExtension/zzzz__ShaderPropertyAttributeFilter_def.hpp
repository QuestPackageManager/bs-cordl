#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyAttributeFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderPropertyAttributeFilter)
namespace BGLib::UnityExtension {
struct __ShaderPropertyAttributeFilter__PropType;
}
// Forward declare root types
namespace BGLib::UnityExtension {
struct __ShaderPropertyAttributeFilter__PropType;
}
namespace BGLib::UnityExtension {
class ShaderPropertyAttributeFilter;
}
// Write type traits
MARK_VAL_T(::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType);
MARK_REF_PTR_T(::BGLib::UnityExtension::ShaderPropertyAttributeFilter);
// Type: ::PropType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: true
// CS Name: ::ShaderPropertyAttributeFilter::PropType
struct CORDL_TYPE __ShaderPropertyAttributeFilter__PropType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ShaderPropertyAttributeFilter__PropType_Unwrapped
  enum struct ____ShaderPropertyAttributeFilter__PropType_Unwrapped : int32_t {
    __E_Any = static_cast<int32_t>(0x0),
    __E_Color = static_cast<int32_t>(0x1),
    __E_Vector = static_cast<int32_t>(0x2),
    __E_Float = static_cast<int32_t>(0x3),
    __E_Range = static_cast<int32_t>(0x4),
    __E_Texture = static_cast<int32_t>(0x5),
    __E_Int = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ShaderPropertyAttributeFilter__PropType_Unwrapped() const noexcept {
    return static_cast<____ShaderPropertyAttributeFilter__PropType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShaderPropertyAttributeFilter__PropType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ShaderPropertyAttributeFilter__PropType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0x0)
  static ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const Any;

  /// @brief Field Color value: static_cast<int32_t>(0x1)
  static ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const Color;

  /// @brief Field Float value: static_cast<int32_t>(0x3)
  static ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const Float;

  /// @brief Field Int value: static_cast<int32_t>(0x6)
  static ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const Int;

  /// @brief Field Range value: static_cast<int32_t>(0x4)
  static ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const Range;

  /// @brief Field Texture value: static_cast<int32_t>(0x5)
  static ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const Texture;

  /// @brief Field Vector value: static_cast<int32_t>(0x2)
  static ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const Vector;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17222 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType, value__) == 0x0, "Offset mismatch!");

} // namespace BGLib::UnityExtension
// Type: BGLib.UnityExtension::ShaderPropertyAttributeFilter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: ::BGLib.UnityExtension::ShaderPropertyAttributeFilter*
class CORDL_TYPE ShaderPropertyAttributeFilter : public ::System::Object {
public:
  // Declarations
  using PropType = ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType;

  /// @brief Field nameFilter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nameFilter, put = __cordl_internal_set_nameFilter)) ::StringW nameFilter;

  /// @brief Field propType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_propType, put = __cordl_internal_set_propType)) ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType propType;

  static inline ::BGLib::UnityExtension::ShaderPropertyAttributeFilter* New_ctor(::StringW nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType propType);

  constexpr ::StringW const& __cordl_internal_get_nameFilter() const;

  constexpr ::StringW& __cordl_internal_get_nameFilter();

  constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const& __cordl_internal_get_propType() const;

  constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType& __cordl_internal_get_propType();

  constexpr void __cordl_internal_set_nameFilter(::StringW value);

  constexpr void __cordl_internal_set_propType(::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType value);

  /// @brief Method .ctor, addr 0x2276de0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType propType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPropertyAttributeFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyAttributeFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderPropertyAttributeFilter(ShaderPropertyAttributeFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyAttributeFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderPropertyAttributeFilter(ShaderPropertyAttributeFilter const&) = delete;

  /// @brief Field propType, offset: 0x10, size: 0x4, def value: None
  ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType ___propType;

  /// @brief Field nameFilter, offset: 0x18, size: 0x8, def value: None
  ::StringW ___nameFilter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17223 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::ShaderPropertyAttributeFilter, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::ShaderPropertyAttributeFilter, ___propType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::ShaderPropertyAttributeFilter, ___nameFilter) == 0x18, "Offset mismatch!");

} // namespace BGLib::UnityExtension
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType, "BGLib.UnityExtension", "ShaderPropertyAttributeFilter/PropType");
NEED_NO_BOX(::BGLib::UnityExtension::ShaderPropertyAttributeFilter);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::ShaderPropertyAttributeFilter*, "BGLib.UnityExtension", "ShaderPropertyAttributeFilter");
