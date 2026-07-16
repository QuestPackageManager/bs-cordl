#pragma once
// IWYU pragma private; include "System/Net/Http/FormUrlEncodedContent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__ByteArrayContent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormUrlEncodedContent)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
// Forward declare root types
namespace System::Net::Http {
class FormUrlEncodedContent;
}
// Write type traits
MARK_REF_T(::System::Net::Http::FormUrlEncodedContent*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::FormUrlEncodedContent*, "System.Net.Http", "FormUrlEncodedContent");
// Dependencies System.Net.Http.ByteArrayContent
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.FormUrlEncodedContent
class CORDL_TYPE FormUrlEncodedContent : public ::System::Net::Http::ByteArrayContent {
public:
  // Declarations
  /// @brief Method EncodeContent, addr 0x60d565c, size 0x52c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeContent(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* nameValueCollection);

  static inline ::System::Net::Http::FormUrlEncodedContent*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* nameValueCollection);

  /// @brief Method SerializeValue, addr 0x60d5c08, size 0xdc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> SerializeValue(::StringW value);

  /// @brief Method .ctor, addr 0x60d55ac, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* nameValueCollection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormUrlEncodedContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormUrlEncodedContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormUrlEncodedContent(FormUrlEncodedContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormUrlEncodedContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormUrlEncodedContent(FormUrlEncodedContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20237 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Http::FormUrlEncodedContent) == 0x40, "Size mismatch!");

} // namespace System::Net::Http
