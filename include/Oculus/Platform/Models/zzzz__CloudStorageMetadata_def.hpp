#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__CloudStorageDataStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStorageMetadata)
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CloudStorageMetadata);
// Type: Oculus.Platform.Models::CloudStorageMetadata
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(13247))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13473))
// CS Name: ::Oculus.Platform.Models::CloudStorageMetadata*
class CORDL_TYPE CloudStorageMetadata : public ::System::Object {
public:
  // Declarations
  /// @brief Field Bucket, offset 0x10, size 0x8
  __declspec(property(get = __get_Bucket, put = __set_Bucket))::StringW Bucket;

  /// @brief Field Counter, offset 0x18, size 0x8
  __declspec(property(get = __get_Counter, put = __set_Counter)) int64_t Counter;

  /// @brief Field DataSize, offset 0x20, size 0x4
  __declspec(property(get = __get_DataSize, put = __set_DataSize)) uint32_t DataSize;

  /// @brief Field ExtraData, offset 0x28, size 0x8
  __declspec(property(get = __get_ExtraData, put = __set_ExtraData))::StringW ExtraData;

  /// @brief Field Key, offset 0x30, size 0x8
  __declspec(property(get = __get_Key, put = __set_Key))::StringW Key;

  /// @brief Field SaveTime, offset 0x38, size 0x8
  __declspec(property(get = __get_SaveTime, put = __set_SaveTime)) uint64_t SaveTime;

  /// @brief Field Status, offset 0x40, size 0x4
  __declspec(property(get = __get_Status, put = __set_Status))::Oculus::Platform::CloudStorageDataStatus Status;

  /// @brief Field VersionHandle, offset 0x48, size 0x8
  __declspec(property(get = __get_VersionHandle, put = __set_VersionHandle))::StringW VersionHandle;

  constexpr ::StringW& __get_Bucket();

  constexpr ::StringW const& __get_Bucket() const;

  constexpr void __set_Bucket(::StringW value);

  constexpr int64_t& __get_Counter();

  constexpr int64_t const& __get_Counter() const;

  constexpr void __set_Counter(int64_t value);

  constexpr uint32_t& __get_DataSize();

  constexpr uint32_t const& __get_DataSize() const;

  constexpr void __set_DataSize(uint32_t value);

  constexpr ::StringW& __get_ExtraData();

  constexpr ::StringW const& __get_ExtraData() const;

  constexpr void __set_ExtraData(::StringW value);

  constexpr ::StringW& __get_Key();

  constexpr ::StringW const& __get_Key() const;

  constexpr void __set_Key(::StringW value);

  constexpr uint64_t& __get_SaveTime();

  constexpr uint64_t const& __get_SaveTime() const;

  constexpr void __set_SaveTime(uint64_t value);

  constexpr ::Oculus::Platform::CloudStorageDataStatus& __get_Status();

  constexpr ::Oculus::Platform::CloudStorageDataStatus const& __get_Status() const;

  constexpr void __set_Status(::Oculus::Platform::CloudStorageDataStatus value);

  constexpr ::StringW& __get_VersionHandle();

  constexpr ::StringW const& __get_VersionHandle() const;

  constexpr void __set_VersionHandle(::StringW value);

  static inline ::Oculus::Platform::Models::CloudStorageMetadata* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b2d24 size 0xe8 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudStorageMetadata(CloudStorageMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudStorageMetadata(CloudStorageMetadata const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorageMetadata();

public:
  /// @brief Field Bucket, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Bucket;

  /// @brief Field Counter, offset: 0x18, size: 0x8, def value: None
  int64_t ___Counter;

  /// @brief Field DataSize, offset: 0x20, size: 0x4, def value: None
  uint32_t ___DataSize;

  /// @brief Field ExtraData, offset: 0x28, size: 0x8, def value: None
  ::StringW ___ExtraData;

  /// @brief Field Key, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Key;

  /// @brief Field SaveTime, offset: 0x38, size: 0x8, def value: None
  uint64_t ___SaveTime;

  /// @brief Field Status, offset: 0x40, size: 0x4, def value: None
  ::Oculus::Platform::CloudStorageDataStatus ___Status;

  /// @brief Field VersionHandle, offset: 0x48, size: 0x8, def value: None
  ::StringW ___VersionHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CloudStorageMetadata, 0x50>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageMetadata, ___Bucket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageMetadata, ___Counter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageMetadata, ___DataSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageMetadata, ___ExtraData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageMetadata, ___Key) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageMetadata, ___SaveTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageMetadata, ___Status) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageMetadata, ___VersionHandle) == 0x48, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageMetadata*, "Oculus.Platform.Models", "CloudStorageMetadata");
