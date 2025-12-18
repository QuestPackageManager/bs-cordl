#pragma once
// IWYU pragma private; include "System/Net/ContextAwareResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContextAwareResult)
namespace System::Net {
struct ContextAwareResult_StateFlags;
}
namespace System::Net {
class ContextAwareResult___c;
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
struct ContextAwareResult_StateFlags;
}
namespace System::Net {
class ContextAwareResult;
}
namespace System::Net {
class ContextAwareResult___c;
}
// Write type traits
MARK_VAL_T(::System::Net::ContextAwareResult_StateFlags);
MARK_REF_PTR_T(::System::Net::ContextAwareResult);
MARK_REF_PTR_T(::System::Net::ContextAwareResult___c);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.ContextAwareResult/StateFlags
struct CORDL_TYPE ContextAwareResult_StateFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ContextAwareResult_StateFlags_Unwrapped
  enum struct __ContextAwareResult_StateFlags_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_CaptureIdentity = static_cast<uint8_t>(0x1u),
    __E_CaptureContext = static_cast<uint8_t>(0x2u),
    __E_ThreadSafeContextCopy = static_cast<uint8_t>(0x4u),
    __E_PostBlockStarted = static_cast<uint8_t>(0x8u),
    __E_PostBlockFinished = static_cast<uint8_t>(0x10u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ContextAwareResult_StateFlags_Unwrapped() const noexcept {
    return static_cast<__ContextAwareResult_StateFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextAwareResult_StateFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ContextAwareResult_StateFlags(uint8_t value__) noexcept;

  /// @brief Field CaptureContext value: U8(2)
  static ::System::Net::ContextAwareResult_StateFlags const CaptureContext;

  /// @brief Field CaptureIdentity value: U8(1)
  static ::System::Net::ContextAwareResult_StateFlags const CaptureIdentity;

  /// @brief Field None value: U8(0)
  static ::System::Net::ContextAwareResult_StateFlags const None;

  /// @brief Field PostBlockFinished value: U8(16)
  static ::System::Net::ContextAwareResult_StateFlags const PostBlockFinished;

  /// @brief Field PostBlockStarted value: U8(8)
  static ::System::Net::ContextAwareResult_StateFlags const PostBlockStarted;

  /// @brief Field ThreadSafeContextCopy value: U8(4)
  static ::System::Net::ContextAwareResult_StateFlags const ThreadSafeContextCopy;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11417 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContextAwareResult_StateFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ContextAwareResult_StateFlags, 0x1>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ContextAwareResult/<>c
class CORDL_TYPE ContextAwareResult___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::ContextAwareResult___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::System::Threading::ContextCallback* __9__17_0;

  static inline ::System::Net::ContextAwareResult___c* New_ctor();

  /// @brief Method <Complete>b__17_0, addr 0x6241f20, size 0x84, virtual false, abstract: false, final false
  inline void _Complete_b__17_0(::System::Object* s);

  /// @brief Method .ctor, addr 0x6241f1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::ContextAwareResult___c* getStaticF___9();

  static inline ::System::Threading::ContextCallback* getStaticF___9__17_0();

  static inline void setStaticF___9(::System::Net::ContextAwareResult___c* value);

  static inline void setStaticF___9__17_0(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextAwareResult___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextAwareResult___c(ContextAwareResult___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextAwareResult___c(ContextAwareResult___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ContextAwareResult___c, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.ContextAwareResult::StateFlags, System.Net.LazyAsyncResult
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ContextAwareResult
class CORDL_TYPE ContextAwareResult : public ::System::Net::LazyAsyncResult {
public:
  // Declarations
  using StateFlags = ::System::Net::ContextAwareResult_StateFlags;

  using __c = ::System::Net::ContextAwareResult___c;

  /// @brief Field _context, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::System::Threading::ExecutionContext* _context;

  /// @brief Field _flags, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags)) ::System::Net::ContextAwareResult_StateFlags _flags;

  /// @brief Field _lock, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock)) ::System::Object* _lock;

  /// @brief Method CaptureOrComplete, addr 0x6241448, size 0x408, virtual false, abstract: false, final false
  inline bool CaptureOrComplete(::ByRef<::System::Threading::ExecutionContext*> cachedContext, bool returnContext);

  /// @brief Method Cleanup, addr 0x6241850, size 0x9c, virtual true, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CleanupInternal, addr 0x6241174, size 0x4, virtual false, abstract: false, final false
  inline void CleanupInternal();

  /// @brief Method Complete, addr 0x6241b20, size 0x2f0, virtual true, abstract: false, final false
  inline void Complete(::System::IntPtr userToken);

  /// @brief Method CompleteCallback, addr 0x6241e10, size 0xb8, virtual false, abstract: false, final false
  inline void CompleteCallback();

  /// @brief Method FinishPostingAsyncOp, addr 0x624140c, size 0x3c, virtual false, abstract: false, final false
  inline bool FinishPostingAsyncOp();

  static inline ::System::Net::ContextAwareResult* New_ctor(bool captureIdentity, bool forceCaptureContext, ::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  static inline ::System::Net::ContextAwareResult* New_ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::System::Object* myObject, ::System::Object* myState,
                                                            ::System::AsyncCallback* myCallBack);

  static inline ::System::Net::ContextAwareResult* New_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  /// @brief Method SafeCaptureIdentity, addr 0x6241170, size 0x4, virtual false, abstract: false, final false
  inline void SafeCaptureIdentity();

  /// @brief Method StartPostingAsyncOp, addr 0x6241248, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* StartPostingAsyncOp();

  /// @brief Method StartPostingAsyncOp, addr 0x6241250, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Object* StartPostingAsyncOp(bool lockCapture);

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get__context() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get__context();

  constexpr ::System::Net::ContextAwareResult_StateFlags const& __cordl_internal_get__flags() const;

  constexpr ::System::Net::ContextAwareResult_StateFlags& __cordl_internal_get__flags();

  constexpr ::System::Object* const& __cordl_internal_get__lock() const;

  constexpr ::System::Object*& __cordl_internal_get__lock();

  constexpr void __cordl_internal_set__context(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set__flags(::System::Net::ContextAwareResult_StateFlags value);

  constexpr void __cordl_internal_set__lock(::System::Object* value);

  /// @brief Method .ctor, addr 0x6241180, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(bool captureIdentity, bool forceCaptureContext, ::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  /// @brief Method .ctor, addr 0x62411d0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  /// @brief Method .ctor, addr 0x6241178, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11419 };

  /// @brief Field _context, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ____context;

  /// @brief Field _lock, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____lock;

  /// @brief Field _flags, offset: 0x50, size: 0x1, def value: None
  ::System::Net::ContextAwareResult_StateFlags ____flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContextAwareResult, ____context) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::ContextAwareResult, ____lock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::ContextAwareResult, ____flags) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ContextAwareResult, 0x58>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContextAwareResult_StateFlags, "System.Net", "ContextAwareResult/StateFlags");
NEED_NO_BOX(::System::Net::ContextAwareResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContextAwareResult*, "System.Net", "ContextAwareResult");
NEED_NO_BOX(::System::Net::ContextAwareResult___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContextAwareResult___c*, "System.Net", "ContextAwareResult/<>c");
