#pragma once
// IWYU pragma private; include "GlobalNamespace/HMAsyncRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(HMAsyncRequest)
namespace GlobalNamespace {
class HMAsyncRequest_CancelHander;
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
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class HMAsyncRequest_CancelHander;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HMAsyncRequest);
MARK_REF_PTR_T(::GlobalNamespace::HMAsyncRequest_CancelHander);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: HMAsyncRequest/CancelHander
class CORDL_TYPE HMAsyncRequest_CancelHander : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x39c38dc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::HMAsyncRequest* request, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x39c38fc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x39c38c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::HMAsyncRequest* request);

  static inline ::GlobalNamespace::HMAsyncRequest_CancelHander* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x39c37c8, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMAsyncRequest_CancelHander();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMAsyncRequest_CancelHander", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMAsyncRequest_CancelHander(HMAsyncRequest_CancelHander&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMAsyncRequest_CancelHander", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMAsyncRequest_CancelHander(HMAsyncRequest_CancelHander const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMAsyncRequest_CancelHander, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMAutoincrementedRequestId
namespace GlobalNamespace {
// Is value type: false
// CS Name: HMAsyncRequest
class CORDL_TYPE HMAsyncRequest : public ::GlobalNamespace::HMAutoincrementedRequestId {
public:
  // Declarations
  using CancelHander = ::GlobalNamespace::HMAsyncRequest_CancelHander;

  __declspec(property(get = get_CancelHandler, put = set_CancelHandler)) ::GlobalNamespace::HMAsyncRequest_CancelHander* CancelHandler;

  /// @brief Field _cancelHander, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelHander, put = __cordl_internal_set__cancelHander)) ::GlobalNamespace::HMAsyncRequest_CancelHander* _cancelHander;

  /// @brief Field _cancelled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__cancelled, put = __cordl_internal_set__cancelled)) bool _cancelled;

  __declspec(property(get = get_cancelled)) bool cancelled;

  /// @brief Method Cancel, addr 0x39c3738, size 0x28, virtual true, abstract: false, final false
  inline void Cancel();

  static inline ::GlobalNamespace::HMAsyncRequest* New_ctor();

  constexpr ::GlobalNamespace::HMAsyncRequest_CancelHander* const& __cordl_internal_get__cancelHander() const;

  constexpr ::GlobalNamespace::HMAsyncRequest_CancelHander*& __cordl_internal_get__cancelHander();

  constexpr bool const& __cordl_internal_get__cancelled() const;

  constexpr bool& __cordl_internal_get__cancelled();

  constexpr void __cordl_internal_set__cancelHander(::GlobalNamespace::HMAsyncRequest_CancelHander* value);

  constexpr void __cordl_internal_set__cancelled(bool value);

  /// @brief Method .ctor, addr 0x39c3760, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CancelHandler, addr 0x39c3720, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest_CancelHander* get_CancelHandler();

  /// @brief Method get_cancelled, addr 0x39c3730, size 0x8, virtual false, abstract: false, final false
  inline bool get_cancelled();

  /// @brief Method set_CancelHandler, addr 0x39c3728, size 0x8, virtual false, abstract: false, final false
  inline void set_CancelHandler(::GlobalNamespace::HMAsyncRequest_CancelHander* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMAsyncRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMAsyncRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMAsyncRequest(HMAsyncRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMAsyncRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMAsyncRequest(HMAsyncRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16419 };

  /// @brief Field _cancelled, offset: 0x18, size: 0x1, def value: None
  bool ____cancelled;

  /// @brief Field _cancelHander, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::HMAsyncRequest_CancelHander* ____cancelHander;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HMAsyncRequest, ____cancelled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMAsyncRequest, ____cancelHander) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMAsyncRequest, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HMAsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMAsyncRequest*, "", "HMAsyncRequest");
NEED_NO_BOX(::GlobalNamespace::HMAsyncRequest_CancelHander);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMAsyncRequest_CancelHander*, "", "HMAsyncRequest/CancelHander");
