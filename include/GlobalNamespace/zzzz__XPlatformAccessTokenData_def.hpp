#pragma once
// IWYU pragma private; include "GlobalNamespace/XPlatformAccessTokenData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPlatformAccessTokenData)
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XPlatformAccessTokenData);
// Type: ::XPlatformAccessTokenData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::XPlatformAccessTokenData
struct CORDL_TYPE XPlatformAccessTokenData {
public:
  // Declarations
  /// @brief Field invalid, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_invalid, put = setStaticF_invalid))::GlobalNamespace::XPlatformAccessTokenData invalid;

  /// @brief Method IsValid, addr 0x10b6d80, size 0x40, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x10b6d74, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment platformEnvironment);

  static inline ::GlobalNamespace::XPlatformAccessTokenData getStaticF_invalid();

  static inline void setStaticF_invalid(::GlobalNamespace::XPlatformAccessTokenData value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XPlatformAccessTokenData();

  // Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformEnvironment", ty: "::GlobalNamespace::PlatformEnvironment", modifiers: "",
  // def_value: None }]
  constexpr XPlatformAccessTokenData(::StringW token, ::GlobalNamespace::PlatformEnvironment platformEnvironment) noexcept;

  /// @brief Field token, offset: 0x0, size: 0x8, def value: None
  ::StringW token;

  /// @brief Field platformEnvironment, offset: 0x8, size: 0x1, def value: None
  ::GlobalNamespace::PlatformEnvironment platformEnvironment;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kMinimalTokenLength offset 0xffffffff size 0x4
  static constexpr int32_t kMinimalTokenLength{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XPlatformAccessTokenData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::XPlatformAccessTokenData, token) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XPlatformAccessTokenData, platformEnvironment) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XPlatformAccessTokenData, "", "XPlatformAccessTokenData");
