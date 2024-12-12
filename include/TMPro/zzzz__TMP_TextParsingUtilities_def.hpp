#pragma once
// IWYU pragma private; include "TMPro/TMP_TextParsingUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextParsingUtilities)
// Forward declare root types
namespace TMPro {
class TMP_TextParsingUtilities;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_TextParsingUtilities);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_TextParsingUtilities
class CORDL_TYPE TMP_TextParsingUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::TMPro::TMP_TextParsingUtilities* s_Instance;

  /// @brief Method ConvertToUTF32, addr 0x4805c14, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t ConvertToUTF32(uint32_t highSurrogate, uint32_t lowSurrogate);

  /// @brief Method GetHashCode, addr 0x48019d4, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::StringW s);

  /// @brief Method GetHashCodeCaseSensitive, addr 0x4801524, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetHashCodeCaseSensitive(::StringW s);

  /// @brief Method IsHighSurrogate, addr 0x4805bec, size 0x14, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(uint32_t c);

  /// @brief Method IsLowSurrogate, addr 0x4805c00, size 0x14, virtual false, abstract: false, final false
  static inline bool IsLowSurrogate(uint32_t c);

  static inline ::TMPro::TMP_TextParsingUtilities* New_ctor();

  /// @brief Method ToLowerASCIIFast, addr 0x4805a90, size 0x74, virtual false, abstract: false, final false
  static inline char16_t ToLowerASCIIFast(char16_t c);

  /// @brief Method ToLowerASCIIFast, addr 0x4805b78, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToLowerASCIIFast(uint32_t c);

  /// @brief Method ToUpperASCIIFast, addr 0x4805a1c, size 0x74, virtual false, abstract: false, final false
  static inline char16_t ToUpperASCIIFast(char16_t c);

  /// @brief Method ToUpperASCIIFast, addr 0x4805b04, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToUpperASCIIFast(uint32_t c);

  /// @brief Method .ctor, addr 0x48059bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_TextParsingUtilities* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x48059c4, size 0x58, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_TextParsingUtilities* get_instance();

  static inline void setStaticF_s_Instance(::TMPro::TMP_TextParsingUtilities* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextParsingUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextParsingUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_TextParsingUtilities(TMP_TextParsingUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextParsingUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_TextParsingUtilities(TMP_TextParsingUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14568 };

  /// @brief Field k_LookupStringL offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LookupStringL{ u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-" };

  /// @brief Field k_LookupStringU offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LookupStringU{ u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextParsingUtilities, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_TextParsingUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextParsingUtilities*, "TMPro", "TMP_TextParsingUtilities");
