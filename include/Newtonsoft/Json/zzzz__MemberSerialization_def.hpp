#pragma once
// IWYU pragma private; include "Newtonsoft/Json/MemberSerialization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemberSerialization)
// Forward declare root types
namespace Newtonsoft::Json {
struct MemberSerialization;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::MemberSerialization);
// Type: Newtonsoft.Json::MemberSerialization
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::Newtonsoft.Json::MemberSerialization
struct CORDL_TYPE MemberSerialization {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MemberSerialization_Unwrapped
  enum struct __MemberSerialization_Unwrapped : int32_t {
    __E_OptOut = static_cast<int32_t>(0x0),
    __E_OptIn = static_cast<int32_t>(0x1),
    __E_Fields = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MemberSerialization_Unwrapped() const noexcept {
    return static_cast<__MemberSerialization_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberSerialization();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MemberSerialization(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Fields value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::MemberSerialization const Fields;

  /// @brief Field OptIn value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::MemberSerialization const OptIn;

  /// @brief Field OptOut value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::MemberSerialization const OptOut;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10133 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::MemberSerialization, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::MemberSerialization, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::MemberSerialization, "Newtonsoft.Json", "MemberSerialization");
