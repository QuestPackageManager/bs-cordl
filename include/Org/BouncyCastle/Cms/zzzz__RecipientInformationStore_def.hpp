#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/RecipientInformationStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecipientInformationStore)
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformation;
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
class RecipientInformationStore;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::RecipientInformationStore);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.RecipientInformationStore
class CORDL_TYPE RecipientInformationStore : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Cms::RecipientInformation* Item[];

  /// @brief Field all, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_all, put = __cordl_internal_set_all)) ::System::Collections::IList* all;

  /// @brief Field table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_table, put = __cordl_internal_set_table)) ::System::Collections::IDictionary* table;

  /// @brief Method GetFirstRecipient, addr 0x35ad1a8, size 0x19c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::RecipientInformation* GetFirstRecipient(::Org::BouncyCastle::Cms::RecipientID* selector);

  /// @brief Method GetRecipients, addr 0x35ad3ec, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* GetRecipients();

  /// @brief Method GetRecipients, addr 0x35ad44c, size 0x150, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* GetRecipients(::Org::BouncyCastle::Cms::RecipientID* selector);

  static inline ::Org::BouncyCastle::Cms::RecipientInformationStore* New_ctor(::System::Collections::ICollection* recipientInfos);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_all() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_all();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_table() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_table();

  constexpr void __cordl_internal_set_all(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_table(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x35882d8, size 0x570, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* recipientInfos);

  /// @brief Method get_Count, addr 0x35ad344, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x35ad1a4, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::RecipientInformation* get_Item(::Org::BouncyCastle::Cms::RecipientID* selector);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientInformationStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecipientInformationStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientInformationStore(RecipientInformationStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInformationStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientInformationStore(RecipientInformationStore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 687 };

  /// @brief Field all, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___all;

  /// @brief Field table, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientInformationStore, ___all) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientInformationStore, ___table) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::RecipientInformationStore, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientInformationStore);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientInformationStore*, "Org.BouncyCastle.Cms", "RecipientInformationStore");
