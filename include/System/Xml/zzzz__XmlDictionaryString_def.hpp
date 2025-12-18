#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionaryString)
namespace System::Xml {
class IXmlDictionary;
}
namespace System::Xml {
class XmlDictionaryString_EmptyStringDictionary;
}
// Forward declare root types
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlDictionaryString_EmptyStringDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDictionaryString);
MARK_REF_PTR_T(::System::Xml::XmlDictionaryString_EmptyStringDictionary);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDictionaryString/EmptyStringDictionary
class CORDL_TYPE XmlDictionaryString_EmptyStringDictionary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EmptyString)) ::System::Xml::XmlDictionaryString* EmptyString;

  /// @brief Field empty, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_empty, put = __cordl_internal_set_empty)) ::System::Xml::XmlDictionaryString* empty;

  /// @brief Convert operator to "::System::Xml::IXmlDictionary"
  constexpr operator ::System::Xml::IXmlDictionary*() noexcept;

  static inline ::System::Xml::XmlDictionaryString_EmptyStringDictionary* New_ctor();

  /// @brief Method TryLookup, addr 0x5f6fa8c, size 0x20, virtual true, abstract: false, final true
  inline bool TryLookup(int32_t key, ::ByRef<::System::Xml::XmlDictionaryString*> result);

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_empty() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_empty();

  constexpr void __cordl_internal_set_empty(::System::Xml::XmlDictionaryString* value);

  /// @brief Method .ctor, addr 0x5f6fa10, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EmptyString, addr 0x5f6fa84, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_EmptyString();

  /// @brief Convert to "::System::Xml::IXmlDictionary"
  constexpr ::System::Xml::IXmlDictionary* i___System__Xml__IXmlDictionary() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionaryString_EmptyStringDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryString_EmptyStringDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDictionaryString_EmptyStringDictionary(XmlDictionaryString_EmptyStringDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryString_EmptyStringDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDictionaryString_EmptyStringDictionary(XmlDictionaryString_EmptyStringDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16954 };

  /// @brief Field empty, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___empty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDictionaryString_EmptyStringDictionary, ___empty) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDictionaryString_EmptyStringDictionary, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDictionaryString
class CORDL_TYPE XmlDictionaryString : public ::System::Object {
public:
  // Declarations
  using EmptyStringDictionary = ::System::Xml::XmlDictionaryString_EmptyStringDictionary;

  __declspec(property(get = get_Dictionary)) ::System::Xml::IXmlDictionary* Dictionary;

  __declspec(property(get = get_Key)) int32_t Key;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Field buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dictionary, put = __cordl_internal_set_dictionary)) ::System::Xml::IXmlDictionary* dictionary;

  /// @brief Field emptyStringDictionary, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_emptyStringDictionary, put = setStaticF_emptyStringDictionary)) ::System::Xml::XmlDictionaryString_EmptyStringDictionary* emptyStringDictionary;

  /// @brief Field key, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) int32_t key;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  /// @brief Method GetString, addr 0x5f6bd88, size 0xc, virtual false, abstract: false, final false
  static inline ::StringW GetString(::System::Xml::XmlDictionaryString* s);

  static inline ::System::Xml::XmlDictionaryString* New_ctor(::System::Xml::IXmlDictionary* dictionary, ::StringW value, int32_t key);

  /// @brief Method ToString, addr 0x5f6f994, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToUTF8, addr 0x5f6f958, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToUTF8();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::System::Xml::IXmlDictionary* const& __cordl_internal_get_dictionary() const;

  constexpr ::System::Xml::IXmlDictionary*& __cordl_internal_get_dictionary();

  constexpr int32_t const& __cordl_internal_get_key() const;

  constexpr int32_t& __cordl_internal_get_key();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_dictionary(::System::Xml::IXmlDictionary* value);

  constexpr void __cordl_internal_set_key(int32_t value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x5f6b638, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::IXmlDictionary* dictionary, ::StringW value, int32_t key);

  static inline ::System::Xml::XmlDictionaryString_EmptyStringDictionary* getStaticF_emptyStringDictionary();

  /// @brief Method get_Dictionary, addr 0x5f6f940, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::IXmlDictionary* get_Dictionary();

  /// @brief Method get_Empty, addr 0x5f6f8d8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryString* get_Empty();

  /// @brief Method get_Key, addr 0x5f6f948, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Key();

  /// @brief Method get_Value, addr 0x5f6f950, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  static inline void setStaticF_emptyStringDictionary(::System::Xml::XmlDictionaryString_EmptyStringDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionaryString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDictionaryString(XmlDictionaryString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDictionaryString(XmlDictionaryString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16955 };

  /// @brief Field dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::IXmlDictionary* ___dictionary;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field key, offset: 0x20, size: 0x4, def value: None
  int32_t ___key;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDictionaryString, ___dictionary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryString, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryString, ___key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryString, ___buffer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDictionaryString, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDictionaryString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDictionaryString*, "System.Xml", "XmlDictionaryString");
NEED_NO_BOX(::System::Xml::XmlDictionaryString_EmptyStringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDictionaryString_EmptyStringDictionary*, "System.Xml", "XmlDictionaryString/EmptyStringDictionary");
