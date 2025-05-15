#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformUserAuthTokenData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformUserAuthTokenData)
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformUserAuthTokenData);
// Dependencies PlatformEnvironment, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformUserAuthTokenData
class CORDL_TYPE PlatformUserAuthTokenData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <token>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__token_k__BackingField, put = __cordl_internal_set__token_k__BackingField)) ::StringW _token_k__BackingField;

  /// @brief Field <validPlatformEnvironment>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__validPlatformEnvironment_k__BackingField,
                      put = __cordl_internal_set__validPlatformEnvironment_k__BackingField)) ::GlobalNamespace::PlatformEnvironment _validPlatformEnvironment_k__BackingField;

  __declspec(property(get = get_token, put = set_token)) ::StringW token;

  __declspec(property(get = get_validPlatformEnvironment, put = set_validPlatformEnvironment)) ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment;

  static inline ::GlobalNamespace::PlatformUserAuthTokenData* New_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment);

  constexpr ::StringW const& __cordl_internal_get__token_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__token_k__BackingField();

  constexpr ::GlobalNamespace::PlatformEnvironment const& __cordl_internal_get__validPlatformEnvironment_k__BackingField() const;

  constexpr ::GlobalNamespace::PlatformEnvironment& __cordl_internal_get__validPlatformEnvironment_k__BackingField();

  constexpr void __cordl_internal_set__token_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__validPlatformEnvironment_k__BackingField(::GlobalNamespace::PlatformEnvironment value);

  /// @brief Method .ctor, addr 0x407f328, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment);

  /// @brief Method get_token, addr 0x407f308, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_token();

  /// @brief Method get_validPlatformEnvironment, addr 0x407f318, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlatformEnvironment get_validPlatformEnvironment();

  /// @brief Method set_token, addr 0x407f310, size 0x8, virtual false, abstract: false, final false
  inline void set_token(::StringW value);

  /// @brief Method set_validPlatformEnvironment, addr 0x407f320, size 0x8, virtual false, abstract: false, final false
  inline void set_validPlatformEnvironment(::GlobalNamespace::PlatformEnvironment value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUserAuthTokenData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformUserAuthTokenData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUserAuthTokenData(PlatformUserAuthTokenData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUserAuthTokenData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUserAuthTokenData(PlatformUserAuthTokenData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18752 };

  /// @brief Field <token>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____token_k__BackingField;

  /// @brief Field <validPlatformEnvironment>k__BackingField, offset: 0x18, size: 0x1, def value: None
  ::GlobalNamespace::PlatformEnvironment ____validPlatformEnvironment_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformUserAuthTokenData, ____token_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformUserAuthTokenData, ____validPlatformEnvironment_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformUserAuthTokenData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformUserAuthTokenData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformUserAuthTokenData*, "", "PlatformUserAuthTokenData");
