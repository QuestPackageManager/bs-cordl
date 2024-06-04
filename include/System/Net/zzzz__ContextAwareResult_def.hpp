#pragma once
// IWYU pragma private; include "System/Net/ContextAwareResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ContextAwareResult_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContextAwareResult)
namespace System::Net {
struct __ContextAwareResult__StateFlags;
}
namespace System::Net {
class __ContextAwareResult____c;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
struct __ContextAwareResult__StateFlags;
}
namespace System::Net {
class ContextAwareResult;
}
namespace System::Net {
class __ContextAwareResult____c;
}
// Write type traits
MARK_VAL_T(::System::Net::__ContextAwareResult__StateFlags);
MARK_REF_PTR_T(::System::Net::ContextAwareResult);
MARK_REF_PTR_T(::System::Net::__ContextAwareResult____c);
// Type: ::StateFlags
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::ContextAwareResult::StateFlags
struct CORDL_TYPE __ContextAwareResult__StateFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____ContextAwareResult__StateFlags_Unwrapped
  enum struct ____ContextAwareResult__StateFlags_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_CaptureIdentity = static_cast<uint8_t>(0x1u),
    __E_CaptureContext = static_cast<uint8_t>(0x2u),
    __E_ThreadSafeContextCopy = static_cast<uint8_t>(0x4u),
    __E_PostBlockStarted = static_cast<uint8_t>(0x8u),
    __E_PostBlockFinished = static_cast<uint8_t>(0x10u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ContextAwareResult__StateFlags_Unwrapped() const noexcept {
    return static_cast<____ContextAwareResult__StateFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContextAwareResult__StateFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ContextAwareResult__StateFlags(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field CaptureContext value: static_cast<uint8_t>(0x2u)
  static ::System::Net::__ContextAwareResult__StateFlags const CaptureContext;

  /// @brief Field CaptureIdentity value: static_cast<uint8_t>(0x1u)
  static ::System::Net::__ContextAwareResult__StateFlags const CaptureIdentity;

  /// @brief Field None value: static_cast<uint8_t>(0x0u)
  static ::System::Net::__ContextAwareResult__StateFlags const None;

  /// @brief Field PostBlockFinished value: static_cast<uint8_t>(0x10u)
  static ::System::Net::__ContextAwareResult__StateFlags const PostBlockFinished;

  /// @brief Field PostBlockStarted value: static_cast<uint8_t>(0x8u)
  static ::System::Net::__ContextAwareResult__StateFlags const PostBlockStarted;

  /// @brief Field ThreadSafeContextCopy value: static_cast<uint8_t>(0x4u)
  static ::System::Net::__ContextAwareResult__StateFlags const ThreadSafeContextCopy;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ContextAwareResult__StateFlags, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ContextAwareResult__StateFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::ContextAwareResult::<>c*
class CORDL_TYPE __ContextAwareResult____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::__ContextAwareResult____c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::System::Threading::ContextCallback* __9__17_0;

  static inline ::System::Net::__ContextAwareResult____c* New_ctor();

  /// @brief Method <Complete>b__17_0, addr 0x2fdae10, size 0x80, virtual false, abstract: false, final false
  inline void _Complete_b__17_0(::System::Object* s);

  /// @brief Method .ctor, addr 0x2fdae08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::__ContextAwareResult____c* getStaticF___9();

  static inline ::System::Threading::ContextCallback* getStaticF___9__17_0();

  static inline void setStaticF___9(::System::Net::__ContextAwareResult____c* value);

  static inline void setStaticF___9__17_0(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContextAwareResult____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ContextAwareResult____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContextAwareResult____c(__ContextAwareResult____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContextAwareResult____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContextAwareResult____c(__ContextAwareResult____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ContextAwareResult____c, 0x10>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::ContextAwareResult
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ContextAwareResult*
class CORDL_TYPE ContextAwareResult : public ::System::Net::LazyAsyncResult {
public:
  // Declarations
  using StateFlags = ::System::Net::__ContextAwareResult__StateFlags;

  using __c = ::System::Net::__ContextAwareResult____c;

  /// @brief Field _context, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context))::System::Threading::ExecutionContext* _context;

  /// @brief Field _flags, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags))::System::Net::__ContextAwareResult__StateFlags _flags;

  /// @brief Field _lock, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock))::System::Object* _lock;

  /// @brief Method CaptureOrComplete, addr 0x2fda350, size 0x3d8, virtual false, abstract: false, final false
  inline bool CaptureOrComplete(ByRef<::System::Threading::ExecutionContext*> cachedContext, bool returnContext);

  /// @brief Method Cleanup, addr 0x2fda728, size 0xa0, virtual true, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CleanupInternal, addr 0x2fda064, size 0x4, virtual false, abstract: false, final false
  inline void CleanupInternal();

  /// @brief Method Complete, addr 0x2fda9ec, size 0x2e8, virtual true, abstract: false, final false
  inline void Complete(::System::IntPtr userToken);

  /// @brief Method CompleteCallback, addr 0x2fdacd4, size 0xd0, virtual false, abstract: false, final false
  inline void CompleteCallback();

  /// @brief Method FinishPostingAsyncOp, addr 0x2fda30c, size 0x44, virtual false, abstract: false, final false
  inline bool FinishPostingAsyncOp();

  static inline ::System::Net::ContextAwareResult* New_ctor(bool captureIdentity, bool forceCaptureContext, ::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  static inline ::System::Net::ContextAwareResult* New_ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::System::Object* myObject, ::System::Object* myState,
                                                            ::System::AsyncCallback* myCallBack);

  static inline ::System::Net::ContextAwareResult* New_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  /// @brief Method SafeCaptureIdentity, addr 0x2fda060, size 0x4, virtual false, abstract: false, final false
  inline void SafeCaptureIdentity();

  /// @brief Method StartPostingAsyncOp, addr 0x2fda138, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* StartPostingAsyncOp();

  /// @brief Method StartPostingAsyncOp, addr 0x2fda140, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Object* StartPostingAsyncOp(bool lockCapture);

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get__context();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& __cordl_internal_get__context() const;

  constexpr ::System::Net::__ContextAwareResult__StateFlags const& __cordl_internal_get__flags() const;

  constexpr ::System::Net::__ContextAwareResult__StateFlags& __cordl_internal_get__flags();

  constexpr ::System::Object*& __cordl_internal_get__lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__lock() const;

  constexpr void __cordl_internal_set__context(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set__flags(::System::Net::__ContextAwareResult__StateFlags value);

  constexpr void __cordl_internal_set__lock(::System::Object* value);

  /// @brief Method .ctor, addr 0x2fda070, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(bool captureIdentity, bool forceCaptureContext, ::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  /// @brief Method .ctor, addr 0x2fda0c0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  /// @brief Method .ctor, addr 0x2fda068, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextAwareResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextAwareResult(ContextAwareResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextAwareResult(ContextAwareResult const&) = delete;

  /// @brief Field _context, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ____context;

  /// @brief Field _lock, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____lock;

  /// @brief Field _flags, offset: 0x50, size: 0x1, def value: None
  ::System::Net::__ContextAwareResult__StateFlags ____flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ContextAwareResult, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Net::ContextAwareResult, ____context) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::ContextAwareResult, ____lock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::ContextAwareResult, ____flags) == 0x50, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ContextAwareResult__StateFlags, "System.Net", "ContextAwareResult/StateFlags");
NEED_NO_BOX(::System::Net::ContextAwareResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContextAwareResult*, "System.Net", "ContextAwareResult");
NEED_NO_BOX(::System::Net::__ContextAwareResult____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ContextAwareResult____c*, "System.Net", "ContextAwareResult/<>c");
