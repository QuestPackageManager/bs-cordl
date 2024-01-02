#pragma once
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
// Type: TMPro::TMP_TextParsingUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12451))
// CS Name: ::TMPro::TMP_TextParsingUtilities*
class CORDL_TYPE TMP_TextParsingUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::TMPro::TMP_TextParsingUtilities* s_Instance;

  static inline void setStaticF_s_Instance(::TMPro::TMP_TextParsingUtilities* value);

  static inline ::TMPro::TMP_TextParsingUtilities* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x2c48bf4, size 0x58, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_TextParsingUtilities* get_instance();

  /// @brief Method GetHashCode, addr 0x2c44cf8, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::StringW s);

  /// @brief Method GetHashCodeCaseSensitive, addr 0x2c44840, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetHashCodeCaseSensitive(::StringW s);

  /// @brief Method ToLowerASCIIFast, addr 0x2c48cc0, size 0x74, virtual false, abstract: false, final false
  static inline char16_t ToLowerASCIIFast(char16_t c);

  /// @brief Method ToUpperASCIIFast, addr 0x2c48c4c, size 0x74, virtual false, abstract: false, final false
  static inline char16_t ToUpperASCIIFast(char16_t c);

  /// @brief Method ToUpperASCIIFast, addr 0x2c48d34, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToUpperASCIIFast(uint32_t c);

  /// @brief Method ToLowerASCIIFast, addr 0x2c48da8, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToLowerASCIIFast(uint32_t c);

  /// @brief Method IsHighSurrogate, addr 0x2c48e1c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(uint32_t c);

  /// @brief Method IsLowSurrogate, addr 0x2c48e30, size 0x14, virtual false, abstract: false, final false
  static inline bool IsLowSurrogate(uint32_t c);

  /// @brief Method ConvertToUTF32, addr 0x2c48e44, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t ConvertToUTF32(uint32_t highSurrogate, uint32_t lowSurrogate);

  static inline ::TMPro::TMP_TextParsingUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x2c48bec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextParsingUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_TextParsingUtilities(TMP_TextParsingUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextParsingUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_TextParsingUtilities(TMP_TextParsingUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextParsingUtilities();

public:
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
