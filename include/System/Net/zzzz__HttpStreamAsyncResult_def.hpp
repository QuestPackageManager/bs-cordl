#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpStreamAsyncResult)
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class Exception;
}
namespace System::Threading {
class WaitHandle;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9178))
// CS Name: ::System.Net::HttpStreamAsyncResult*
class CORDL_TYPE HttpStreamAsyncResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field locker, offset 0x10, size 0x8
  __declspec(property(get = __get_locker, put = __set_locker))::System::Object* locker;

  /// @brief Field handle, offset 0x18, size 0x8
  __declspec(property(get = __get_handle, put = __set_handle))::System::Threading::ManualResetEvent* handle;

  /// @brief Field completed, offset 0x20, size 0x1
  __declspec(property(get = __get_completed, put = __set_completed)) bool completed;

  /// @brief Field Buffer, offset 0x28, size 0x8
  __declspec(property(get = __get_Buffer, put = __set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Offset, offset 0x30, size 0x4
  __declspec(property(get = __get_Offset, put = __set_Offset)) int32_t Offset;

  /// @brief Field Count, offset 0x34, size 0x4
  __declspec(property(get = __get_Count, put = __set_Count)) int32_t Count;

  /// @brief Field Callback, offset 0x38, size 0x8
  __declspec(property(get = __get_Callback, put = __set_Callback))::System::AsyncCallback* Callback;

  /// @brief Field State, offset 0x40, size 0x8
  __declspec(property(get = __get_State, put = __set_State))::System::Object* State;

  /// @brief Field SynchRead, offset 0x48, size 0x4
  __declspec(property(get = __get_SynchRead, put = __set_SynchRead)) int32_t SynchRead;

  /// @brief Field Error, offset 0x50, size 0x8
  __declspec(property(get = __get_Error, put = __set_Error))::System::Exception* Error;

  __declspec(property(get = get_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  constexpr ::System::Object*& __get_locker();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_locker() const;

  constexpr void __set_locker(::System::Object* value);

  constexpr ::System::Threading::ManualResetEvent*& __get_handle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get_handle() const;

  constexpr void __set_handle(::System::Threading::ManualResetEvent* value);

  constexpr bool& __get_completed();

  constexpr bool const& __get_completed() const;

  constexpr void __set_completed(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Buffer() const;

  constexpr void __set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_Offset();

  constexpr int32_t const& __get_Offset() const;

  constexpr void __set_Offset(int32_t value);

  constexpr int32_t& __get_Count();

  constexpr int32_t const& __get_Count() const;

  constexpr void __set_Count(int32_t value);

  constexpr ::System::AsyncCallback*& __get_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __get_Callback() const;

  constexpr void __set_Callback(::System::AsyncCallback* value);

  constexpr ::System::Object*& __get_State();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_State() const;

  constexpr void __set_State(::System::Object* value);

  constexpr int32_t& __get_SynchRead();

  constexpr int32_t const& __get_SynchRead() const;

  constexpr void __set_SynchRead(int32_t value);

  constexpr ::System::Exception*& __get_Error();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get_Error() const;

  constexpr void __set_Error(::System::Exception* value);

  /// @brief Method Complete, addr 0x29bd058, size 0x8, virtual false, abstract: false, final false
  inline void Complete(::System::Exception* e);

  /// @brief Method Complete, addr 0x29bc994, size 0x100, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method get_AsyncState, addr 0x29cb9c8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0x29cb9d0, size 0x13c, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CompletedSynchronously, addr 0x29cbb0c, size 0x14, virtual true, abstract: false, final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted, addr 0x29cbb20, size 0xc8, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  static inline ::System::Net::HttpStreamAsyncResult* New_ctor();

  /// @brief Method .ctor, addr 0x29bc92c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HttpStreamAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpStreamAsyncResult(HttpStreamAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpStreamAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpStreamAsyncResult(HttpStreamAsyncResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpStreamAsyncResult();

public:
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
