#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SupplementalDataEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupplementalDataEntry)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SupplementalDataEntry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry);
// Type: Org.BouncyCastle.Crypto.Tls::SupplementalDataEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SupplementalDataEntry*
class CORDL_TYPE SupplementalDataEntry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  __declspec(property(get = get_DataType)) int32_t DataType;

  /// @brief Field mData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mData, put = __cordl_internal_set_mData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mData;

  /// @brief Field mDataType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mDataType, put = __cordl_internal_set_mDataType)) int32_t mDataType;

  static inline ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry* New_ctor(int32_t dataType, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mData();

  constexpr int32_t const& __cordl_internal_get_mDataType() const;

  constexpr int32_t& __cordl_internal_get_mDataType();

  constexpr void __cordl_internal_set_mData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mDataType(int32_t value);

  /// @brief Method .ctor, addr 0x23e8764, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t dataType, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_Data, addr 0x23e879c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Data();

  /// @brief Method get_DataType, addr 0x23e8794, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_DataType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupplementalDataEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupplementalDataEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupplementalDataEntry(SupplementalDataEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupplementalDataEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupplementalDataEntry(SupplementalDataEntry const&) = delete;

  /// @brief Field mDataType, offset: 0x10, size: 0x4, def value: None
  int32_t ___mDataType;

  /// @brief Field mData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1284 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry, ___mDataType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry, ___mData) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*, "Org.BouncyCastle.Crypto.Tls", "SupplementalDataEntry");
