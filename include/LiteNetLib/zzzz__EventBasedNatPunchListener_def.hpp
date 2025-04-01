#pragma once
// IWYU pragma private; include "LiteNetLib/EventBasedNatPunchListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__INatPunchListener_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventBasedNatPunchListener)
namespace LiteNetLib {
class EventBasedNatPunchListener_OnNatIntroductionRequest;
}
namespace LiteNetLib {
class EventBasedNatPunchListener_OnNatIntroductionSuccess;
}
namespace LiteNetLib {
struct NatAddressType;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class EventBasedNatPunchListener;
}
namespace LiteNetLib {
class EventBasedNatPunchListener_OnNatIntroductionRequest;
}
namespace LiteNetLib {
class EventBasedNatPunchListener_OnNatIntroductionSuccess;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::EventBasedNatPunchListener);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess);
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest
class CORDL_TYPE EventBasedNatPunchListener_OnNatIntroductionRequest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aa92b8, size 0x2c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aa92e4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aa92a4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token);

  static inline ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aa91a0, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNatPunchListener_OnNatIntroductionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener_OnNatIntroductionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNatPunchListener_OnNatIntroductionRequest(EventBasedNatPunchListener_OnNatIntroductionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener_OnNatIntroductionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNatPunchListener_OnNatIntroductionRequest(EventBasedNatPunchListener_OnNatIntroductionRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16530 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess
class CORDL_TYPE EventBasedNatPunchListener_OnNatIntroductionSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aa9408, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aa94a0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aa93f4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token);

  static inline ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aa92f0, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNatPunchListener_OnNatIntroductionSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener_OnNatIntroductionSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNatPunchListener_OnNatIntroductionSuccess(EventBasedNatPunchListener_OnNatIntroductionSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener_OnNatIntroductionSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNatPunchListener_OnNatIntroductionSuccess(EventBasedNatPunchListener_OnNatIntroductionSuccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies LiteNetLib.INatPunchListener, System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNatPunchListener
class CORDL_TYPE EventBasedNatPunchListener : public ::System::Object {
public:
  // Declarations
  using OnNatIntroductionRequest = ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest;

  using OnNatIntroductionSuccess = ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess;

  /// @brief Field NatIntroductionRequest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_NatIntroductionRequest,
                      put = __cordl_internal_set_NatIntroductionRequest)) ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* NatIntroductionRequest;

  /// @brief Field NatIntroductionSuccess, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NatIntroductionSuccess,
                      put = __cordl_internal_set_NatIntroductionSuccess)) ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* NatIntroductionSuccess;

  /// @brief Convert operator to "::LiteNetLib::INatPunchListener"
  constexpr operator ::LiteNetLib::INatPunchListener*() noexcept;

  /// @brief Method LiteNetLib.INatPunchListener.OnNatIntroductionRequest, addr 0x3aa9160, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INatPunchListener_OnNatIntroductionRequest(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token);

  /// @brief Method LiteNetLib.INatPunchListener.OnNatIntroductionSuccess, addr 0x3aa917c, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token);

  static inline ::LiteNetLib::EventBasedNatPunchListener* New_ctor();

  constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* const& __cordl_internal_get_NatIntroductionRequest() const;

  constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*& __cordl_internal_get_NatIntroductionRequest();

  constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* const& __cordl_internal_get_NatIntroductionSuccess() const;

  constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*& __cordl_internal_get_NatIntroductionSuccess();

  constexpr void __cordl_internal_set_NatIntroductionRequest(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* value);

  constexpr void __cordl_internal_set_NatIntroductionSuccess(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* value);

  /// @brief Method .ctor, addr 0x3aa9198, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_NatIntroductionRequest, addr 0x3aa8ef0, size 0x9c, virtual false, abstract: false, final false
  inline void add_NatIntroductionRequest(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* value);

  /// @brief Method add_NatIntroductionSuccess, addr 0x3aa9028, size 0x9c, virtual false, abstract: false, final false
  inline void add_NatIntroductionSuccess(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* value);

  /// @brief Convert to "::LiteNetLib::INatPunchListener"
  constexpr ::LiteNetLib::INatPunchListener* i___LiteNetLib__INatPunchListener() noexcept;

  /// @brief Method remove_NatIntroductionRequest, addr 0x3aa8f8c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NatIntroductionRequest(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* value);

  /// @brief Method remove_NatIntroductionSuccess, addr 0x3aa90c4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NatIntroductionSuccess(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNatPunchListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNatPunchListener(EventBasedNatPunchListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNatPunchListener(EventBasedNatPunchListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16532 };

  /// @brief Field NatIntroductionRequest, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* ___NatIntroductionRequest;

  /// @brief Field NatIntroductionSuccess, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* ___NatIntroductionSuccess;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::EventBasedNatPunchListener, ___NatIntroductionRequest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNatPunchListener, ___NatIntroductionSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNatPunchListener, 0x20>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::EventBasedNatPunchListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNatPunchListener*, "LiteNetLib", "EventBasedNatPunchListener");
NEED_NO_BOX(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionRequest");
NEED_NO_BOX(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionSuccess");
