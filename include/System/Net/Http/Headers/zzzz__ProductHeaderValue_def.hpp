#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProductHeaderValue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ProductHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::ProductHeaderValue);
// Type: System.Net.Http.Headers::ProductHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14701))
// CS Name: ::System.Net.Http.Headers::ProductHeaderValue*
class CORDL_TYPE ProductHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Name_k__BackingField, put = __set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Version_k__BackingField, put = __set__Version_k__BackingField))::StringW _Version_k__BackingField;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_Version, put = set_Version))::StringW Version;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::StringW& __get__Name_k__BackingField();

  constexpr ::StringW const& __get__Name_k__BackingField() const;

  constexpr void __set__Name_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Version_k__BackingField();

  constexpr ::StringW const& __get__Version_k__BackingField() const;

  constexpr void __set__Version_k__BackingField(::StringW value);

  static inline ::System::Net::Http::Headers::ProductHeaderValue* New_ctor();

  /// @brief Method .ctor addr 0x283f198 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Name addr 0x283f1a0 size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method set_Name addr 0x283f1a8 size 0x8 virtual false final false
  inline void set_Name(::StringW value);

  /// @brief Method get_Version addr 0x283f1b0 size 0x8 virtual false final false
  inline ::StringW get_Version();

  /// @brief Method set_Version addr 0x283f1b8 size 0x8 virtual false final false
  inline void set_Version(::StringW value);

  /// @brief Method System.ICloneable.Clone addr 0x283f1c0 size 0x8 virtual true final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals addr 0x283f1c8 size 0xb8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x283f280 size 0x64 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse addr 0x283f2e4 size 0xb0 virtual false final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductHeaderValue*>*> result);

  /// @brief Method TryParseElement addr 0x283f394 size 0x16c virtual false final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::ProductHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method ToString addr 0x283f500 size 0x5c virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "ProductHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProductHeaderValue(ProductHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProductHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProductHeaderValue(ProductHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProductHeaderValue();

public:
  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Version_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::ProductHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::ProductHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ProductHeaderValue*, "System.Net.Http.Headers", "ProductHeaderValue");
