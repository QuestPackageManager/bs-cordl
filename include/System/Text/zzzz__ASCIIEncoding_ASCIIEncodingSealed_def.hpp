#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__ASCIIEncoding_def.hpp"
CORDL_MODULE_EXPORT(ASCIIEncoding_ASCIIEncodingSealed)
// Forward declare root types
namespace System::Text {
class __ASCIIEncoding__ASCIIEncodingSealed;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::__ASCIIEncoding__ASCIIEncodingSealed);
// Type: ::ASCIIEncodingSealed
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::ASCIIEncoding::ASCIIEncodingSealed*
class CORDL_TYPE __ASCIIEncoding__ASCIIEncodingSealed : public ::System::Text::ASCIIEncoding {
public:
  // Declarations
  static inline ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed* New_ctor();

  /// @brief Method .ctor, addr 0x28b9074, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ASCIIEncoding__ASCIIEncodingSealed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ASCIIEncoding__ASCIIEncodingSealed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ASCIIEncoding__ASCIIEncodingSealed(__ASCIIEncoding__ASCIIEncodingSealed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ASCIIEncoding__ASCIIEncodingSealed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ASCIIEncoding__ASCIIEncodingSealed(__ASCIIEncoding__ASCIIEncodingSealed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__ASCIIEncoding__ASCIIEncodingSealed, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::__ASCIIEncoding__ASCIIEncodingSealed);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__ASCIIEncoding__ASCIIEncodingSealed*, "System.Text", "ASCIIEncoding/ASCIIEncodingSealed");
