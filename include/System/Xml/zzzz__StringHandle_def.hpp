#pragma once
// IWYU pragma private; include "System/Xml/StringHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringHandle)
namespace System::Xml {
class PrefixHandle;
}
namespace System::Xml {
struct StringHandle_StringHandleType;
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
struct StringHandle_StringHandleType;
}
namespace System::Xml {
class StringHandle;
}
// Write type traits
MARK_VAL_T(::System::Xml::StringHandle_StringHandleType);
MARK_REF_PTR_T(::System::Xml::StringHandle);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.StringHandle/StringHandleType
struct CORDL_TYPE StringHandle_StringHandleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StringHandle_StringHandleType_Unwrapped
  enum struct __StringHandle_StringHandleType_Unwrapped : int32_t {
    __E_Dictionary = static_cast<int32_t>(0x0),
    __E_UTF8 = static_cast<int32_t>(0x1),
    __E_EscapedUTF8 = static_cast<int32_t>(0x2),
    __E_ConstString = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StringHandle_StringHandleType_Unwrapped() const noexcept {
    return static_cast<__StringHandle_StringHandleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StringHandle_StringHandleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StringHandle_StringHandleType(int32_t value__) noexcept;

  /// @brief Field ConstString value: I32(3)
  static ::System::Xml::StringHandle_StringHandleType const ConstString;

  /// @brief Field Dictionary value: I32(0)
  static ::System::Xml::StringHandle_StringHandleType const Dictionary;

  /// @brief Field EscapedUTF8 value: I32(2)
  static ::System::Xml::StringHandle_StringHandleType const EscapedUTF8;

  /// @brief Field UTF8 value: I32(1)
  static ::System::Xml::StringHandle_StringHandleType const UTF8;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16904 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::StringHandle_StringHandleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::StringHandle_StringHandleType, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.StringHandle::StringHandleType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.StringHandle
class CORDL_TYPE StringHandle : public ::System::Object {
public:
  // Declarations
  using StringHandleType = ::System::Xml::StringHandle_StringHandleType;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_IsXmlns)) bool IsXmlns;

  /// @brief Field bufferReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bufferReader, put = __cordl_internal_set_bufferReader)) ::System::Xml::XmlBufferReader* bufferReader;

  /// @brief Field constStrings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_constStrings, put = setStaticF_constStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> constStrings;

  /// @brief Field key, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) int32_t key;

  /// @brief Field length, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) int32_t length;

  /// @brief Field offset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) int32_t offset;

  /// @brief Field type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Xml::StringHandle_StringHandleType type;

  /// @brief Method CompareTo, addr 0x5f4e86c, size 0x84, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Xml::StringHandle* that);

  /// @brief Method Equals, addr 0x5f4e8f0, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals2, addr 0x5f4e558, size 0xd8, virtual false, abstract: false, final false
  inline bool Equals2(int32_t key2, ::System::Xml::XmlBufferReader* bufferReader2);

  /// @brief Method Equals2, addr 0x5f4e6d8, size 0xdc, virtual false, abstract: false, final false
  inline bool Equals2(int32_t offset2, int32_t length2, ::System::Xml::XmlBufferReader* bufferReader2);

  /// @brief Method Equals2, addr 0x5f4df54, size 0x70, virtual false, abstract: false, final false
  inline bool Equals2(::StringW s2);

  /// @brief Method Equals2, addr 0x5f4e7b4, size 0x68, virtual false, abstract: false, final false
  inline bool Equals2(::System::Xml::StringHandle* s2);

  /// @brief Method Equals2, addr 0x5f4e630, size 0xa8, virtual false, abstract: false, final false
  inline bool Equals2(::System::Xml::XmlDictionaryString* xmlString2);

  /// @brief Method GetHashCode, addr 0x5f4e9a0, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetString, addr 0x5f4e320, size 0x164, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetString(::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  /// @brief Method GetString, addr 0x5f4e22c, size 0xf4, virtual false, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method GetString, addr 0x5f4e100, size 0x12c, virtual false, abstract: false, final false
  inline ::StringW GetString(::System::Xml::XmlNameTable* nameTable);

  static inline ::System::Xml::StringHandle* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method SetValue, addr 0x5f4ded8, size 0x10, virtual false, abstract: false, final false
  inline void SetValue(int32_t offset, int32_t length);

  /// @brief Method SetValue, addr 0x5f4dee8, size 0x24, virtual false, abstract: false, final false
  inline void SetValue(int32_t offset, int32_t length, bool escaped);

  /// @brief Method SetValue, addr 0x5f4df0c, size 0x18, virtual false, abstract: false, final false
  inline void SetValue(::System::Xml::StringHandle* value);

  /// @brief Method ToPrefixHandle, addr 0x5f4e0e4, size 0x1c, virtual false, abstract: false, final false
  inline void ToPrefixHandle(::System::Xml::PrefixHandle* prefix);

  /// @brief Method ToString, addr 0x5f4e554, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetDictionaryString, addr 0x5f4e484, size 0xd0, virtual false, abstract: false, final false
  inline bool TryGetDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> value);

  constexpr ::System::Xml::XmlBufferReader* const& __cordl_internal_get_bufferReader() const;

  constexpr ::System::Xml::XmlBufferReader*& __cordl_internal_get_bufferReader();

  constexpr int32_t const& __cordl_internal_get_key() const;

  constexpr int32_t& __cordl_internal_get_key();

  constexpr int32_t const& __cordl_internal_get_length() const;

  constexpr int32_t& __cordl_internal_get_length();

  constexpr int32_t const& __cordl_internal_get_offset() const;

  constexpr int32_t& __cordl_internal_get_offset();

  constexpr ::System::Xml::StringHandle_StringHandleType const& __cordl_internal_get_type() const;

  constexpr ::System::Xml::StringHandle_StringHandleType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value);

  constexpr void __cordl_internal_set_key(int32_t value);

  constexpr void __cordl_internal_set_length(int32_t value);

  constexpr void __cordl_internal_set_offset(int32_t value);

  constexpr void __cordl_internal_set_type(::System::Xml::StringHandle_StringHandleType value);

  /// @brief Method .ctor, addr 0x5f4dec4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_constStrings();

  /// @brief Method get_IsEmpty, addr 0x5f4df24, size 0x30, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_IsXmlns, addr 0x5f4dfc4, size 0x120, virtual false, abstract: false, final false
  inline bool get_IsXmlns();

  /// @brief Method op_Equality, addr 0x5f4e82c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::StringHandle* s1, ::StringW s2);

  /// @brief Method op_Equality, addr 0x5f4e85c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::StringHandle* s1, ::System::Xml::StringHandle* s2);

  /// @brief Method op_Equality, addr 0x5f4e81c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::StringHandle* s1, ::System::Xml::XmlDictionaryString* xmlString2);

  /// @brief Method op_Inequality, addr 0x5f4e83c, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Xml::StringHandle* s1, ::StringW s2);

  static inline void setStaticF_constStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringHandle(StringHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringHandle(StringHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16905 };

  /// @brief Field bufferReader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlBufferReader* ___bufferReader;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::StringHandle_StringHandleType ___type;

  /// @brief Field key, offset: 0x1c, size: 0x4, def value: None
  int32_t ___key;

  /// @brief Field offset, offset: 0x20, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field length, offset: 0x24, size: 0x4, def value: None
  int32_t ___length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::StringHandle, ___bufferReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::StringHandle, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::StringHandle, ___key) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::StringHandle, ___offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::StringHandle, ___length) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::StringHandle, 0x28>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::StringHandle_StringHandleType, "System.Xml", "StringHandle/StringHandleType");
NEED_NO_BOX(::System::Xml::StringHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::StringHandle*, "System.Xml", "StringHandle");
