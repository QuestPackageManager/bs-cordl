#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStorageData)
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageData;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CloudStorageData);
// Type: Oculus.Platform.Models::CloudStorageData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13365))
// CS Name: ::Oculus.Platform.Models::CloudStorageData*
class CORDL_TYPE CloudStorageData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Bucket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Bucket, put = __cordl_internal_set_Bucket))::StringW Bucket;

  /// @brief Field Data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data))::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  /// @brief Field DataSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_DataSize, put = __cordl_internal_set_DataSize)) uint32_t DataSize;

  /// @brief Field Key, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Key, put = __cordl_internal_set_Key))::StringW Key;

  constexpr ::StringW& __cordl_internal_get_Bucket();

  constexpr ::StringW const& __cordl_internal_get_Bucket() const;

  constexpr void __cordl_internal_set_Bucket(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Data() const;

  constexpr void __cordl_internal_set_Data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint32_t& __cordl_internal_get_DataSize();

  constexpr uint32_t const& __cordl_internal_get_DataSize() const;

  constexpr void __cordl_internal_set_DataSize(uint32_t value);

  constexpr ::StringW& __cordl_internal_get_Key();

  constexpr ::StringW const& __cordl_internal_get_Key() const;

  constexpr void __cordl_internal_set_Key(::StringW value);

  static inline ::Oculus::Platform::Models::CloudStorageData* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2738694, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudStorageData(CloudStorageData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudStorageData(CloudStorageData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorageData();

public:
  /// @brief Field Bucket, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Bucket;

  /// @brief Field Data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Data;

  /// @brief Field DataSize, offset: 0x20, size: 0x4, def value: None
  uint32_t ___DataSize;

  /// @brief Field Key, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CloudStorageData, 0x30>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageData, ___Bucket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageData, ___Data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageData, ___DataSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageData, ___Key) == 0x28, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageData*, "Oculus.Platform.Models", "CloudStorageData");
