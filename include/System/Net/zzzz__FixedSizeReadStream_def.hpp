#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedSizeReadStream)
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct __FixedSizeReadStream___ProcessReadAsync_d__5;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
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
struct __FixedSizeReadStream___ProcessReadAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FixedSizeReadStream);
MARK_VAL_T(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5);
// Type: ::<ProcessReadAsync>d__5
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 98 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(9166)) CS Name: ::FixedSizeReadStream::<ProcessReadAsync>d__5
struct CORDL_TYPE __FixedSizeReadStream___ProcessReadAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x29c4ad4, size 0x2b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29c4d84, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::FixedSizeReadStream*", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __FixedSizeReadStream___ProcessReadAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                          ::System::Threading::CancellationToken cancellationToken, ::System::Net::FixedSizeReadStream* __4__this, int32_t size,
                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                          ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FixedSizeReadStream___ProcessReadAsync_d__5();

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
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, __u__1) == 0x48, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::FixedSizeReadStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9167))
// CS Name: ::System.Net::FixedSizeReadStream*
class CORDL_TYPE FixedSizeReadStream : public ::System::Net::WebReadStream {
public:
  // Declarations
  using _ProcessReadAsync_d__5 = ::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5;

  /// @brief Field <ContentLength>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__ContentLength_k__BackingField, put = __set__ContentLength_k__BackingField)) int64_t _ContentLength_k__BackingField;

  /// @brief Field position, offset 0x48, size 0x8
  __declspec(property(get = __get_position, put = __set_position)) int64_t position;

  __declspec(property(get = get_ContentLength)) int64_t ContentLength;

  constexpr int64_t& __get__ContentLength_k__BackingField();

  constexpr int64_t const& __get__ContentLength_k__BackingField() const;

  constexpr void __set__ContentLength_k__BackingField(int64_t value);

  constexpr int64_t& __get_position();

  constexpr int64_t const& __get_position() const;

  constexpr void __set_position(int64_t value);

  /// @brief Method get_ContentLength, addr 0x29c497c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ContentLength();

  static inline ::System::Net::FixedSizeReadStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength);

  /// @brief Method .ctor, addr 0x29c4984, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength);

  /// @brief Method ProcessReadAsync, addr 0x29c49ac, size 0x128, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedSizeReadStream(FixedSizeReadStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedSizeReadStream(FixedSizeReadStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedSizeReadStream();

public:
  /// @brief Field <ContentLength>k__BackingField, offset: 0x40, size: 0x8, def value: None
  int64_t ____ContentLength_k__BackingField;

  /// @brief Field position, offset: 0x48, size: 0x8, def value: None
  int64_t ___position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FixedSizeReadStream, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream, ____ContentLength_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream, ___position) == 0x48, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FixedSizeReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FixedSizeReadStream*, "System.Net", "FixedSizeReadStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, "System.Net", "FixedSizeReadStream/<ProcessReadAsync>d__5");
