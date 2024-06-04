#pragma once
// IWYU pragma private; include "System/Net/HttpStreamAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpStreamAsyncResult)
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class HttpStreamAsyncResult;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpStreamAsyncResult);
// Type: System.Net::HttpStreamAsyncResult
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::HttpStreamAsyncResult*
class CORDL_TYPE HttpStreamAsyncResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  /// @brief Field Buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Callback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Callback, put = __cordl_internal_set_Callback))::System::AsyncCallback* Callback;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  /// @brief Field Count, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_Count, put = __cordl_internal_set_Count)) int32_t Count;

  /// @brief Field Error, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Error, put = __cordl_internal_set_Error))::System::Exception* Error;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Field Offset, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) int32_t Offset;

  /// @brief Field State, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_State, put = __cordl_internal_set_State))::System::Object* State;

  /// @brief Field SynchRead, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_SynchRead, put = __cordl_internal_set_SynchRead)) int32_t SynchRead;

  /// @brief Field completed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_completed, put = __cordl_internal_set_completed)) bool completed;

  /// @brief Field handle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle))::System::Threading::ManualResetEvent* handle;

  /// @brief Field locker, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_locker, put = __cordl_internal_set_locker))::System::Object* locker;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Method Complete, addr 0x300f1e0, size 0x100, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method Complete, addr 0x300f8a4, size 0x8, virtual false, abstract: false, final false
  inline void Complete(::System::Exception* e);

  static inline ::System::Net::HttpStreamAsyncResult* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Buffer();

  constexpr ::System::AsyncCallback*& __cordl_internal_get_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __cordl_internal_get_Callback() const;

  constexpr int32_t const& __cordl_internal_get_Count() const;

  constexpr int32_t& __cordl_internal_get_Count();

  constexpr ::System::Exception*& __cordl_internal_get_Error();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get_Error() const;

  constexpr int32_t const& __cordl_internal_get_Offset() const;

  constexpr int32_t& __cordl_internal_get_Offset();

  constexpr ::System::Object*& __cordl_internal_get_State();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_State() const;

  constexpr int32_t const& __cordl_internal_get_SynchRead() const;

  constexpr int32_t& __cordl_internal_get_SynchRead();

  constexpr bool const& __cordl_internal_get_completed() const;

  constexpr bool& __cordl_internal_get_completed();

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_handle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __cordl_internal_get_handle() const;

  constexpr ::System::Object*& __cordl_internal_get_locker();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_locker() const;

  constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Callback(::System::AsyncCallback* value);

  constexpr void __cordl_internal_set_Count(int32_t value);

  constexpr void __cordl_internal_set_Error(::System::Exception* value);

  constexpr void __cordl_internal_set_Offset(int32_t value);

  constexpr void __cordl_internal_set_State(::System::Object* value);

  constexpr void __cordl_internal_set_SynchRead(int32_t value);

  constexpr void __cordl_internal_set_completed(bool value);

  constexpr void __cordl_internal_set_handle(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set_locker(::System::Object* value);

  /// @brief Method .ctor, addr 0x300f178, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AsyncState, addr 0x301e214, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0x301e21c, size 0x13c, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CompletedSynchronously, addr 0x301e358, size 0x14, virtual true, abstract: false, final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted, addr 0x301e36c, size 0xc8, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpStreamAsyncResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpStreamAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpStreamAsyncResult(HttpStreamAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpStreamAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpStreamAsyncResult(HttpStreamAsyncResult const&) = delete;

  /// @brief Field locker, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___locker;

  /// @brief Field handle, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___handle;

  /// @brief Field completed, offset: 0x20, size: 0x1, def value: None
  bool ___completed;

  /// @brief Field Buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field Offset, offset: 0x30, size: 0x4, def value: None
  int32_t ___Offset;

  /// @brief Field Count, offset: 0x34, size: 0x4, def value: None
  int32_t ___Count;

  /// @brief Field Callback, offset: 0x38, size: 0x8, def value: None
  ::System::AsyncCallback* ___Callback;

  /// @brief Field State, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___State;

  /// @brief Field SynchRead, offset: 0x48, size: 0x4, def value: None
  int32_t ___SynchRead;

  /// @brief Field Error, offset: 0x50, size: 0x8, def value: None
  ::System::Exception* ___Error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpStreamAsyncResult, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___locker) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___completed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___Buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___Offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___Count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___Callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___State) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___SynchRead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpStreamAsyncResult, ___Error) == 0x50, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpStreamAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpStreamAsyncResult*, "System.Net", "HttpStreamAsyncResult");
