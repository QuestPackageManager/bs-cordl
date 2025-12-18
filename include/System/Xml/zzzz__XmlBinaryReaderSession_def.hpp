#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryReaderSession.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBinaryReaderSession)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml {
class IXmlDictionary;
}
namespace System::Xml {
class XmlDictionaryString;
}
// Forward declare root types
namespace System::Xml {
class XmlBinaryReaderSession;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlBinaryReaderSession);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBinaryReaderSession
class CORDL_TYPE XmlBinaryReaderSession : public ::System::Object {
public:
  // Declarations
  /// @brief Field stringDict, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stringDict,
                      put = __cordl_internal_set_stringDict)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Xml::XmlDictionaryString*>* stringDict;

  /// @brief Field strings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_strings, put = __cordl_internal_set_strings)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> strings;

  /// @brief Convert operator to "::System::Xml::IXmlDictionary"
  constexpr operator ::System::Xml::IXmlDictionary*() noexcept;

  /// @brief Method TryLookup, addr 0x5f612ec, size 0xb8, virtual true, abstract: false, final true
  inline bool TryLookup(int32_t key, ::ByRef<::System::Xml::XmlDictionaryString*> result);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Xml::XmlDictionaryString*>* const& __cordl_internal_get_stringDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Xml::XmlDictionaryString*>*& __cordl_internal_get_stringDict();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& __cordl_internal_get_strings() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& __cordl_internal_get_strings();

  constexpr void __cordl_internal_set_stringDict(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Xml::XmlDictionaryString*>* value);

  constexpr void __cordl_internal_set_strings(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  /// @brief Convert to "::System::Xml::IXmlDictionary"
  constexpr ::System::Xml::IXmlDictionary* i___System__Xml__IXmlDictionary() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryReaderSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryReaderSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBinaryReaderSession(XmlBinaryReaderSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryReaderSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBinaryReaderSession(XmlBinaryReaderSession const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16939 };

  /// @brief Field strings, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ___strings;

  /// @brief Field stringDict, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Xml::XmlDictionaryString*>* ___stringDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryReaderSession, ___strings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryReaderSession, ___stringDict) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBinaryReaderSession, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlBinaryReaderSession);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBinaryReaderSession*, "System.Xml", "XmlBinaryReaderSession");
