#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArrayContent)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class TransportContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net::Http {
class ByteArrayContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::ByteArrayContent);
// Type: System.Net.Http::ByteArrayContent
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14649))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14640))
// CS Name: ::System.Net.Http::ByteArrayContent*
class CORDL_TYPE ByteArrayContent : public ::System::Net::Http::HttpContent {
public:
  // Declarations
  /// @brief Field content, offset 0x28, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::ArrayW<uint8_t, ::Array<uint8_t>*> content;

  /// @brief Field offset, offset 0x30, size 0x4
  __declspec(property(get = __get_offset, put = __set_offset)) int32_t offset;

  /// @brief Field count, offset 0x34, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_content();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_content() const;

  constexpr void __set_content(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_offset();

  constexpr int32_t const& __get_offset() const;

  constexpr void __set_offset(int32_t value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  static inline ::System::Net::Http::ByteArrayContent* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> content);

  /// @brief Method .ctor, addr 0x2830b1c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> content);

  /// @brief Method SerializeToStreamAsync, addr 0x2830ba4, size 0x28, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method TryComputeLength, addr 0x2830bcc, size 0x10, virtual true, abstract: false, final false
  inline bool TryComputeLength(ByRef<int64_t> length);

  // Ctor Parameters [CppParam { name: "", ty: "ByteArrayContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteArrayContent(ByteArrayContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteArrayContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteArrayContent(ByteArrayContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteArrayContent();

public:
  /// @brief Field content, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___content;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::ByteArrayContent, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::ByteArrayContent, ___content) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::ByteArrayContent, ___offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::ByteArrayContent, ___count) == 0x34, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::ByteArrayContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::ByteArrayContent*, "System.Net.Http", "ByteArrayContent");
