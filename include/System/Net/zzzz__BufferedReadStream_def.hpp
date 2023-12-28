#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedReadStream)
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Net {
struct __BufferedReadStream___ProcessReadAsync_d__2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net {
class BufferedReadStream;
}
namespace System::Net {
struct __BufferedReadStream___ProcessReadAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::BufferedReadStream);
MARK_VAL_T(::System::Net::__BufferedReadStream___ProcessReadAsync_d__2);
// Type: ::<ProcessReadAsync>d__2
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 98 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(9151)) CS Name: ::BufferedReadStream::<ProcessReadAsync>d__2
struct CORDL_TYPE __BufferedReadStream___ProcessReadAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x29bc1dc size 0x2b0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x29bc48c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::BufferedReadStream*", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __BufferedReadStream___ProcessReadAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                         ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferedReadStream* __4__this, int32_t size,
                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedReadStream___ProcessReadAsync_d__2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::BufferedReadStream* __4__this;

  /// @brief Field size, offset: 0x30, size: 0x4, def value: None
  int32_t size;

  /// @brief Field buffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x40, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__BufferedReadStream___ProcessReadAsync_d__2, 0x58>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::BufferedReadStream
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9152))
// CS Name: ::System.Net::BufferedReadStream*
class CORDL_TYPE BufferedReadStream : public ::System::Net::WebReadStream {
public:
  // Declarations
  using _ProcessReadAsync_d__2 = ::System::Net::__BufferedReadStream___ProcessReadAsync_d__2;

  /// @brief Field readBuffer, offset 0x40, size 0x8
  __declspec(property(get = __get_readBuffer, put = __set_readBuffer))::System::Net::BufferOffsetSize* readBuffer;

  constexpr ::System::Net::BufferOffsetSize*& __get_readBuffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::BufferOffsetSize*> const& __get_readBuffer() const;

  constexpr void __set_readBuffer(::System::Net::BufferOffsetSize* value);

  static inline ::System::Net::BufferedReadStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::BufferOffsetSize* readBuffer);

  /// @brief Method .ctor addr 0x29bbffc size 0x28 virtual false final false
  inline void _ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::BufferOffsetSize* readBuffer);

  /// @brief Method ProcessReadAsync addr 0x29bc024 size 0x128 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryReadFromBuffer addr 0x29bc14c size 0x90 virtual false final false
  inline bool TryReadFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ByRef<int32_t> result);

  // Ctor Parameters [CppParam { name: "", ty: "BufferedReadStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedReadStream(BufferedReadStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedReadStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedReadStream(BufferedReadStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedReadStream();

public:
  /// @brief Field readBuffer, offset: 0x40, size: 0x8, def value: None
  ::System::Net::BufferOffsetSize* ___readBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::BufferedReadStream, 0x48>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::BufferedReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BufferedReadStream*, "System.Net", "BufferedReadStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__BufferedReadStream___ProcessReadAsync_d__2, "System.Net", "BufferedReadStream/<ProcessReadAsync>d__2");
