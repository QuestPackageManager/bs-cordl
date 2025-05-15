#pragma once
// IWYU pragma private; include "System/Net/FixedSizeReadStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedSizeReadStream)
namespace System::IO {
class Stream;
}
namespace System::Net {
struct FixedSizeReadStream__ProcessReadAsync_d__5;
}
namespace System::Net {
class WebOperation;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net {
class FixedSizeReadStream;
}
namespace System::Net {
struct FixedSizeReadStream__ProcessReadAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FixedSizeReadStream);
MARK_VAL_T(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.FixedSizeReadStream/<ProcessReadAsync>d__5
struct CORDL_TYPE FixedSizeReadStream__ProcessReadAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x44c4b44, size 0x318, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x44c4e5c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedSizeReadStream__ProcessReadAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::FixedSizeReadStream*", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr FixedSizeReadStream__ProcessReadAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                       ::System::Threading::CancellationToken cancellationToken, ::System::Net::FixedSizeReadStream* __4__this, int32_t size,
                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::FixedSizeReadStream* __4__this;

  /// @brief Field size, offset: 0x30, size: 0x4, def value: None
  int32_t size;

  /// @brief Field buffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x40, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, 0x58>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.WebReadStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FixedSizeReadStream
class CORDL_TYPE FixedSizeReadStream : public ::System::Net::WebReadStream {
public:
  // Declarations
  using _ProcessReadAsync_d__5 = ::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5;

  __declspec(property(get = get_ContentLength)) int64_t ContentLength;

  /// @brief Field <ContentLength>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ContentLength_k__BackingField, put = __cordl_internal_set__ContentLength_k__BackingField)) int64_t _ContentLength_k__BackingField;

  /// @brief Field position, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) int64_t position;

  static inline ::System::Net::FixedSizeReadStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength);

  /// @brief Method ProcessReadAsync, addr 0x44c4a24, size 0x120, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  constexpr int64_t const& __cordl_internal_get__ContentLength_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__ContentLength_k__BackingField();

  constexpr int64_t const& __cordl_internal_get_position() const;

  constexpr int64_t& __cordl_internal_get_position();

  constexpr void __cordl_internal_set__ContentLength_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set_position(int64_t value);

  /// @brief Method .ctor, addr 0x44c49fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength);

  /// @brief Method get_ContentLength, addr 0x44c49f4, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ContentLength();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedSizeReadStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedSizeReadStream(FixedSizeReadStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedSizeReadStream(FixedSizeReadStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9688 };

  /// @brief Field <ContentLength>k__BackingField, offset: 0x40, size: 0x8, def value: None
  int64_t ____ContentLength_k__BackingField;

  /// @brief Field position, offset: 0x48, size: 0x8, def value: None
  int64_t ___position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FixedSizeReadStream, ____ContentLength_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream, ___position) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FixedSizeReadStream, 0x50>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FixedSizeReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FixedSizeReadStream*, "System.Net", "FixedSizeReadStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5, "System.Net", "FixedSizeReadStream/<ProcessReadAsync>d__5");
