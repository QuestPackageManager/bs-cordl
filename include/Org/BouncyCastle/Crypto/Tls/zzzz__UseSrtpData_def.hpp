#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UseSrtpData)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class UseSrtpData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::UseSrtpData);
// Type: Org.BouncyCastle.Crypto.Tls::UseSrtpData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::UseSrtpData*
class CORDL_TYPE UseSrtpData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Mki))::ArrayW<uint8_t, ::Array<uint8_t>*> Mki;

  __declspec(property(get = get_ProtectionProfiles))::ArrayW<int32_t, ::Array<int32_t>*> ProtectionProfiles;

  /// @brief Field mMki, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mMki, put = __cordl_internal_set_mMki))::ArrayW<uint8_t, ::Array<uint8_t>*> mMki;

  /// @brief Field mProtectionProfiles, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mProtectionProfiles, put = __cordl_internal_set_mProtectionProfiles))::ArrayW<int32_t, ::Array<int32_t>*> mProtectionProfiles;

  static inline ::Org::BouncyCastle::Crypto::Tls::UseSrtpData* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> protectionProfiles, ::ArrayW<uint8_t, ::Array<uint8_t>*> mki);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mMki() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mMki();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mProtectionProfiles() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mProtectionProfiles();

  constexpr void __cordl_internal_set_mMki(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mProtectionProfiles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x1218a98, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> protectionProfiles, ::ArrayW<uint8_t, ::Array<uint8_t>*> mki);

  /// @brief Method get_Mki, addr 0x121f90c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Mki();

  /// @brief Method get_ProtectionProfiles, addr 0x121f904, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_ProtectionProfiles();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UseSrtpData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UseSrtpData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UseSrtpData(UseSrtpData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UseSrtpData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UseSrtpData(UseSrtpData const&) = delete;

  /// @brief Field mProtectionProfiles, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mProtectionProfiles;

  /// @brief Field mMki, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mMki;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::UseSrtpData, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::UseSrtpData, ___mProtectionProfiles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::UseSrtpData, ___mMki) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::UseSrtpData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::UseSrtpData*, "Org.BouncyCastle.Crypto.Tls", "UseSrtpData");
