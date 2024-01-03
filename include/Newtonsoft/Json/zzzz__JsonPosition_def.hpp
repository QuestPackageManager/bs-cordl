#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonPosition)
namespace System::Text {
class StringBuilder;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
// Forward declare root types
namespace Newtonsoft::Json {
struct JsonPosition;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::JsonPosition);
// Type: Newtonsoft.Json::JsonPosition
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11806))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11807))
// CS Name: ::Newtonsoft.Json::JsonPosition
struct CORDL_TYPE JsonPosition {
public:
  // Declarations
  /// @brief Field SpecialCharacters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpecialCharacters, put = setStaticF_SpecialCharacters))::ArrayW<char16_t, ::Array<char16_t>*> SpecialCharacters;

  static inline void setStaticF_SpecialCharacters(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_SpecialCharacters();

  /// @brief Method .ctor, addr 0x263e9ec, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonContainerType type);

  /// @brief Method CalculateLength, addr 0x263ea78, size 0x98, virtual false, abstract: false, final false
  inline int32_t CalculateLength();

  /// @brief Method WriteTo, addr 0x263eb10, size 0x168, virtual false, abstract: false, final false
  inline void WriteTo(::System::Text::StringBuilder* sb);

  /// @brief Method TypeHasIndex, addr 0x263ea68, size 0x10, virtual false, abstract: false, final false
  static inline bool TypeHasIndex(::Newtonsoft::Json::JsonContainerType type);

  /// @brief Method BuildPath, addr 0x263ec78, size 0x29c, virtual false, abstract: false, final false
  static inline ::StringW BuildPath(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* positions, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> currentPosition);

  /// @brief Method FormatMessage, addr 0x263e678, size 0x32c, virtual false, abstract: false, final false
  static inline ::StringW FormatMessage(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message);

  // Ctor Parameters [CppParam { name: "Type", ty: "::Newtonsoft::Json::JsonContainerType", modifiers: "", def_value: None }, CppParam { name: "Position", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "PropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "HasIndex", ty: "bool", modifiers: "", def_value: None }]
  constexpr JsonPosition(::Newtonsoft::Json::JsonContainerType Type, int32_t Position, ::StringW PropertyName, bool HasIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPosition();

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::Newtonsoft::Json::JsonContainerType Type;

  /// @brief Field Position, offset: 0x4, size: 0x4, def value: None
  int32_t Position;

  /// @brief Field PropertyName, offset: 0x8, size: 0x8, def value: None
  ::StringW PropertyName;

  /// @brief Field HasIndex, offset: 0x10, size: 0x1, def value: None
  bool HasIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonPosition, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPosition, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPosition, Position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPosition, PropertyName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPosition, HasIndex) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonPosition, "Newtonsoft.Json", "JsonPosition");
