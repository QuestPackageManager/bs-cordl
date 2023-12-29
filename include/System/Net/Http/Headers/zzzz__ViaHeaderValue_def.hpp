#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ViaHeaderValue)
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ViaHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::ViaHeaderValue);
// Type: System.Net.Http.Headers::ViaHeaderValue
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14927))
// CS Name: ::System.Net.Http.Headers::ViaHeaderValue*
class CORDL_TYPE ViaHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Comment>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Comment_k__BackingField, put = __set__Comment_k__BackingField))::StringW _Comment_k__BackingField;

  /// @brief Field <ProtocolName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__ProtocolName_k__BackingField, put = __set__ProtocolName_k__BackingField))::StringW _ProtocolName_k__BackingField;

  /// @brief Field <ProtocolVersion>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__ProtocolVersion_k__BackingField, put = __set__ProtocolVersion_k__BackingField))::StringW _ProtocolVersion_k__BackingField;

  /// @brief Field <ReceivedBy>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__ReceivedBy_k__BackingField, put = __set__ReceivedBy_k__BackingField))::StringW _ReceivedBy_k__BackingField;

  __declspec(property(get = get_Comment, put = set_Comment))::StringW Comment;

  __declspec(property(get = get_ProtocolName, put = set_ProtocolName))::StringW ProtocolName;

  __declspec(property(get = get_ProtocolVersion, put = set_ProtocolVersion))::StringW ProtocolVersion;

  __declspec(property(get = get_ReceivedBy, put = set_ReceivedBy))::StringW ReceivedBy;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::StringW& __get__Comment_k__BackingField();

  constexpr ::StringW const& __get__Comment_k__BackingField() const;

  constexpr void __set__Comment_k__BackingField(::StringW value);

  constexpr ::StringW& __get__ProtocolName_k__BackingField();

  constexpr ::StringW const& __get__ProtocolName_k__BackingField() const;

  constexpr void __set__ProtocolName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__ProtocolVersion_k__BackingField();

  constexpr ::StringW const& __get__ProtocolVersion_k__BackingField() const;

  constexpr void __set__ProtocolVersion_k__BackingField(::StringW value);

  constexpr ::StringW& __get__ReceivedBy_k__BackingField();

  constexpr ::StringW const& __get__ReceivedBy_k__BackingField() const;

  constexpr void __set__ReceivedBy_k__BackingField(::StringW value);

  static inline ::System::Net::Http::Headers::ViaHeaderValue* New_ctor();

  /// @brief Method .ctor addr 0x26c75d0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Comment addr 0x26c75d8 size 0x8 virtual false final false
  inline ::StringW get_Comment();

  /// @brief Method set_Comment addr 0x26c75e0 size 0x8 virtual false final false
  inline void set_Comment(::StringW value);

  /// @brief Method get_ProtocolName addr 0x26c75e8 size 0x8 virtual false final false
  inline ::StringW get_ProtocolName();

  /// @brief Method set_ProtocolName addr 0x26c75f0 size 0x8 virtual false final false
  inline void set_ProtocolName(::StringW value);

  /// @brief Method get_ProtocolVersion addr 0x26c75f8 size 0x8 virtual false final false
  inline ::StringW get_ProtocolVersion();

  /// @brief Method set_ProtocolVersion addr 0x26c7600 size 0x8 virtual false final false
  inline void set_ProtocolVersion(::StringW value);

  /// @brief Method get_ReceivedBy addr 0x26c7608 size 0x8 virtual false final false
  inline ::StringW get_ReceivedBy();

  /// @brief Method set_ReceivedBy addr 0x26c7610 size 0x8 virtual false final false
  inline void set_ReceivedBy(::StringW value);

  /// @brief Method System.ICloneable.Clone addr 0x26c7618 size 0x8 virtual true final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals addr 0x26c7620 size 0xe8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x26c7708 size 0xcc virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse addr 0x26c77d4 size 0xb0 virtual false final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ViaHeaderValue*>*> result);

  /// @brief Method TryParseElement addr 0x26c7884 size 0x254 virtual false final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::ViaHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method ToString addr 0x26c7ad8 size 0x1b8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "ViaHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViaHeaderValue(ViaHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViaHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViaHeaderValue(ViaHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViaHeaderValue();

public:
  /// @brief Field <Comment>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Comment_k__BackingField;

  /// @brief Field <ProtocolName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ProtocolName_k__BackingField;

  /// @brief Field <ProtocolVersion>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ProtocolVersion_k__BackingField;

  /// @brief Field <ReceivedBy>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ReceivedBy_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::ViaHeaderValue, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ViaHeaderValue, ____Comment_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ViaHeaderValue, ____ProtocolName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ViaHeaderValue, ____ProtocolVersion_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ViaHeaderValue, ____ReceivedBy_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::ViaHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ViaHeaderValue*, "System.Net.Http.Headers", "ViaHeaderValue");
