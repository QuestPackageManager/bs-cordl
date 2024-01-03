#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: Newtonsoft.Json.Serialization::JsonPropertyCollection
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3816)), TypeDefinitionIndex(TypeDefinitionIndex(11945)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3816), inst:
// 3945 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11946)) CS Name: ::Newtonsoft.Json.Serialization::JsonPropertyCollection*
class CORDL_TYPE JsonPropertyCollection : public ::System::Collections::ObjectModel::KeyedCollection_2<::StringW, ::Newtonsoft::Json::Serialization::JsonProperty*> {
public:
  // Declarations
  /// @brief Field _type, offset 0x30, size 0x8
  __declspec(property(get = __get__type, put = __set__type))::System::Type* _type;

  /// @brief Field _list, offset 0x38, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* _list;

  constexpr ::System::Type*& __get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__type() const;

  constexpr void __set__type(::System::Type* value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* value);

  static inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* New_ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x2671824, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method GetKeyForItem, addr 0x267ab18, size 0x18, virtual true, abstract: false, final false
  inline ::StringW GetKeyForItem(::Newtonsoft::Json::Serialization::JsonProperty* item);

  /// @brief Method AddProperty, addr 0x26719c4, size 0x234, virtual false, abstract: false, final false
  inline void AddProperty(::Newtonsoft::Json::Serialization::JsonProperty* property);

  /// @brief Method GetClosestMatchProperty, addr 0x2671984, size 0x40, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonProperty* GetClosestMatchProperty(::StringW propertyName);

  /// @brief Method TryGetValue, addr 0x267ac1c, size 0xdc, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW key, ByRef<::Newtonsoft::Json::Serialization::JsonProperty*> item);

  /// @brief Method GetProperty, addr 0x267ab30, size 0xec, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonProperty* GetProperty(::StringW propertyName, ::System::StringComparison comparisonType);

  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonPropertyCollection(JsonPropertyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonPropertyCollection(JsonPropertyCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPropertyCollection();

public:
  /// @brief Field _type, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ____type;

  /// @brief Field _list, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonPropertyCollection, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonPropertyCollection, ____type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonPropertyCollection, ____list) == 0x38, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonPropertyCollection*, "Newtonsoft.Json.Serialization", "JsonPropertyCollection");
