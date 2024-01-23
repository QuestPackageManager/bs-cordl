#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserCapability)
// Forward declare root types
namespace Oculus::Platform::Models {
class UserCapability;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserCapability);
// Type: Oculus.Platform.Models::UserCapability
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13487))
// CS Name: ::Oculus.Platform.Models::UserCapability*
class CORDL_TYPE UserCapability : public ::System::Object {
public:
  // Declarations
  /// @brief Field Description, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Description, put = __cordl_internal_set_Description))::StringW Description;

  /// @brief Field IsEnabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_IsEnabled, put = __cordl_internal_set_IsEnabled)) bool IsEnabled;

  /// @brief Field Name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  /// @brief Field ReasonCode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ReasonCode, put = __cordl_internal_set_ReasonCode))::StringW ReasonCode;

  constexpr ::StringW& __cordl_internal_get_Description();

  constexpr ::StringW const& __cordl_internal_get_Description() const;

  constexpr void __cordl_internal_set_Description(::StringW value);

  constexpr bool& __cordl_internal_get_IsEnabled();

  constexpr bool const& __cordl_internal_get_IsEnabled() const;

  constexpr void __cordl_internal_set_IsEnabled(bool value);

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr ::StringW& __cordl_internal_get_ReasonCode();

  constexpr ::StringW const& __cordl_internal_get_ReasonCode() const;

  constexpr void __cordl_internal_set_ReasonCode(::StringW value);

  static inline ::Oculus::Platform::Models::UserCapability* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2709038, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "UserCapability", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserCapability(UserCapability&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserCapability", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserCapability(UserCapability const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserCapability();

public:
  /// @brief Field Description, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Description;

  /// @brief Field IsEnabled, offset: 0x18, size: 0x1, def value: None
  bool ___IsEnabled;

  /// @brief Field Name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field ReasonCode, offset: 0x28, size: 0x8, def value: None
  ::StringW ___ReasonCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserCapability, 0x30>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserCapability, ___Description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserCapability, ___IsEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserCapability, ___Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserCapability, ___ReasonCode) == 0x28, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserCapability);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserCapability*, "Oculus.Platform.Models", "UserCapability");
