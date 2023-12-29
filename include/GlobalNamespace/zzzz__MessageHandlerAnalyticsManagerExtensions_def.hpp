#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageHandlerAnalyticsManagerExtensions)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace System {
class Type;
}
namespace BGNet::Core::Messages {
class IUnconnectedUnreliableMessage;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
// Forward declare root types
namespace GlobalNamespace {
class MessageHandlerAnalyticsManagerExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions);
// Type: ::MessageHandlerAnalyticsManagerExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12795))
// CS Name: ::MessageHandlerAnalyticsManagerExtensions*
class CORDL_TYPE MessageHandlerAnalyticsManagerExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field _typeNameLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__typeNameLookup, put = setStaticF__typeNameLookup))::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* _typeNameLookup;

  /// @brief Field _responseCodeLookup, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF__responseCodeLookup,
      put = setStaticF__responseCodeLookup))::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>* _responseCodeLookup;

  static inline void setStaticF__typeNameLookup(::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* getStaticF__typeNameLookup();

  static inline void setStaticF__responseCodeLookup(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>* getStaticF__responseCodeLookup();

  /// @brief Method GetMessageName addr 0xdc26a0 size 0x140 virtual false final false
  static inline ::StringW GetMessageName(::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method GetResponseCodeName addr 0xdc27e0 size 0x2e8 virtual false final false
  static inline ::StringW GetResponseCodeName(::BGNet::Core::Messages::IUnconnectedResponse* response);

  /// @brief Method ReceivedReliableRequestEvent addr 0xdc2ac8 size 0x230 virtual false final false
  static inline void ReceivedReliableRequestEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request);

  /// @brief Method SentReliableRequestEvent addr 0xdc2db8 size 0x230 virtual false final false
  static inline void SentReliableRequestEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request);

  /// @brief Method ReceivedReliableResponseEvent addr 0xdc2fe8 size 0x268 virtual false final false
  static inline void ReceivedReliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedReliableResponse* response);

  /// @brief Method SentReliableResponseEvent addr 0xdc3250 size 0x268 virtual false final false
  static inline void SentReliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedReliableResponse* response);

  /// @brief Method ReceivedUnreliableMessageEvent addr 0xdc34b8 size 0x230 virtual false final false
  static inline void ReceivedUnreliableMessageEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* message);

  /// @brief Method SentUnreliableMessageEvent addr 0xdc36e8 size 0x230 virtual false final false
  static inline void SentUnreliableMessageEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* message);

  /// @brief Method ReceivedUnreliableResponseEvent addr 0xdc3918 size 0x268 virtual false final false
  static inline void ReceivedUnreliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedResponse* response);

  /// @brief Method SentUnreliableResponseEvent addr 0xdc3b80 size 0x268 virtual false final false
  static inline void SentUnreliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedResponse* response);

  // Ctor Parameters [CppParam { name: "", ty: "MessageHandlerAnalyticsManagerExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageHandlerAnalyticsManagerExtensions(MessageHandlerAnalyticsManagerExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageHandlerAnalyticsManagerExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageHandlerAnalyticsManagerExtensions(MessageHandlerAnalyticsManagerExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageHandlerAnalyticsManagerExtensions();

public:
  /// @brief Field kReceivedMessagesMetricName offset 0xffffffff size 0x8
  static constexpr ::ConstString kReceivedMessagesMetricName{ u"ReceivedMessages" };

  /// @brief Field kSentMessagesMetricName offset 0xffffffff size 0x8
  static constexpr ::ConstString kSentMessagesMetricName{ u"SentMessages" };

  /// @brief Field kDeliveryTypeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeliveryTypeKey{ u"DeliveryType" };

  /// @brief Field kMessageCategoryKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageCategoryKey{ u"MessageCategory" };

  /// @brief Field kMessageTypeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageTypeKey{ u"MessageType" };

  /// @brief Field kResultKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kResultKey{ u"Result" };

  /// @brief Field kDeliveryTypeReliable offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeliveryTypeReliable{ u"Reliable" };

  /// @brief Field kDeliveryTypeUnreliable offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeliveryTypeUnreliable{ u"Unreliable" };

  /// @brief Field kMessageCategoryRequest offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageCategoryRequest{ u"Request" };

  /// @brief Field kMessageCategoryResponse offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageCategoryResponse{ u"Response" };

  /// @brief Field kMessageCategoryMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageCategoryMessage{ u"Message" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*, "", "MessageHandlerAnalyticsManagerExtensions");
