#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__CloudStorageUpdateStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStorageUpdateResponse)
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageUpdateResponse;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CloudStorageUpdateResponse);
// Type: Oculus.Platform.Models::CloudStorageUpdateResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13141))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13368))
// CS Name: ::Oculus.Platform.Models::CloudStorageUpdateResponse*
class CORDL_TYPE CloudStorageUpdateResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field Bucket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Bucket, put = __cordl_internal_set_Bucket))::StringW Bucket;

  /// @brief Field Key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Key, put = __cordl_internal_set_Key))::StringW Key;

  /// @brief Field Status, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Status, put = __cordl_internal_set_Status))::Oculus::Platform::CloudStorageUpdateStatus Status;

  /// @brief Field VersionHandle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_VersionHandle, put = __cordl_internal_set_VersionHandle))::StringW VersionHandle;

  constexpr ::StringW& __cordl_internal_get_Bucket();

  constexpr ::StringW const& __cordl_internal_get_Bucket() const;

  constexpr void __cordl_internal_set_Bucket(::StringW value);

  constexpr ::StringW& __cordl_internal_get_Key();

  constexpr ::StringW const& __cordl_internal_get_Key() const;

  constexpr void __cordl_internal_set_Key(::StringW value);

  constexpr ::Oculus::Platform::CloudStorageUpdateStatus& __cordl_internal_get_Status();

  constexpr ::Oculus::Platform::CloudStorageUpdateStatus const& __cordl_internal_get_Status() const;

  constexpr void __cordl_internal_set_Status(::Oculus::Platform::CloudStorageUpdateStatus value);

  constexpr ::StringW& __cordl_internal_get_VersionHandle();

  constexpr ::StringW const& __cordl_internal_get_VersionHandle() const;

  constexpr void __cordl_internal_set_VersionHandle(::StringW value);

  static inline ::Oculus::Platform::Models::CloudStorageUpdateResponse* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2738998, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageUpdateResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudStorageUpdateResponse(CloudStorageUpdateResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageUpdateResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudStorageUpdateResponse(CloudStorageUpdateResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorageUpdateResponse();

public:
  /// @brief Field Bucket, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Bucket;

  /// @brief Field Key, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Key;

  /// @brief Field Status, offset: 0x20, size: 0x4, def value: None
  ::Oculus::Platform::CloudStorageUpdateStatus ___Status;

  /// @brief Field VersionHandle, offset: 0x28, size: 0x8, def value: None
  ::StringW ___VersionHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CloudStorageUpdateResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageUpdateResponse, ___Bucket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageUpdateResponse, ___Key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageUpdateResponse, ___Status) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageUpdateResponse, ___VersionHandle) == 0x28, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageUpdateResponse*, "Oculus.Platform.Models", "CloudStorageUpdateResponse");
