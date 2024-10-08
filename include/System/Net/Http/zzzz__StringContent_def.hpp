#pragma once
// IWYU pragma private; include "System/Net/Http/StringContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__ByteArrayContent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringContent)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Net::Http {
class StringContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::StringContent);
// Type: System.Net.Http::StringContent
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::System.Net.Http::StringContent*
class CORDL_TYPE StringContent : public ::System::Net::Http::ByteArrayContent {
public:
  // Declarations
  /// @brief Method GetByteArray, addr 0x41a3ba8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetByteArray(::StringW content, ::System::Text::Encoding* encoding);

  static inline ::System::Net::Http::StringContent* New_ctor(::StringW content, ::System::Text::Encoding* encoding, ::StringW mediaType);

  /// @brief Method .ctor, addr 0x41a3aa4, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::StringW content, ::System::Text::Encoding* encoding, ::StringW mediaType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringContent(StringContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringContent(StringContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::StringContent, 0x38>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::StringContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::StringContent*, "System.Net.Http", "StringContent");
