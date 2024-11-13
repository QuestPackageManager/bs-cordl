#pragma once
// IWYU pragma private; include "LiteNetLib/EventBasedNatPunchListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventBasedNatPunchListener)
namespace LiteNetLib {
class INatPunchListener;
}
namespace LiteNetLib {
struct NatAddressType;
}
namespace LiteNetLib {
class __EventBasedNatPunchListener__OnNatIntroductionRequest;
}
namespace LiteNetLib {
class __EventBasedNatPunchListener__OnNatIntroductionSuccess;
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
class __EventBasedNatPunchListener__OnNatIntroductionRequest;
}
namespace LiteNetLib {
class __EventBasedNatPunchListener__OnNatIntroductionSuccess;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::EventBasedNatPunchListener);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess);
// Type: ::OnNatIntroductionRequest
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNatPunchListener::OnNatIntroductionRequest*
class CORDL_TYPE __EventBasedNatPunchListener__OnNatIntroductionRequest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a57a34, size 0x2c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a57a60, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a57a20, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token);

  static inline ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a5791c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNatPunchListener__OnNatIntroductionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNatPunchListener__OnNatIntroductionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNatPunchListener__OnNatIntroductionRequest(__EventBasedNatPunchListener__OnNatIntroductionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNatPunchListener__OnNatIntroductionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNatPunchListener__OnNatIntroductionRequest(__EventBasedNatPunchListener__OnNatIntroductionRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16485 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::OnNatIntroductionSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNatPunchListener::OnNatIntroductionSuccess*
class CORDL_TYPE __EventBasedNatPunchListener__OnNatIntroductionSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a57b84, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a57c1c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a57b70, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token);

  static inline ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a57a6c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNatPunchListener__OnNatIntroductionSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNatPunchListener__OnNatIntroductionSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNatPunchListener__OnNatIntroductionSuccess(__EventBasedNatPunchListener__OnNatIntroductionSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNatPunchListener__OnNatIntroductionSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNatPunchListener__OnNatIntroductionSuccess(__EventBasedNatPunchListener__OnNatIntroductionSuccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16486 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: LiteNetLib::EventBasedNatPunchListener
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::LiteNetLib::EventBasedNatPunchListener*
class CORDL_TYPE EventBasedNatPunchListener : public ::System::Object {
public:
  // Declarations
  using OnNatIntroductionRequest = ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest;

  using OnNatIntroductionSuccess = ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess;

  /// @brief Field NatIntroductionRequest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_NatIntroductionRequest,
                      put = __cordl_internal_set_NatIntroductionRequest)) ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest* NatIntroductionRequest;

  /// @brief Field NatIntroductionSuccess, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NatIntroductionSuccess,
                      put = __cordl_internal_set_NatIntroductionSuccess)) ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess* NatIntroductionSuccess;

  /// @brief Convert operator to "::LiteNetLib::INatPunchListener"
  constexpr operator ::LiteNetLib::INatPunchListener*() noexcept;

  /// @brief Method LiteNetLib.INatPunchListener.OnNatIntroductionRequest, addr 0x3a578dc, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INatPunchListener_OnNatIntroductionRequest(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token);

  /// @brief Method LiteNetLib.INatPunchListener.OnNatIntroductionSuccess, addr 0x3a578f8, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token);

  static inline ::LiteNetLib::EventBasedNatPunchListener* New_ctor();

  constexpr ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*& __cordl_internal_get_NatIntroductionRequest();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*> const& __cordl_internal_get_NatIntroductionRequest() const;

  constexpr ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*& __cordl_internal_get_NatIntroductionSuccess();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*> const& __cordl_internal_get_NatIntroductionSuccess() const;

  constexpr void __cordl_internal_set_NatIntroductionRequest(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest* value);

  constexpr void __cordl_internal_set_NatIntroductionSuccess(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess* value);

  /// @brief Method .ctor, addr 0x3a57914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_NatIntroductionRequest, addr 0x3a5766c, size 0x9c, virtual false, abstract: false, final false
  inline void add_NatIntroductionRequest(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest* value);

  /// @brief Method add_NatIntroductionSuccess, addr 0x3a577a4, size 0x9c, virtual false, abstract: false, final false
  inline void add_NatIntroductionSuccess(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess* value);

  /// @brief Convert to "::LiteNetLib::INatPunchListener"
  constexpr ::LiteNetLib::INatPunchListener* i___LiteNetLib__INatPunchListener() noexcept;

  /// @brief Method remove_NatIntroductionRequest, addr 0x3a57708, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NatIntroductionRequest(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest* value);

  /// @brief Method remove_NatIntroductionSuccess, addr 0x3a57840, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NatIntroductionSuccess(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess* value);

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

  /// @brief Field NatIntroductionRequest, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest* ___NatIntroductionRequest;

  /// @brief Field NatIntroductionSuccess, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess* ___NatIntroductionSuccess;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16487 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNatPunchListener, 0x20>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNatPunchListener, ___NatIntroductionRequest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNatPunchListener, ___NatIntroductionSuccess) == 0x18, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::EventBasedNatPunchListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNatPunchListener*, "LiteNetLib", "EventBasedNatPunchListener");
NEED_NO_BOX(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionRequest*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionRequest");
NEED_NO_BOX(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNatPunchListener__OnNatIntroductionSuccess*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionSuccess");
