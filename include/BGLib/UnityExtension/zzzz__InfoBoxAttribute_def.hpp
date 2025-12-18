#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/InfoBoxAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InfoBoxAttribute)
namespace BGLib::UnityExtension {
struct InfoBoxAttribute_Type;
}
// Forward declare root types
namespace BGLib::UnityExtension {
struct InfoBoxAttribute_Type;
}
namespace BGLib::UnityExtension {
class InfoBoxAttribute;
}
// Write type traits
MARK_VAL_T(::BGLib::UnityExtension::InfoBoxAttribute_Type);
MARK_REF_PTR_T(::BGLib::UnityExtension::InfoBoxAttribute);
// Dependencies
namespace BGLib::UnityExtension {
// Is value type: true
// CS Name: BGLib.UnityExtension.InfoBoxAttribute/Type
struct CORDL_TYPE InfoBoxAttribute_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InfoBoxAttribute_Type_Unwrapped
  enum struct __InfoBoxAttribute_Type_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Info = static_cast<int32_t>(0x1),
    __E_Warning = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InfoBoxAttribute_Type_Unwrapped() const noexcept {
    return static_cast<__InfoBoxAttribute_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InfoBoxAttribute_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InfoBoxAttribute_Type(int32_t value__) noexcept;

  /// @brief Field Error value: I32(3)
  static ::BGLib::UnityExtension::InfoBoxAttribute_Type const Error;

  /// @brief Field Info value: I32(1)
  static ::BGLib::UnityExtension::InfoBoxAttribute_Type const Info;

  /// @brief Field None value: I32(0)
  static ::BGLib::UnityExtension::InfoBoxAttribute_Type const None;

  /// @brief Field Warning value: I32(2)
  static ::BGLib::UnityExtension::InfoBoxAttribute_Type const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20729 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::InfoBoxAttribute_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::InfoBoxAttribute_Type, 0x4>, "Size mismatch!");

} // namespace BGLib::UnityExtension
// Dependencies BGLib.UnityExtension.InfoBoxAttribute::Type, UnityEngine.PropertyAttribute
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.InfoBoxAttribute
class CORDL_TYPE InfoBoxAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  using Type = ::BGLib::UnityExtension::InfoBoxAttribute_Type;

  /// @brief Field info, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info)) ::StringW info;

  /// @brief Field messageType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_messageType, put = __cordl_internal_set_messageType)) ::BGLib::UnityExtension::InfoBoxAttribute_Type messageType;

  static inline ::BGLib::UnityExtension::InfoBoxAttribute* New_ctor(::StringW info, ::BGLib::UnityExtension::InfoBoxAttribute_Type messageType);

  constexpr ::StringW const& __cordl_internal_get_info() const;

  constexpr ::StringW& __cordl_internal_get_info();

  constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type const& __cordl_internal_get_messageType() const;

  constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type& __cordl_internal_get_messageType();

  constexpr void __cordl_internal_set_info(::StringW value);

  constexpr void __cordl_internal_set_messageType(::BGLib::UnityExtension::InfoBoxAttribute_Type value);

  /// @brief Method .ctor, addr 0x322ef28, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW info, ::BGLib::UnityExtension::InfoBoxAttribute_Type messageType);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20730 };

  /// @brief Field info, offset: 0x18, size: 0x8, def value: None
  ::StringW ___info;

  /// @brief Field messageType, offset: 0x20, size: 0x4, def value: None
  ::BGLib::UnityExtension::InfoBoxAttribute_Type ___messageType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::InfoBoxAttribute, ___info) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::InfoBoxAttribute, ___messageType) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::InfoBoxAttribute, 0x28>, "Size mismatch!");

} // namespace BGLib::UnityExtension
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::InfoBoxAttribute_Type, "BGLib.UnityExtension", "InfoBoxAttribute/Type");
NEED_NO_BOX(::BGLib::UnityExtension::InfoBoxAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::InfoBoxAttribute*, "BGLib.UnityExtension", "InfoBoxAttribute");
