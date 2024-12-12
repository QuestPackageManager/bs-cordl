#pragma once
// IWYU pragma private; include "System/Net/ContentDecodeStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentDecodeStream)
namespace System::IO {
class Stream;
}
namespace System::Net {
struct ContentDecodeStream_Mode;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net {
struct ContentDecodeStream_Mode;
}
namespace System::Net {
class ContentDecodeStream;
}
// Write type traits
MARK_VAL_T(::System::Net::ContentDecodeStream_Mode);
MARK_REF_PTR_T(::System::Net::ContentDecodeStream);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.ContentDecodeStream/Mode
struct CORDL_TYPE ContentDecodeStream_Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ContentDecodeStream_Mode_Unwrapped
  enum struct __ContentDecodeStream_Mode_Unwrapped : int32_t {
    __E_GZip = static_cast<int32_t>(0x0),
    __E_Deflate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ContentDecodeStream_Mode_Unwrapped() const noexcept {
    return static_cast<__ContentDecodeStream_Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentDecodeStream_Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ContentDecodeStream_Mode(int32_t value__) noexcept;

  /// @brief Field Deflate value: I32(1)
  static ::System::Net::ContentDecodeStream_Mode const Deflate;

  /// @brief Field GZip value: I32(0)
  static ::System::Net::ContentDecodeStream_Mode const GZip;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContentDecodeStream_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ContentDecodeStream_Mode, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.WebReadStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ContentDecodeStream
class CORDL_TYPE ContentDecodeStream : public ::System::Net::WebReadStream {
public:
  // Declarations
  using Mode = ::System::Net::ContentDecodeStream_Mode;

  __declspec(property(get = get_OriginalInnerStream)) ::System::IO::Stream* OriginalInnerStream;

  /// @brief Field <OriginalInnerStream>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__OriginalInnerStream_k__BackingField,
                      put = __cordl_internal_set__OriginalInnerStream_k__BackingField)) ::System::IO::Stream* _OriginalInnerStream_k__BackingField;

  /// @brief Method Create, addr 0x44bbb5c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Net::ContentDecodeStream* Create(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::ContentDecodeStream_Mode mode);

  /// @brief Method FinishReading, addr 0x44bbc8c, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::ContentDecodeStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* decodeStream, ::System::IO::Stream* originalInnerStream);

  /// @brief Method ProcessReadAsync, addr 0x44bbc68, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::IO::Stream* const& __cordl_internal_get__OriginalInnerStream_k__BackingField() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__OriginalInnerStream_k__BackingField();

  constexpr void __cordl_internal_set__OriginalInnerStream_k__BackingField(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x44bbc38, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* decodeStream, ::System::IO::Stream* originalInnerStream);

  /// @brief Method get_OriginalInnerStream, addr 0x44bbc60, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_OriginalInnerStream();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentDecodeStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentDecodeStream(ContentDecodeStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentDecodeStream(ContentDecodeStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9672 };

  /// @brief Field <OriginalInnerStream>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::IO::Stream* ____OriginalInnerStream_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContentDecodeStream, ____OriginalInnerStream_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ContentDecodeStream, 0x48>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContentDecodeStream_Mode, "System.Net", "ContentDecodeStream/Mode");
NEED_NO_BOX(::System::Net::ContentDecodeStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContentDecodeStream*, "System.Net", "ContentDecodeStream");
