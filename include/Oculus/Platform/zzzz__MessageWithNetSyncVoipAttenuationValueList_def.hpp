#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithNetSyncVoipAttenuationValueList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetSyncVoipAttenuationValueList)
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncVoipAttenuationValueList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList);
// Type: Oculus.Platform::MessageWithNetSyncVoipAttenuationValueList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithNetSyncVoipAttenuationValueList*
class CORDL_TYPE MessageWithNetSyncVoipAttenuationValueList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x2ac9080, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetDataFromMessage(void* c_message);

  /// @brief Method GetNetSyncVoipAttenuationValueList, addr 0x2ac9044, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetNetSyncVoipAttenuationValueList();

  static inline ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2ac8fec, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithNetSyncVoipAttenuationValueList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncVoipAttenuationValueList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithNetSyncVoipAttenuationValueList(MessageWithNetSyncVoipAttenuationValueList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncVoipAttenuationValueList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithNetSyncVoipAttenuationValueList(MessageWithNetSyncVoipAttenuationValueList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*, "Oculus.Platform", "MessageWithNetSyncVoipAttenuationValueList");
