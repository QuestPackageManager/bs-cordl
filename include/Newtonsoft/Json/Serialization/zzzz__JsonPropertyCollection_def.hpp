#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonPropertyCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonPropertyCollection)
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct StringComparison;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonPropertyCollection;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonPropertyCollection);
// Dependencies System.Collections.ObjectModel.KeyedCollection`2<TKey, TItem>
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonPropertyCollection
class CORDL_TYPE JsonPropertyCollection : public ::System::Collections::ObjectModel::KeyedCollection_2<::StringW, ::Newtonsoft::Json::Serialization::JsonProperty*> {
public:
  // Declarations
  /// @brief Field _list, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* _list;

  /// @brief Field _type, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Type* _type;

  /// @brief Method AddProperty, addr 0x3ed7c14, size 0x2b0, virtual false, abstract: false, final false
  inline void AddProperty(::Newtonsoft::Json::Serialization::JsonProperty* property);

  /// @brief Method GetClosestMatchProperty, addr 0x3ed7ec4, size 0x40, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonProperty* GetClosestMatchProperty(::StringW propertyName);

  /// @brief Method GetKeyForItem, addr 0x3ee3b30, size 0x18, virtual true, abstract: false, final false
  inline ::StringW GetKeyForItem(::Newtonsoft::Json::Serialization::JsonProperty* item);

  /// @brief Method GetProperty, addr 0x3ee3b48, size 0xec, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonProperty* GetProperty(::StringW propertyName, ::System::StringComparison comparisonType);

  static inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* New_ctor(::System::Type* type);

  /// @brief Method TryGetProperty, addr 0x3ee3c34, size 0xdc, virtual false, abstract: false, final false
  inline bool TryGetProperty(::StringW key, ::ByRef<::Newtonsoft::Json::Serialization::JsonProperty*> item);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>*& __cordl_internal_get__list();

  constexpr ::System::Type* const& __cordl_internal_get__type() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__list(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* value);

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x3ed7ab8, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPropertyCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonPropertyCollection(JsonPropertyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonPropertyCollection(JsonPropertyCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10329 };

  /// @brief Field _type, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ____type;

  /// @brief Field _list, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonPropertyCollection, ____type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonPropertyCollection, ____list) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonPropertyCollection, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonPropertyCollection*, "Newtonsoft.Json.Serialization", "JsonPropertyCollection");
