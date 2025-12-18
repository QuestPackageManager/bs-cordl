#pragma once
// IWYU pragma private; include "TMPro/TMP_TextParsingUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextParsingUtilities)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
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
  /// @brief Field k_EmojiLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EmojiLookup, put = setStaticF_k_EmojiLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* k_EmojiLookup;

  /// @brief Field k_EmojiPresentationFormLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EmojiPresentationFormLookup,
                      put = setStaticF_k_EmojiPresentationFormLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* k_EmojiPresentationFormLookup;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::TMPro::TMP_TextParsingUtilities* s_Instance;

  /// @brief Method ConvertToUTF32, addr 0x67ee194, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t ConvertToUTF32(uint32_t highSurrogate, uint32_t lowSurrogate);

  /// @brief Method GetHashCode, addr 0x67e9e74, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::StringW s);

  /// @brief Method GetHashCodeCaseSensitive, addr 0x67edfa4, size 0x48, virtual false, abstract: false, final false
  static inline int32_t GetHashCodeCaseSensitive(::StringW s);

  /// @brief Method IsBaseGlyph, addr 0x67ee1e8, size 0x130, virtual false, abstract: false, final false
  static inline bool IsBaseGlyph(uint32_t c);

  /// @brief Method IsCJK, addr 0x67ee484, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsCJK(uint32_t c);

  /// @brief Method IsDiacriticalMark, addr 0x67ee1a8, size 0x40, virtual false, abstract: false, final false
  static inline bool IsDiacriticalMark(uint32_t c);

  /// @brief Method IsEmoji, addr 0x67ee318, size 0x88, virtual false, abstract: false, final false
  static inline bool IsEmoji(uint32_t c);

  /// @brief Method IsEmojiPresentationForm, addr 0x67ee3a0, size 0x88, virtual false, abstract: false, final false
  static inline bool IsEmojiPresentationForm(uint32_t c);

  /// @brief Method IsHangul, addr 0x67ee428, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsHangul(uint32_t c);

  /// @brief Method IsHighSurrogate, addr 0x67ee16c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(uint32_t c);

  /// @brief Method IsLowSurrogate, addr 0x67ee180, size 0x14, virtual false, abstract: false, final false
  static inline bool IsLowSurrogate(uint32_t c);

  static inline ::TMPro::TMP_TextParsingUtilities* New_ctor();

  /// @brief Method ToLowerASCIIFast, addr 0x67edfec, size 0x80, virtual false, abstract: false, final false
  static inline char16_t ToLowerASCIIFast(char16_t c);

  /// @brief Method ToLowerASCIIFast, addr 0x67ee0ec, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t ToLowerASCIIFast(uint32_t c);

  /// @brief Method ToUpperASCIIFast, addr 0x67edf24, size 0x80, virtual false, abstract: false, final false
  static inline char16_t ToUpperASCIIFast(char16_t c);

  /// @brief Method ToUpperASCIIFast, addr 0x67ee06c, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t ToUpperASCIIFast(uint32_t c);

  /// @brief Method .ctor, addr 0x67ee52c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_k_EmojiLookup();

  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_k_EmojiPresentationFormLookup();

  static inline ::TMPro::TMP_TextParsingUtilities* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x67edec8, size 0x5c, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_TextParsingUtilities* get_instance();

  static inline void setStaticF_k_EmojiLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  static inline void setStaticF_k_EmojiPresentationFormLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15982 };

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
