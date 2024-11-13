#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithDataStoreUnderPrivateUserDataStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithDataStoreUnderPrivateUserDataStore)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithDataStoreUnderPrivateUserDataStore;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore);
// Type: Oculus.Platform::MessageWithDataStoreUnderPrivateUserDataStore
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithDataStoreUnderPrivateUserDataStore*
class CORDL_TYPE MessageWithDataStoreUnderPrivateUserDataStore : public ::Oculus::Platform::Message_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f1cf94, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetDataStore, addr 0x3f1cf58, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataStore();

  static inline ::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f1a7e0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithDataStoreUnderPrivateUserDataStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPrivateUserDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithDataStoreUnderPrivateUserDataStore(MessageWithDataStoreUnderPrivateUserDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPrivateUserDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithDataStoreUnderPrivateUserDataStore(MessageWithDataStoreUnderPrivateUserDataStore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15333 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*, "Oculus.Platform", "MessageWithDataStoreUnderPrivateUserDataStore");
