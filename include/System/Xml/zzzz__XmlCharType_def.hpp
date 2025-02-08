#pragma once
// IWYU pragma private; include "System/Xml/XmlCharType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlCharType)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
struct XmlCharType;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlCharType);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlCharType
struct CORDL_TYPE XmlCharType {
public:
  // Declarations
  /// @brief Field s_CharProperties, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CharProperties, put = setStaticF_s_CharProperties)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_CharProperties;

  /// @brief Field s_Lock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Lock, put = setStaticF_s_Lock)) ::System::Object* s_Lock;

  /// @brief Method CombineSurrogateChar, addr 0x435b1c8, size 0x18, virtual false, abstract: false, final false
  static inline int32_t CombineSurrogateChar(int32_t lowChar, int32_t highChar);

  /// @brief Method InRange, addr 0x435b184, size 0x14, virtual false, abstract: false, final false
  static inline bool InRange(int32_t value, int32_t start, int32_t end);

  /// @brief Method InitInstance, addr 0x435ac58, size 0x260, virtual false, abstract: false, final false
  static inline void InitInstance();

  /// @brief Method IsCharData, addr 0x435afdc, size 0x34, virtual false, abstract: false, final false
  inline bool IsCharData(char16_t ch);

  /// @brief Method IsDigit, addr 0x435b170, size 0x14, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t ch);

  /// @brief Method IsHighSurrogate, addr 0x435b198, size 0x10, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(int32_t ch);

  /// @brief Method IsLetter, addr 0x435b0c0, size 0x34, virtual false, abstract: false, final false
  inline bool IsLetter(char16_t ch);

  /// @brief Method IsLowSurrogate, addr 0x435b1a8, size 0x10, virtual false, abstract: false, final false
  static inline bool IsLowSurrogate(int32_t ch);

  /// @brief Method IsNCNameCharXml4e, addr 0x435b0f4, size 0x34, virtual false, abstract: false, final false
  inline bool IsNCNameCharXml4e(char16_t ch);

  /// @brief Method IsNCNameSingleChar, addr 0x435a470, size 0x34, virtual false, abstract: false, final false
  inline bool IsNCNameSingleChar(char16_t ch);

  /// @brief Method IsNameCharXml4e, addr 0x435b14c, size 0x24, virtual false, abstract: false, final false
  inline bool IsNameCharXml4e(char16_t ch);

  /// @brief Method IsNameSingleChar, addr 0x435afb8, size 0x24, virtual false, abstract: false, final false
  inline bool IsNameSingleChar(char16_t ch);

  /// @brief Method IsOnlyCharData, addr 0x435b2b4, size 0xd8, virtual false, abstract: false, final false
  inline int32_t IsOnlyCharData(::StringW str);

  /// @brief Method IsOnlyDigits, addr 0x435b38c, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsOnlyDigits(::StringW str, int32_t startPos, int32_t len);

  /// @brief Method IsOnlyWhitespace, addr 0x435b214, size 0x18, virtual false, abstract: false, final false
  inline bool IsOnlyWhitespace(::StringW str);

  /// @brief Method IsOnlyWhitespaceWithPos, addr 0x435b22c, size 0x88, virtual false, abstract: false, final false
  inline int32_t IsOnlyWhitespaceWithPos(::StringW str);

  /// @brief Method IsPubidChar, addr 0x435b010, size 0x7c, virtual false, abstract: false, final false
  inline bool IsPubidChar(char16_t ch);

  /// @brief Method IsPublicId, addr 0x435b434, size 0x60, virtual false, abstract: false, final false
  inline int32_t IsPublicId(::StringW str);

  /// @brief Method IsStartNCNameCharXml4e, addr 0x435b128, size 0x24, virtual false, abstract: false, final false
  inline bool IsStartNCNameCharXml4e(char16_t ch);

  /// @brief Method IsStartNCNameSingleChar, addr 0x435a50c, size 0x34, virtual false, abstract: false, final false
  inline bool IsStartNCNameSingleChar(char16_t ch);

  /// @brief Method IsSurrogate, addr 0x435b1b8, size 0x10, virtual false, abstract: false, final false
  static inline bool IsSurrogate(int32_t ch);

  /// @brief Method IsTextChar, addr 0x435b08c, size 0x34, virtual false, abstract: false, final false
  inline bool IsTextChar(char16_t ch);

  /// @brief Method IsWhiteSpace, addr 0x435af84, size 0x34, virtual false, abstract: false, final false
  inline bool IsWhiteSpace(char16_t ch);

  /// @brief Method SetProperties, addr 0x435aeb8, size 0xc4, virtual false, abstract: false, final false
  static inline void SetProperties(::ArrayW<uint8_t, ::Array<uint8_t>*> chProps, ::StringW ranges, uint8_t value);

  /// @brief Method SplitSurrogateChar, addr 0x435b1e0, size 0x34, virtual false, abstract: false, final false
  static inline void SplitSurrogateChar(int32_t combinedChar, ::ByRef<char16_t> lowChar, ::ByRef<char16_t> highChar);

  /// @brief Method .ctor, addr 0x435af7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> charProperties);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_CharProperties();

  static inline ::System::Object* getStaticF_s_Lock();

  /// @brief Method get_Instance, addr 0x435a4a4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlCharType get_Instance();

  /// @brief Method get_StaticLock, addr 0x435abc4, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Object* get_StaticLock();

  static inline void setStaticF_s_CharProperties(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_s_Lock(::System::Object* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCharType();

  // Ctor Parameters [CppParam { name: "charProperties", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr XmlCharType(::ArrayW<uint8_t, ::Array<uint8_t>*> charProperties) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7340 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field charProperties, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> charProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCharType, charProperties) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCharType, 0x8>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCharType, "System.Xml", "XmlCharType");
