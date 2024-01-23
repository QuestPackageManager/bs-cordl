#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JArray)
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JArray;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JArray);
// Type: Newtonsoft.Json.Linq::JArray
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11988))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11993))
// CS Name: ::Newtonsoft.Json.Linq::JArray*
class CORDL_TYPE JArray : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* _values;

  __declspec(property(get = get_ChildrenTokens))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get__values() const;

  constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method get_ChildrenTokens, addr 0x269af08, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method get_Type, addr 0x269af10, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor();

  /// @brief Method .ctor, addr 0x2696cb0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::Newtonsoft::Json::Linq::JArray* other);

  /// @brief Method .ctor, addr 0x269af18, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JArray* other);

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor, addr 0x269afa0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::System::Object* content);

  /// @brief Method .ctor, addr 0x269afa4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* content);

  /// @brief Method DeepEquals, addr 0x269b040, size 0x8c, virtual true, abstract: false, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method CloneToken, addr 0x269b0cc, size 0x60, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method Load, addr 0x269b12c, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load, addr 0x269b134, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method Parse, addr 0x269b2d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* Parse(::StringW json);

  /// @brief Method Parse, addr 0x269b2dc, size 0x23c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method FromObject, addr 0x269b518, size 0x20, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* FromObject(::System::Object* o);

  /// @brief Method FromObject, addr 0x269b538, size 0x18c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method WriteTo, addr 0x269b6c4, size 0xcc, virtual true, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method get_Item, addr 0x269b790, size 0x12c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key);

  /// @brief Method set_Item, addr 0x269b8bc, size 0x134, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method get_Item, addr 0x269b9f0, size 0x10, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x269ba00, size 0x10, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method IndexOfItem, addr 0x269ba10, size 0x58, virtual true, abstract: false, final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method MergeItem, addr 0x269ba68, size 0xe0, virtual true, abstract: false, final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method IndexOf, addr 0x269bb48, size 0x10, virtual true, abstract: false, final true
  inline int32_t IndexOf(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Insert, addr 0x269bb58, size 0x14, virtual true, abstract: false, final true
  inline void Insert(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveAt, addr 0x269bb6c, size 0x10, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method GetEnumerator, addr 0x269bb7c, size 0x70, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator();

  /// @brief Method Add, addr 0x269bbec, size 0x10, virtual true, abstract: false, final true
  inline void Add(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Clear, addr 0x269bbfc, size 0x10, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x269bc0c, size 0x10, virtual true, abstract: false, final true
  inline bool Contains(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method CopyTo, addr 0x269bc1c, size 0x10, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*, ::Array<::Newtonsoft::Json::Linq::JToken*>*> array, int32_t arrayIndex);

  /// @brief Method get_IsReadOnly, addr 0x269bc2c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method Remove, addr 0x269bc34, size 0x10, virtual true, abstract: false, final true
  inline bool Remove(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method GetDeepHashCode, addr 0x269bc44, size 0x4, virtual true, abstract: false, final false
  inline int32_t GetDeepHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "JArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JArray(JArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JArray(JArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JArray();

public:
  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JArray, 0x58>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JArray, ____values) == 0x50, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JArray*, "Newtonsoft.Json.Linq", "JArray");
