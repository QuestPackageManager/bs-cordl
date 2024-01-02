#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Xml::XmlCharType
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11544))
// CS Name: ::System.Xml::XmlCharType
struct CORDL_TYPE XmlCharType {
public:
  // Declarations
  /// @brief Field s_Lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Lock, put = setStaticF_s_Lock))::System::Object* s_Lock;

  /// @brief Field s_CharProperties, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CharProperties, put = setStaticF_s_CharProperties))::ArrayW<uint8_t, ::Array<uint8_t>*> s_CharProperties;

  static inline void setStaticF_s_Lock(::System::Object* value);

  static inline ::System::Object* getStaticF_s_Lock();

  static inline void setStaticF_s_CharProperties(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_CharProperties();

  /// @brief Method get_StaticLock, addr 0x289d6c0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Object* get_StaticLock();

  /// @brief Method InitInstance, addr 0x289d75c, size 0x260, virtual false, abstract: false, final false
  static inline void InitInstance();

  /// @brief Method SetProperties, addr 0x289d9bc, size 0xc4, virtual false, abstract: false, final false
  static inline void SetProperties(::ArrayW<uint8_t, ::Array<uint8_t>*> chProps, ::StringW ranges, uint8_t value);

  /// @brief Method .ctor, addr 0x289da80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> charProperties);

  /// @brief Method get_Instance, addr 0x289d360, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlCharType get_Instance();

  /// @brief Method IsWhiteSpace, addr 0x289da88, size 0x34, virtual false, abstract: false, final false
  inline bool IsWhiteSpace(char16_t ch);

  /// @brief Method IsNCNameSingleChar, addr 0x289d32c, size 0x34, virtual false, abstract: false, final false
  inline bool IsNCNameSingleChar(char16_t ch);

  /// @brief Method IsStartNCNameSingleChar, addr 0x289d3c8, size 0x34, virtual false, abstract: false, final false
  inline bool IsStartNCNameSingleChar(char16_t ch);

  /// @brief Method IsNameSingleChar, addr 0x289dabc, size 0x24, virtual false, abstract: false, final false
  inline bool IsNameSingleChar(char16_t ch);

  /// @brief Method IsCharData, addr 0x289dae0, size 0x34, virtual false, abstract: false, final false
  inline bool IsCharData(char16_t ch);

  /// @brief Method IsPubidChar, addr 0x289db14, size 0x84, virtual false, abstract: false, final false
  inline bool IsPubidChar(char16_t ch);

  /// @brief Method IsTextChar, addr 0x289db98, size 0x34, virtual false, abstract: false, final false
  inline bool IsTextChar(char16_t ch);

  /// @brief Method IsLetter, addr 0x289dbcc, size 0x34, virtual false, abstract: false, final false
  inline bool IsLetter(char16_t ch);

  /// @brief Method IsNCNameCharXml4e, addr 0x289dc00, size 0x34, virtual false, abstract: false, final false
  inline bool IsNCNameCharXml4e(char16_t ch);

  /// @brief Method IsStartNCNameCharXml4e, addr 0x289dc34, size 0x24, virtual false, abstract: false, final false
  inline bool IsStartNCNameCharXml4e(char16_t ch);

  /// @brief Method IsNameCharXml4e, addr 0x289dc58, size 0x24, virtual false, abstract: false, final false
  inline bool IsNameCharXml4e(char16_t ch);

  /// @brief Method IsDigit, addr 0x289dc7c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t ch);

  /// @brief Method IsHighSurrogate, addr 0x289dca4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(int32_t ch);

  /// @brief Method IsLowSurrogate, addr 0x289dcb4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsLowSurrogate(int32_t ch);

  /// @brief Method IsSurrogate, addr 0x289dcc4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsSurrogate(int32_t ch);

  /// @brief Method CombineSurrogateChar, addr 0x289dcd4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t CombineSurrogateChar(int32_t lowChar, int32_t highChar);

  /// @brief Method SplitSurrogateChar, addr 0x289dcec, size 0x38, virtual false, abstract: false, final false
  static inline void SplitSurrogateChar(int32_t combinedChar, ByRef<char16_t> lowChar, ByRef<char16_t> highChar);

  /// @brief Method IsOnlyWhitespace, addr 0x289dd24, size 0x18, virtual false, abstract: false, final false
  inline bool IsOnlyWhitespace(::StringW str);

  /// @brief Method IsOnlyWhitespaceWithPos, addr 0x289dd3c, size 0x88, virtual false, abstract: false, final false
  inline int32_t IsOnlyWhitespaceWithPos(::StringW str);

  /// @brief Method IsOnlyCharData, addr 0x289ddc4, size 0xd8, virtual false, abstract: false, final false
  inline int32_t IsOnlyCharData(::StringW str);

  /// @brief Method IsOnlyDigits, addr 0x289de9c, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsOnlyDigits(::StringW str, int32_t startPos, int32_t len);

  /// @brief Method IsPublicId, addr 0x289df08, size 0x60, virtual false, abstract: false, final false
  inline int32_t IsPublicId(::StringW str);

  /// @brief Method InRange, addr 0x289dc90, size 0x14, virtual false, abstract: false, final false
  static inline bool InRange(int32_t value, int32_t start, int32_t end);

  // Ctor Parameters [CppParam { name: "charProperties", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr XmlCharType(::ArrayW<uint8_t, ::Array<uint8_t>*> charProperties) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCharType();

  /// @brief Field charProperties, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> charProperties;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCharType, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlCharType, charProperties) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCharType, "System.Xml", "XmlCharType");
