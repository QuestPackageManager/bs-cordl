#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JConstructor)
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JConstructor;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JConstructor);
// Type: Newtonsoft.Json.Linq::JConstructor
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11988))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11986))
// CS Name: ::Newtonsoft.Json.Linq::JConstructor*
class CORDL_TYPE JConstructor : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  /// @brief Field _name, offset 0x50, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _values, offset 0x58, size 0x8
  __declspec(property(get = __get__values, put = __set__values))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* _values;

  __declspec(property(get = get_ChildrenTokens))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& __get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get__values() const;

  constexpr void __set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method get_ChildrenTokens addr 0x26917a8 size 0x8 virtual true final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method IndexOfItem addr 0x26917b0 size 0x58 virtual true final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method MergeItem addr 0x2691808 size 0xb0 virtual true final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method get_Name addr 0x2692690 size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method set_Name addr 0x2692698 size 0x8 virtual false final false
  inline void set_Name(::StringW value);

  /// @brief Method get_Type addr 0x26926a0 size 0x8 virtual true final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor();

  /// @brief Method .ctor addr 0x26926a8 size 0x78 virtual false final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::Newtonsoft::Json::Linq::JConstructor* other);

  /// @brief Method .ctor addr 0x2692778 size 0x98 virtual false final false
  inline void _ctor(::Newtonsoft::Json::Linq::JConstructor* other);

  static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor addr 0x2692b28 size 0x34 virtual false final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::StringW name, ::System::Object* content);

  /// @brief Method .ctor addr 0x2692b5c size 0x34 virtual false final false
  inline void _ctor(::StringW name, ::System::Object* content);

  static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x2692b90 size 0x130 virtual false final false
  inline void _ctor(::StringW name);

  /// @brief Method DeepEquals addr 0x2692cc0 size 0xac virtual true final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method CloneToken addr 0x2693024 size 0x60 virtual true final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method WriteTo addr 0x2693084 size 0x2ec virtual true final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method get_Item addr 0x2693370 size 0x12c virtual true final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key);

  /// @brief Method set_Item addr 0x269349c size 0x134 virtual true final false
  inline void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method GetDeepHashCode addr 0x26935d0 size 0x40 virtual true final false
  inline int32_t GetDeepHashCode();

  /// @brief Method Load addr 0x2693914 size 0x8 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load addr 0x269391c size 0x1f8 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  // Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JConstructor(JConstructor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JConstructor(JConstructor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JConstructor();

public:
  /// @brief Field _name, offset: 0x50, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _values, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JConstructor, 0x60>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JConstructor);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JConstructor*, "Newtonsoft.Json.Linq", "JConstructor");
