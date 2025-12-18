#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/OTL_FeatureTag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OTL_FeatureTag)
// Forward declare root types
namespace UnityEngine::TextCore {
struct OTL_FeatureTag;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::OTL_FeatureTag);
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.OTL_FeatureTag
struct CORDL_TYPE OTL_FeatureTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __OTL_FeatureTag_Unwrapped
  enum struct __OTL_FeatureTag_Unwrapped : uint32_t {
    __E_kern = static_cast<uint32_t>(0x6b65726eu),
    __E_liga = static_cast<uint32_t>(0x6c696761u),
    __E_mark = static_cast<uint32_t>(0x6d61726bu),
    __E_mkmk = static_cast<uint32_t>(0x6d6b6d6bu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OTL_FeatureTag_Unwrapped() const noexcept {
    return static_cast<__OTL_FeatureTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OTL_FeatureTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr OTL_FeatureTag(uint32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15813 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kern value: U32(1801810542)
  static ::UnityEngine::TextCore::OTL_FeatureTag const kern;

  /// @brief Field liga value: U32(1818847073)
  static ::UnityEngine::TextCore::OTL_FeatureTag const liga;

  /// @brief Field mark value: U32(1835102827)
  static ::UnityEngine::TextCore::OTL_FeatureTag const mark;

  /// @brief Field mkmk value: U32(1835756907)
  static ::UnityEngine::TextCore::OTL_FeatureTag const mkmk;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::OTL_FeatureTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::OTL_FeatureTag, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::OTL_FeatureTag, "UnityEngine.TextCore", "OTL_FeatureTag");
