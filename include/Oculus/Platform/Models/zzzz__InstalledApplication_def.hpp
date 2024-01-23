#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstalledApplication)
// Forward declare root types
namespace Oculus::Platform::Models {
class InstalledApplication;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::InstalledApplication);
// Type: Oculus.Platform.Models::InstalledApplication
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13437))
// CS Name: ::Oculus.Platform.Models::InstalledApplication*
class CORDL_TYPE InstalledApplication : public ::System::Object {
public:
  // Declarations
  /// @brief Field ApplicationId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ApplicationId, put = __cordl_internal_set_ApplicationId))::StringW ApplicationId;

  /// @brief Field PackageName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PackageName, put = __cordl_internal_set_PackageName))::StringW PackageName;

  /// @brief Field Status, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Status, put = __cordl_internal_set_Status))::StringW Status;

  /// @brief Field VersionCode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_VersionCode, put = __cordl_internal_set_VersionCode)) int32_t VersionCode;

  /// @brief Field VersionName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_VersionName, put = __cordl_internal_set_VersionName))::StringW VersionName;

  constexpr ::StringW& __cordl_internal_get_ApplicationId();

  constexpr ::StringW const& __cordl_internal_get_ApplicationId() const;

  constexpr void __cordl_internal_set_ApplicationId(::StringW value);

  constexpr ::StringW& __cordl_internal_get_PackageName();

  constexpr ::StringW const& __cordl_internal_get_PackageName() const;

  constexpr void __cordl_internal_set_PackageName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_Status();

  constexpr ::StringW const& __cordl_internal_get_Status() const;

  constexpr void __cordl_internal_set_Status(::StringW value);

  constexpr int32_t& __cordl_internal_get_VersionCode();

  constexpr int32_t const& __cordl_internal_get_VersionCode() const;

  constexpr void __cordl_internal_set_VersionCode(int32_t value);

  constexpr ::StringW& __cordl_internal_get_VersionName();

  constexpr ::StringW const& __cordl_internal_get_VersionName() const;

  constexpr void __cordl_internal_set_VersionName(::StringW value);

  static inline ::Oculus::Platform::Models::InstalledApplication* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2706094, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "InstalledApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstalledApplication(InstalledApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstalledApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstalledApplication(InstalledApplication const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstalledApplication();

public:
  /// @brief Field ApplicationId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___ApplicationId;

  /// @brief Field PackageName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___PackageName;

  /// @brief Field Status, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Status;

  /// @brief Field VersionCode, offset: 0x28, size: 0x4, def value: None
  int32_t ___VersionCode;

  /// @brief Field VersionName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___VersionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::InstalledApplication, 0x38>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::InstalledApplication, ___ApplicationId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::InstalledApplication, ___PackageName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::InstalledApplication, ___Status) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::InstalledApplication, ___VersionCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::InstalledApplication, ___VersionName) == 0x30, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::InstalledApplication);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::InstalledApplication*, "Oculus.Platform.Models", "InstalledApplication");
