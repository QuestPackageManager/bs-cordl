#pragma once
// IWYU pragma private; include "System/Xml/PrefixHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__PrefixHandleType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrefixHandle)
namespace System::Xml {
struct PrefixHandleType;
}
namespace System::Xml {
class XmlBufferReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class PrefixHandle;
}
// Write type traits
MARK_REF_T(::System::Xml::PrefixHandle*);
DEFINE_IL2CPP_CLASS(::System::Xml::PrefixHandle*, "System.Xml", "PrefixHandle");
// Dependencies System.Object, System.Xml.PrefixHandleType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.PrefixHandle
class CORDL_TYPE PrefixHandle : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_IsXml)) bool IsXml;

  __declspec(property(get = get_IsXmlns)) bool IsXmlns;

  /// @brief Field bufferReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bufferReader, put = __cordl_internal_set_bufferReader)) ::System::Xml::XmlBufferReader* bufferReader;

  /// @brief Field length, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) int32_t length;

  /// @brief Field offset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) int32_t offset;

  /// @brief Field prefixBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_prefixBuffer, put = setStaticF_prefixBuffer)) ::ArrayW<uint8_t> prefixBuffer;

  /// @brief Field prefixStrings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_prefixStrings, put = setStaticF_prefixStrings)) ::ArrayW<::StringW> prefixStrings;

  /// @brief Field type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Xml::PrefixHandleType type;

  /// @brief Method CompareTo, addr 0x60fca6c, size 0x40, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Xml::PrefixHandle* that);

  /// @brief Method Equals, addr 0x60fcc24, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals2, addr 0x60fcb34, size 0xa0, virtual false, abstract: false, final false
  inline bool Equals2(::StringW prefix2);

  /// @brief Method Equals2, addr 0x60fcaac, size 0x88, virtual false, abstract: false, final false
  inline bool Equals2(::System::Xml::PrefixHandle* prefix2);

  /// @brief Method Equals2, addr 0x60fcbd4, size 0x14, virtual false, abstract: false, final false
  inline bool Equals2(::System::Xml::XmlDictionaryString* prefix2);

  /// @brief Method GetAlphaPrefix, addr 0x60fc5f8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Xml::PrefixHandleType GetAlphaPrefix(int32_t index);

  /// @brief Method GetHashCode, addr 0x60fccd8, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetString, addr 0x60fc9c0, size 0xac, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> GetString(::by_ref<int32_t> offset, ::by_ref<int32_t> length);

  /// @brief Method GetString, addr 0x60fc814, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetString(::System::Xml::PrefixHandleType type, ::by_ref<int32_t> offset, ::by_ref<int32_t> length);

  /// @brief Method GetString, addr 0x60fc93c, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method GetString, addr 0x60fc8a4, size 0x98, virtual false, abstract: false, final false
  inline ::StringW GetString(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method GetString, addr 0x60fc794, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW GetString(::System::Xml::PrefixHandleType type);

  static inline ::System::Xml::PrefixHandle* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method SetValue, addr 0x60fc538, size 0xc0, virtual false, abstract: false, final false
  inline void SetValue(int32_t offset, int32_t length);

  /// @brief Method SetValue, addr 0x60fc518, size 0x20, virtual false, abstract: false, final false
  inline void SetValue(::System::Xml::PrefixHandle* prefix);

  /// @brief Method SetValue, addr 0x60fc510, size 0x8, virtual false, abstract: false, final false
  inline void SetValue(::System::Xml::PrefixHandleType type);

  /// @brief Method ToString, addr 0x60fccd4, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetShortPrefix, addr 0x60fc780, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetShortPrefix(::by_ref<::System::Xml::PrefixHandleType> type);

  constexpr ::System::Xml::XmlBufferReader* const& __cordl_internal_get_bufferReader() const;

  constexpr ::System::Xml::XmlBufferReader*& __cordl_internal_get_bufferReader();

  constexpr int32_t const& __cordl_internal_get_length() const;

  constexpr int32_t& __cordl_internal_get_length();

  constexpr int32_t const& __cordl_internal_get_offset() const;

  constexpr int32_t& __cordl_internal_get_offset();

  constexpr ::System::Xml::PrefixHandleType const& __cordl_internal_get_type() const;

  constexpr ::System::Xml::PrefixHandleType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value);

  constexpr void __cordl_internal_set_length(int32_t value);

  constexpr void __cordl_internal_set_offset(int32_t value);

  constexpr void __cordl_internal_set_type(::System::Xml::PrefixHandleType value);

  /// @brief Method .ctor, addr 0x60fc508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

  static inline ::ArrayW<uint8_t> getStaticF_prefixBuffer();

  static inline ::ArrayW<::StringW> getStaticF_prefixStrings();

  /// @brief Method get_IsEmpty, addr 0x60fc600, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_IsXml, addr 0x60fc6e4, size 0x9c, virtual false, abstract: false, final false
  inline bool get_IsXml();

  /// @brief Method get_IsXmlns, addr 0x60fc610, size 0xd4, virtual false, abstract: false, final false
  inline bool get_IsXmlns();

  /// @brief Method op_Equality, addr 0x60fcbe8, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::PrefixHandle* prefix1, ::StringW prefix2);

  /// @brief Method op_Equality, addr 0x60fcc14, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::PrefixHandle* prefix1, ::System::Xml::PrefixHandle* prefix2);

  /// @brief Method op_Equality, addr 0x60fcbf8, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::PrefixHandle* prefix1, ::System::Xml::XmlDictionaryString* prefix2);

  static inline void setStaticF_prefixBuffer(::ArrayW<uint8_t> value);

  static inline void setStaticF_prefixStrings(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefixHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefixHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefixHandle(PrefixHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefixHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefixHandle(PrefixHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16904 };

  /// @brief Field bufferReader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlBufferReader* ___bufferReader;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::PrefixHandleType ___type;

  /// @brief Field offset, offset: 0x1c, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field length, offset: 0x20, size: 0x4, def value: None
  int32_t ___length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::PrefixHandle, ___bufferReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::PrefixHandle, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::PrefixHandle, ___offset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::PrefixHandle, ___length) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::PrefixHandle) == 0x28, "Size mismatch!");

} // namespace System::Xml
