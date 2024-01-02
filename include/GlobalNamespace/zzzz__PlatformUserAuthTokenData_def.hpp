#pragma once
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
// Type: ::PlatformUserAuthTokenData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15982))
// CS Name: ::PlatformUserAuthTokenData*
class CORDL_TYPE PlatformUserAuthTokenData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <token>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__token_k__BackingField, put = __set__token_k__BackingField))::StringW _token_k__BackingField;

  /// @brief Field <validPlatformEnvironment>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__validPlatformEnvironment_k__BackingField,
                      put = __set__validPlatformEnvironment_k__BackingField))::GlobalNamespace::PlatformEnvironment _validPlatformEnvironment_k__BackingField;

  __declspec(property(get = get_token, put = set_token))::StringW token;

  __declspec(property(get = get_validPlatformEnvironment, put = set_validPlatformEnvironment))::GlobalNamespace::PlatformEnvironment validPlatformEnvironment;

  constexpr ::StringW& __get__token_k__BackingField();

  constexpr ::StringW const& __get__token_k__BackingField() const;

  constexpr void __set__token_k__BackingField(::StringW value);

  constexpr ::GlobalNamespace::PlatformEnvironment& __get__validPlatformEnvironment_k__BackingField();

  constexpr ::GlobalNamespace::PlatformEnvironment const& __get__validPlatformEnvironment_k__BackingField() const;

  constexpr void __set__validPlatformEnvironment_k__BackingField(::GlobalNamespace::PlatformEnvironment value);

  /// @brief Method get_token, addr 0x27fde4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_token();

  /// @brief Method set_token, addr 0x27fde54, size 0x8, virtual false, abstract: false, final false
  inline void set_token(::StringW value);

  /// @brief Method get_validPlatformEnvironment, addr 0x27fde5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlatformEnvironment get_validPlatformEnvironment();

  /// @brief Method set_validPlatformEnvironment, addr 0x27fde64, size 0x8, virtual false, abstract: false, final false
  inline void set_validPlatformEnvironment(::GlobalNamespace::PlatformEnvironment value);

  static inline ::GlobalNamespace::PlatformUserAuthTokenData* New_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment);

  /// @brief Method .ctor, addr 0x27fde6c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment);

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUserAuthTokenData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUserAuthTokenData(PlatformUserAuthTokenData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUserAuthTokenData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUserAuthTokenData(PlatformUserAuthTokenData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUserAuthTokenData();

public:
  /// @brief Field <token>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____token_k__BackingField;

  /// @brief Field <validPlatformEnvironment>k__BackingField, offset: 0x18, size: 0x1, def value: None
  ::GlobalNamespace::PlatformEnvironment ____validPlatformEnvironment_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformUserAuthTokenData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformUserAuthTokenData, ____token_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformUserAuthTokenData, ____validPlatformEnvironment_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformUserAuthTokenData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformUserAuthTokenData*, "", "PlatformUserAuthTokenData");
