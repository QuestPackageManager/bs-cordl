#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileStreamAsyncResult)
namespace System::Threading {
class WaitHandle;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::IO {
class FileStreamAsyncResult;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileStreamAsyncResult);
// Type: System.IO::FileStreamAsyncResult
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3616))
// CS Name: ::System.IO::FileStreamAsyncResult*
class CORDL_TYPE FileStreamAsyncResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field state, offset 0x10, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::System::Object* state;

  /// @brief Field completed, offset 0x18, size 0x1
  __declspec(property(get = __get_completed, put = __set_completed)) bool completed;

  /// @brief Field wh, offset 0x20, size 0x8
  __declspec(property(get = __get_wh, put = __set_wh))::System::Threading::ManualResetEvent* wh;

  /// @brief Field cb, offset 0x28, size 0x8
  __declspec(property(get = __get_cb, put = __set_cb))::System::AsyncCallback* cb;

  /// @brief Field completedSynch, offset 0x30, size 0x1
  __declspec(property(get = __get_completedSynch, put = __set_completedSynch)) bool completedSynch;

  /// @brief Field Count, offset 0x34, size 0x4
  __declspec(property(get = __get_Count, put = __set_Count)) int32_t Count;

  /// @brief Field OriginalCount, offset 0x38, size 0x4
  __declspec(property(get = __get_OriginalCount, put = __set_OriginalCount)) int32_t OriginalCount;

  /// @brief Field BytesRead, offset 0x3c, size 0x4
  __declspec(property(get = __get_BytesRead, put = __set_BytesRead)) int32_t BytesRead;

  /// @brief Field realcb, offset 0x40, size 0x8
  __declspec(property(get = __get_realcb, put = __set_realcb))::System::AsyncCallback* realcb;

  __declspec(property(get = get_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  constexpr ::System::Object*& __get_state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_state() const;

  constexpr void __set_state(::System::Object* value);

  constexpr bool& __get_completed();

  constexpr bool const& __get_completed() const;

  constexpr void __set_completed(bool value);

  constexpr ::System::Threading::ManualResetEvent*& __get_wh();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get_wh() const;

  constexpr void __set_wh(::System::Threading::ManualResetEvent* value);

  constexpr ::System::AsyncCallback*& __get_cb();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __get_cb() const;

  constexpr void __set_cb(::System::AsyncCallback* value);

  constexpr bool& __get_completedSynch();

  constexpr bool const& __get_completedSynch() const;

  constexpr void __set_completedSynch(bool value);

  constexpr int32_t& __get_Count();

  constexpr int32_t const& __get_Count() const;

  constexpr void __set_Count(int32_t value);

  constexpr int32_t& __get_OriginalCount();

  constexpr int32_t const& __get_OriginalCount() const;

  constexpr void __set_OriginalCount(int32_t value);

  constexpr int32_t& __get_BytesRead();

  constexpr int32_t const& __get_BytesRead() const;

  constexpr void __set_BytesRead(int32_t value);

  constexpr ::System::AsyncCallback*& __get_realcb();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __get_realcb() const;

  constexpr void __set_realcb(::System::AsyncCallback* value);

  static inline ::System::IO::FileStreamAsyncResult* New_ctor(::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method .ctor addr 0x23e427c size 0xd8 virtual false final false
  inline void _ctor(::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method CBWrapper addr 0x23e52b8 size 0x94 virtual false final false
  static inline void CBWrapper(::System::IAsyncResult* ares);

  /// @brief Method get_AsyncState addr 0x23e534c size 0x8 virtual true final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_CompletedSynchronously addr 0x23e5354 size 0x8 virtual true final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_AsyncWaitHandle addr 0x23e535c size 0x8 virtual true final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_IsCompleted addr 0x23e5364 size 0x8 virtual true final true
  inline bool get_IsCompleted();

  // Ctor Parameters [CppParam { name: "", ty: "FileStreamAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileStreamAsyncResult(FileStreamAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileStreamAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileStreamAsyncResult(FileStreamAsyncResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileStreamAsyncResult();

public:
  /// @brief Field state, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___state;

  /// @brief Field completed, offset: 0x18, size: 0x1, def value: None
  bool ___completed;

  /// @brief Field wh, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___wh;

  /// @brief Field cb, offset: 0x28, size: 0x8, def value: None
  ::System::AsyncCallback* ___cb;

  /// @brief Field completedSynch, offset: 0x30, size: 0x1, def value: None
  bool ___completedSynch;

  /// @brief Field Count, offset: 0x34, size: 0x4, def value: None
  int32_t ___Count;

  /// @brief Field OriginalCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___OriginalCount;

  /// @brief Field BytesRead, offset: 0x3c, size: 0x4, def value: None
  int32_t ___BytesRead;

  /// @brief Field realcb, offset: 0x40, size: 0x8, def value: None
  ::System::AsyncCallback* ___realcb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileStreamAsyncResult, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___completed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___wh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___cb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___completedSynch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___Count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___OriginalCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___BytesRead) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStreamAsyncResult, ___realcb) == 0x40, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileStreamAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStreamAsyncResult*, "System.IO", "FileStreamAsyncResult");
