#pragma once
// IWYU pragma private; include "System\IriHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::IriHelper*);
DEFINE_IL2CPP_CLASS(::System::IriHelper*, "System", "IriHelper");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.IriHelper
class CORDL_TYPE IriHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckIriUnicodeRange, addr 0x63750d0, size 0x6b0, virtual false, abstract: false, final false
  static inline bool CheckIriUnicodeRange(char16_t highSurr, char16_t lowSurr, ::by_ref<bool> surrogatePair, bool isQuery);

  /// @brief Method CheckIriUnicodeRange, addr 0x6375078, size 0x58, virtual false, abstract: false, final false
  static inline bool CheckIriUnicodeRange(char16_t unicode, bool isQuery);

  /// @brief Method CheckIsReserved, addr 0x6375780, size 0x138, virtual false, abstract: false, final false
  static inline bool CheckIsReserved(char16_t ch, ::System::UriComponents component);

  /// @brief Method EscapeUnescapeIri, addr 0x63758b8, size 0x830, virtual false, abstract: false, final false
  static inline ::StringW EscapeUnescapeIri(char16_t* pInput, int32_t start, int32_t end, ::System::UriComponents component);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11060 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IriHelper) == 0x10, "Size mismatch!");

} // namespace System
