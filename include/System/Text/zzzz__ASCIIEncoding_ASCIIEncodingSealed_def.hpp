#pragma once
// IWYU pragma private; include "System/Text/ASCIIEncoding_ASCIIEncodingSealed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__ASCIIEncoding_def.hpp"
CORDL_MODULE_EXPORT(ASCIIEncoding_ASCIIEncodingSealed)
// Forward declare root types
namespace GlobalNamespace {
class ASCIIEncoding_ASCIIEncodingSealed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*, "System.Text", "ASCIIEncoding/ASCIIEncodingSealed");
// Dependencies System.Text.ASCIIEncoding
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Text.ASCIIEncoding/ASCIIEncodingSealed
class CORDL_TYPE ASCIIEncoding_ASCIIEncodingSealed : public ::System::Text::ASCIIEncoding {
public:
  // Declarations
  static inline ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed* New_ctor();

  /// @brief Method .ctor, addr 0x5cc8a38, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ASCIIEncoding_ASCIIEncodingSealed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding_ASCIIEncodingSealed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ASCIIEncoding_ASCIIEncodingSealed(ASCIIEncoding_ASCIIEncodingSealed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding_ASCIIEncodingSealed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ASCIIEncoding_ASCIIEncodingSealed(ASCIIEncoding_ASCIIEncodingSealed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
