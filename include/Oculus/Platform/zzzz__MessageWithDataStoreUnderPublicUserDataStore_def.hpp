#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithDataStoreUnderPublicUserDataStore)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithDataStoreUnderPublicUserDataStore;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore);
// Type: Oculus.Platform::MessageWithDataStoreUnderPublicUserDataStore
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3823)), TypeDefinitionIndex(TypeDefinitionIndex(13162)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3823), inst: 600
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst: 4537 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13193)) CS Name:
// ::Oculus.Platform::MessageWithDataStoreUnderPublicUserDataStore*
class CORDL_TYPE MessageWithDataStoreUnderPublicUserDataStore : public ::Oculus::Platform::Message_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x271875c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetDataStore, addr 0x271b2dc, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataStore();

  /// @brief Method GetDataFromMessage, addr 0x271b318, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPublicUserDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithDataStoreUnderPublicUserDataStore(MessageWithDataStoreUnderPublicUserDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPublicUserDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithDataStoreUnderPublicUserDataStore(MessageWithDataStoreUnderPublicUserDataStore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithDataStoreUnderPublicUserDataStore();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*, "Oculus.Platform", "MessageWithDataStoreUnderPublicUserDataStore");
