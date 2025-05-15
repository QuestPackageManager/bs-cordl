#pragma once
// IWYU pragma private; include "GlobalNamespace/GetXPlatformAccessTokenRequestSony.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetXPlatformAccessTokenRequestSony)
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenRequestSony;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GetXPlatformAccessTokenRequestSony);
// Dependencies PlatformEnvironment, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetXPlatformAccessTokenRequestSony
class CORDL_TYPE GetXPlatformAccessTokenRequestSony : public ::System::Object {
public:
  // Declarations
  /// @brief Field platformEnvironment, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_platformEnvironment, put = __cordl_internal_set_platformEnvironment)) ::GlobalNamespace::PlatformEnvironment platformEnvironment;

  /// @brief Field platformToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_platformToken, put = __cordl_internal_set_platformToken)) ::StringW platformToken;

  static inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSony* New_ctor(::StringW platformToken, ::GlobalNamespace::PlatformEnvironment platformEnvironment);

  constexpr ::GlobalNamespace::PlatformEnvironment const& __cordl_internal_get_platformEnvironment() const;

  constexpr ::GlobalNamespace::PlatformEnvironment& __cordl_internal_get_platformEnvironment();

  constexpr ::StringW const& __cordl_internal_get_platformToken() const;

  constexpr ::StringW& __cordl_internal_get_platformToken();

  constexpr void __cordl_internal_set_platformEnvironment(::GlobalNamespace::PlatformEnvironment value);

  constexpr void __cordl_internal_set_platformToken(::StringW value);

  /// @brief Method .ctor, addr 0x4080bf8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW platformToken, ::GlobalNamespace::PlatformEnvironment platformEnvironment);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetXPlatformAccessTokenRequestSony();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSony", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetXPlatformAccessTokenRequestSony(GetXPlatformAccessTokenRequestSony&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSony", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetXPlatformAccessTokenRequestSony(GetXPlatformAccessTokenRequestSony const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18765 };

  /// @brief Field platformToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ___platformToken;

  /// @brief Field platformEnvironment, offset: 0x18, size: 0x1, def value: None
  ::GlobalNamespace::PlatformEnvironment ___platformEnvironment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetXPlatformAccessTokenRequestSony, ___platformToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetXPlatformAccessTokenRequestSony, ___platformEnvironment) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetXPlatformAccessTokenRequestSony, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GetXPlatformAccessTokenRequestSony);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetXPlatformAccessTokenRequestSony*, "", "GetXPlatformAccessTokenRequestSony");
