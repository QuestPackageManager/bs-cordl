#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/InfoBoxAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__InfoBoxAttribute_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InfoBoxAttribute)
namespace BGLib::UnityExtension {
struct __InfoBoxAttribute__Type;
}
// Forward declare root types
namespace BGLib::UnityExtension {
struct __InfoBoxAttribute__Type;
}
namespace BGLib::UnityExtension {
class InfoBoxAttribute;
}
// Write type traits
MARK_VAL_T(::BGLib::UnityExtension::__InfoBoxAttribute__Type);
MARK_REF_PTR_T(::BGLib::UnityExtension::InfoBoxAttribute);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: true
// CS Name: ::InfoBoxAttribute::Type
struct CORDL_TYPE __InfoBoxAttribute__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InfoBoxAttribute__Type_Unwrapped
  enum struct ____InfoBoxAttribute__Type_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Info = static_cast<int32_t>(0x1),
    __E_Warning = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InfoBoxAttribute__Type_Unwrapped() const noexcept {
    return static_cast<____InfoBoxAttribute__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InfoBoxAttribute__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InfoBoxAttribute__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x3)
  static ::BGLib::UnityExtension::__InfoBoxAttribute__Type const Error;

  /// @brief Field Info value: static_cast<int32_t>(0x1)
  static ::BGLib::UnityExtension::__InfoBoxAttribute__Type const Info;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::BGLib::UnityExtension::__InfoBoxAttribute__Type const None;

  /// @brief Field Warning value: static_cast<int32_t>(0x2)
  static ::BGLib::UnityExtension::__InfoBoxAttribute__Type const Warning;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::__InfoBoxAttribute__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__InfoBoxAttribute__Type, value__) == 0x0, "Offset mismatch!");

} // namespace BGLib::UnityExtension
// Type: BGLib.UnityExtension::InfoBoxAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: ::BGLib.UnityExtension::InfoBoxAttribute*
class CORDL_TYPE InfoBoxAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  using Type = ::BGLib::UnityExtension::__InfoBoxAttribute__Type;

  /// @brief Field info, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info))::StringW info;

  /// @brief Field messageType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_messageType, put = __cordl_internal_set_messageType))::BGLib::UnityExtension::__InfoBoxAttribute__Type messageType;

  static inline ::BGLib::UnityExtension::InfoBoxAttribute* New_ctor(::StringW info, ::BGLib::UnityExtension::__InfoBoxAttribute__Type messageType);

  constexpr ::StringW const& __cordl_internal_get_info() const;

  constexpr ::StringW& __cordl_internal_get_info();

  constexpr ::BGLib::UnityExtension::__InfoBoxAttribute__Type const& __cordl_internal_get_messageType() const;

  constexpr ::BGLib::UnityExtension::__InfoBoxAttribute__Type& __cordl_internal_get_messageType();

  constexpr void __cordl_internal_set_info(::StringW value);

  constexpr void __cordl_internal_set_messageType(::BGLib::UnityExtension::__InfoBoxAttribute__Type value);

  /// @brief Method .ctor, addr 0x108d478, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW info, ::BGLib::UnityExtension::__InfoBoxAttribute__Type messageType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfoBoxAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InfoBoxAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfoBoxAttribute(InfoBoxAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfoBoxAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfoBoxAttribute(InfoBoxAttribute const&) = delete;

  /// @brief Field info, offset: 0x10, size: 0x8, def value: None
  ::StringW ___info;

  /// @brief Field messageType, offset: 0x18, size: 0x4, def value: None
  ::BGLib::UnityExtension::__InfoBoxAttribute__Type ___messageType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::InfoBoxAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::InfoBoxAttribute, ___info) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::InfoBoxAttribute, ___messageType) == 0x18, "Offset mismatch!");

} // namespace BGLib::UnityExtension
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::__InfoBoxAttribute__Type, "BGLib.UnityExtension", "InfoBoxAttribute/Type");
NEED_NO_BOX(::BGLib::UnityExtension::InfoBoxAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::InfoBoxAttribute*, "BGLib.UnityExtension", "InfoBoxAttribute");
