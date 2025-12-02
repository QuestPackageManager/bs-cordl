#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionary)
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
class XmlDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDictionary);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDictionary
class CORDL_TYPE XmlDictionary : public ::System::Object {
public:
  // Declarations
  /// @brief Field lookup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lookup, put = __cordl_internal_set_lookup)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* lookup;

  /// @brief Field nextId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nextId, put = __cordl_internal_set_nextId)) int32_t nextId;

  /// @brief Field strings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_strings, put = __cordl_internal_set_strings)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> strings;

  /// @brief Convert operator to "::System::Xml::IXmlDictionary"
  constexpr operator ::System::Xml::IXmlDictionary*() noexcept;

  /// @brief Method Add, addr 0x5f038dc, size 0x1d0, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* Add(::StringW value);

  static inline ::System::Xml::XmlDictionary* New_ctor();

  static inline ::System::Xml::XmlDictionary* New_ctor(int32_t capacity);

  /// @brief Method TryLookup, addr 0x5f03c38, size 0x54, virtual true, abstract: false, final false
  inline bool TryLookup(int32_t key, ::ByRef<::System::Xml::XmlDictionaryString*> result);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* const& __cordl_internal_get_lookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>*& __cordl_internal_get_lookup();

  constexpr int32_t const& __cordl_internal_get_nextId() const;

  constexpr int32_t& __cordl_internal_get_nextId();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& __cordl_internal_get_strings() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& __cordl_internal_get_strings();

  constexpr void __cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* value);

  constexpr void __cordl_internal_set_nextId(int32_t value);

  constexpr void __cordl_internal_set_strings(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  /// @brief Method .ctor, addr 0x5f03780, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f0381c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Convert to "::System::Xml::IXmlDictionary"
  constexpr ::System::Xml::IXmlDictionary* i___System__Xml__IXmlDictionary() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDictionary(XmlDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDictionary(XmlDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16934 };

  /// @brief Field lookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* ___lookup;

  /// @brief Field strings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ___strings;

  /// @brief Field nextId, offset: 0x20, size: 0x4, def value: None
  int32_t ___nextId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDictionary, ___lookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionary, ___strings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionary, ___nextId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDictionary, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDictionary*, "System.Xml", "XmlDictionary");
