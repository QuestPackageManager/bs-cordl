#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecipientID)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::RecipientID);
// Type: Org.BouncyCastle.Cms::RecipientID
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(678))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(686))
// CS Name: ::Org.BouncyCastle.Cms::RecipientID*
class CORDL_TYPE RecipientID : public ::Org::BouncyCastle::X509::Store::X509CertStoreSelector {
public:
  // Declarations
  /// @brief Field keyIdentifier, offset 0x88, size 0x8
  __declspec(property(get = __get_keyIdentifier, put = __set_keyIdentifier))::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier;

  __declspec(property(get = get_KeyIdentifier, put = set_KeyIdentifier))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyIdentifier;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_keyIdentifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_keyIdentifier() const;

  constexpr void __set_keyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_KeyIdentifier addr 0x12083d8 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyIdentifier();

  /// @brief Method set_KeyIdentifier addr 0x12026d0 size 0x6c virtual false final false
  inline void set_KeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method GetHashCode addr 0x1208434 size 0xac virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x12084e0 size 0x160 virtual true final false
  inline bool Equals(::System::Object* obj);

  static inline ::Org::BouncyCastle::Cms::RecipientID* New_ctor();

  /// @brief Method .ctor addr 0x12020f8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecipientID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientID(RecipientID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientID(RecipientID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientID();

public:
  /// @brief Field keyIdentifier, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keyIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::RecipientID, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientID*, "Org.BouncyCastle.Cms", "RecipientID");
