#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithDataStoreUnderPublicUserDataStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MessageWithDataStoreUnderPublicUserDataStore)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithDataStoreUnderPublicUserDataStore;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithDataStoreUnderPublicUserDataStore
class CORDL_TYPE MessageWithDataStoreUnderPublicUserDataStore : public ::Oculus::Platform::Message_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f8033c, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetDataStore, addr 0x3f80300, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataStore();

  static inline ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7db48, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithDataStoreUnderPublicUserDataStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPublicUserDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithDataStoreUnderPublicUserDataStore(MessageWithDataStoreUnderPublicUserDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPublicUserDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithDataStoreUnderPublicUserDataStore(MessageWithDataStoreUnderPublicUserDataStore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*, "Oculus.Platform", "MessageWithDataStoreUnderPublicUserDataStore");
