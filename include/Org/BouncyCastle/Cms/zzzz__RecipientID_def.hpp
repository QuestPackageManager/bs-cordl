#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/RecipientID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
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
// Dependencies Org.BouncyCastle.X509.Store.X509CertStoreSelector
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.RecipientID
class CORDL_TYPE RecipientID : public ::Org::BouncyCastle::X509::Store::X509CertStoreSelector {
public:
  // Declarations
  __declspec(property(get = get_KeyIdentifier, put = set_KeyIdentifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> KeyIdentifier;

  /// @brief Field keyIdentifier, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_keyIdentifier, put = __cordl_internal_set_keyIdentifier)) ::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier;

  /// @brief Method Equals, addr 0x2681e70, size 0x160, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2681dc4, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Cms::RecipientID* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_keyIdentifier() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_keyIdentifier();

  constexpr void __cordl_internal_set_keyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x267bc3c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_KeyIdentifier, addr 0x2681d68, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyIdentifier();

  /// @brief Method set_KeyIdentifier, addr 0x267c1fc, size 0x6c, virtual false, abstract: false, final false
  inline void set_KeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecipientID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientID(RecipientID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientID(RecipientID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 686 };

  /// @brief Field keyIdentifier, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keyIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientID, ___keyIdentifier) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::RecipientID, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientID*, "Org.BouncyCastle.Cms", "RecipientID");
