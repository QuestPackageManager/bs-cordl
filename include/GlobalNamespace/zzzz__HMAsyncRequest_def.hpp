#pragma once
// IWYU pragma private; include "GlobalNamespace/HMAsyncRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMAsyncRequest)
namespace GlobalNamespace {
class __HMAsyncRequest__CancelHander;
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
class __HMAsyncRequest__CancelHander;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HMAsyncRequest);
MARK_REF_PTR_T(::GlobalNamespace::__HMAsyncRequest__CancelHander);
// Type: ::CancelHander
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HMAsyncRequest::CancelHander*
class CORDL_TYPE __HMAsyncRequest__CancelHander : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x396e3f4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::HMAsyncRequest* request, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x396e414, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x396e3e0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::HMAsyncRequest* request);

  static inline ::GlobalNamespace::__HMAsyncRequest__CancelHander* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x396e2e0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HMAsyncRequest__CancelHander();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HMAsyncRequest__CancelHander", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HMAsyncRequest__CancelHander(__HMAsyncRequest__CancelHander&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HMAsyncRequest__CancelHander", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HMAsyncRequest__CancelHander(__HMAsyncRequest__CancelHander const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HMAsyncRequest__CancelHander, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HMAsyncRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HMAsyncRequest*
class CORDL_TYPE HMAsyncRequest : public ::GlobalNamespace::HMAutoincrementedRequestId {
public:
  // Declarations
  using CancelHander = ::GlobalNamespace::__HMAsyncRequest__CancelHander;

  __declspec(property(get = get_CancelHandler, put = set_CancelHandler)) ::GlobalNamespace::__HMAsyncRequest__CancelHander* CancelHandler;

  /// @brief Field _cancelHander, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelHander, put = __cordl_internal_set__cancelHander)) ::GlobalNamespace::__HMAsyncRequest__CancelHander* _cancelHander;

  /// @brief Field _cancelled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__cancelled, put = __cordl_internal_set__cancelled)) bool _cancelled;

  __declspec(property(get = get_cancelled)) bool cancelled;

  /// @brief Method Cancel, addr 0x396e250, size 0x28, virtual true, abstract: false, final false
  inline void Cancel();

  static inline ::GlobalNamespace::HMAsyncRequest* New_ctor();

  constexpr ::GlobalNamespace::__HMAsyncRequest__CancelHander*& __cordl_internal_get__cancelHander();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HMAsyncRequest__CancelHander*> const& __cordl_internal_get__cancelHander() const;

  constexpr bool const& __cordl_internal_get__cancelled() const;

  constexpr bool& __cordl_internal_get__cancelled();

  constexpr void __cordl_internal_set__cancelHander(::GlobalNamespace::__HMAsyncRequest__CancelHander* value);

  constexpr void __cordl_internal_set__cancelled(bool value);

  /// @brief Method .ctor, addr 0x396e278, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CancelHandler, addr 0x396e238, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__HMAsyncRequest__CancelHander* get_CancelHandler();

  /// @brief Method get_cancelled, addr 0x396e248, size 0x8, virtual false, abstract: false, final false
  inline bool get_cancelled();

  /// @brief Method set_CancelHandler, addr 0x396e240, size 0x8, virtual false, abstract: false, final false
  inline void set_CancelHandler(::GlobalNamespace::__HMAsyncRequest__CancelHander* value);

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

  /// @brief Field _cancelled, offset: 0x18, size: 0x1, def value: None
  bool ____cancelled;

  /// @brief Field _cancelHander, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__HMAsyncRequest__CancelHander* ____cancelHander;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMAsyncRequest, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HMAsyncRequest, ____cancelled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMAsyncRequest, ____cancelHander) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HMAsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMAsyncRequest*, "", "HMAsyncRequest");
NEED_NO_BOX(::GlobalNamespace::__HMAsyncRequest__CancelHander);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HMAsyncRequest__CancelHander*, "", "HMAsyncRequest/CancelHander");
