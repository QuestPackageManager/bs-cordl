#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerInformationStore)
namespace Org::BouncyCastle::Cms {
class SignerID;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SignerInformationStore);
// Type: Org.BouncyCastle.Cms::SignerInformationStore
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::SignerInformationStore*
class CORDL_TYPE SignerInformationStore : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field all, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_all, put = __cordl_internal_set_all))::System::Collections::IList* all;

  /// @brief Field table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_table, put = __cordl_internal_set_table))::System::Collections::IDictionary* table;

  /// @brief Method GetFirstSigner, addr 0x137ba7c, size 0x190, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInformation* GetFirstSigner(::Org::BouncyCastle::Cms::SignerID* selector);

  /// @brief Method GetSigners, addr 0x137bcb0, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* GetSigners();

  /// @brief Method GetSigners, addr 0x137bd0c, size 0x130, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* GetSigners(::Org::BouncyCastle::Cms::SignerID* selector);

  static inline ::Org::BouncyCastle::Cms::SignerInformationStore* New_ctor(::Org::BouncyCastle::Cms::SignerInformation* signerInfo);

  static inline ::Org::BouncyCastle::Cms::SignerInformationStore* New_ctor(::System::Collections::ICollection* signerInfos);

  constexpr ::System::Collections::IList*& __cordl_internal_get_all();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_all() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_table();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_table() const;

  constexpr void __cordl_internal_set_all(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_table(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x137b348, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::SignerInformation* signerInfo);

  /// @brief Method .ctor, addr 0x137b4d4, size 0x5a8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* signerInfos);

  /// @brief Method get_Count, addr 0x137bc0c, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInformationStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerInformationStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInformationStore(SignerInformationStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInformationStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInformationStore(SignerInformationStore const&) = delete;

  /// @brief Field all, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___all;

  /// @brief Field table, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SignerInformationStore, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformationStore, ___all) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SignerInformationStore, ___table) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SignerInformationStore);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SignerInformationStore*, "Org.BouncyCastle.Cms", "SignerInformationStore");
