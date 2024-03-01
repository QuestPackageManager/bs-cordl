#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IriHelper)
namespace System {
struct UriComponents;
}
// Forward declare root types
namespace System {
class IriHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::IriHelper);
// Type: System::IriHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::IriHelper*
class CORDL_TYPE IriHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckIriUnicodeRange, addr 0x2a31f48, size 0x630, virtual false, abstract: false, final false
  static inline bool CheckIriUnicodeRange(char16_t highSurr, char16_t lowSurr, ByRef<bool> surrogatePair, bool isQuery);

  /// @brief Method CheckIriUnicodeRange, addr 0x2a31ef0, size 0x58, virtual false, abstract: false, final false
  static inline bool CheckIriUnicodeRange(char16_t unicode, bool isQuery);

  /// @brief Method CheckIsReserved, addr 0x2a32578, size 0x144, virtual false, abstract: false, final false
  static inline bool CheckIsReserved(char16_t ch, ::System::UriComponents component);

  /// @brief Method EscapeUnescapeIri, addr 0x2a326bc, size 0x7fc, virtual false, abstract: false, final false
  static inline ::StringW EscapeUnescapeIri(::cordl_internals::Ptr<char16_t> pInput, int32_t start, int32_t end, ::System::UriComponents component);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IriHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IriHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IriHelper(IriHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IriHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IriHelper(IriHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IriHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IriHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IriHelper*, "System", "IriHelper");
