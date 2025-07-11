#pragma once
// IWYU pragma private; include "System/Net/HeaderVariantInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CookieVariant_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HeaderVariantInfo)
namespace System::Net {
struct CookieVariant;
}
// Forward declare root types
namespace System::Net {
struct HeaderVariantInfo;
}
// Write type traits
MARK_VAL_T(::System::Net::HeaderVariantInfo);
// Dependencies System.Net.CookieVariant
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HeaderVariantInfo
struct CORDL_TYPE HeaderVariantInfo {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Variant)) ::System::Net::CookieVariant Variant;

  /// @brief Method .ctor, addr 0x44b0a10, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Net::CookieVariant variant);

  /// @brief Method get_Name, addr 0x44b0a1c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Variant, addr 0x44b0a24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::CookieVariant get_Variant();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderVariantInfo();

  // Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_variant", ty: "::System::Net::CookieVariant", modifiers: "", def_value: None }]
  constexpr HeaderVariantInfo(::StringW m_name, ::System::Net::CookieVariant m_variant) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9650 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_name;

  /// @brief Field m_variant, offset: 0x8, size: 0x4, def value: None
  ::System::Net::CookieVariant m_variant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HeaderVariantInfo, m_name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HeaderVariantInfo, m_variant) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HeaderVariantInfo, 0x10>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderVariantInfo, "System.Net", "HeaderVariantInfo");
