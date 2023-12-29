#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(JsonContainerContract)
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonContainerContract);
// Type: Newtonsoft.Json.Serialization::JsonContainerContract
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 188, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4663 }), TypeDefinitionIndex(TypeDefinitionIndex(11871)),
// TypeDefinitionIndex(TypeDefinitionIndex(11768)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 112 }), TypeDefinitionIndex(TypeDefinitionIndex(11767)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4655 }), TypeDefinitionIndex(TypeDefinitionIndex(2446))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11835)) CS
// Name: ::Newtonsoft.Json.Serialization::JsonContainerContract*
class CORDL_TYPE JsonContainerContract : public ::Newtonsoft::Json::Serialization::JsonContract {
public:
  // Declarations
  /// @brief Field _itemContract, offset 0x90, size 0x8
  __declspec(property(get = __get__itemContract, put = __set__itemContract))::Newtonsoft::Json::Serialization::JsonContract* _itemContract;

  /// @brief Field _finalItemContract, offset 0x98, size 0x8
  __declspec(property(get = __get__finalItemContract, put = __set__finalItemContract))::Newtonsoft::Json::Serialization::JsonContract* _finalItemContract;

  /// @brief Field <ItemConverter>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __get__ItemConverter_k__BackingField, put = __set__ItemConverter_k__BackingField))::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField;

  /// @brief Field <ItemIsReference>k__BackingField, offset 0xa8, size 0x2
  __declspec(property(get = __get__ItemIsReference_k__BackingField, put = __set__ItemIsReference_k__BackingField))::System::Nullable_1<bool> _ItemIsReference_k__BackingField;

  /// @brief Field <ItemReferenceLoopHandling>k__BackingField, offset 0xac, size 0x8
  __declspec(property(get = __get__ItemReferenceLoopHandling_k__BackingField,
                      put = __set__ItemReferenceLoopHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ItemReferenceLoopHandling_k__BackingField;

  /// @brief Field <ItemTypeNameHandling>k__BackingField, offset 0xb4, size 0x8
  __declspec(property(get = __get__ItemTypeNameHandling_k__BackingField,
                      put = __set__ItemTypeNameHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _ItemTypeNameHandling_k__BackingField;

  __declspec(property(get = get_ItemContract, put = set_ItemContract))::Newtonsoft::Json::Serialization::JsonContract* ItemContract;

  __declspec(property(get = get_FinalItemContract))::Newtonsoft::Json::Serialization::JsonContract* FinalItemContract;

  __declspec(property(get = get_ItemConverter, put = set_ItemConverter))::Newtonsoft::Json::JsonConverter* ItemConverter;

  __declspec(property(get = get_ItemIsReference, put = set_ItemIsReference))::System::Nullable_1<bool> ItemIsReference;

  __declspec(property(get = get_ItemReferenceLoopHandling, put = set_ItemReferenceLoopHandling))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ItemReferenceLoopHandling;

  __declspec(property(get = get_ItemTypeNameHandling, put = set_ItemTypeNameHandling))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ItemTypeNameHandling;

  constexpr ::Newtonsoft::Json::Serialization::JsonContract*& __get__itemContract();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonContract*> const& __get__itemContract() const;

  constexpr void __set__itemContract(::Newtonsoft::Json::Serialization::JsonContract* value);

  constexpr ::Newtonsoft::Json::Serialization::JsonContract*& __get__finalItemContract();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonContract*> const& __get__finalItemContract() const;

  constexpr void __set__finalItemContract(::Newtonsoft::Json::Serialization::JsonContract* value);

  constexpr ::Newtonsoft::Json::JsonConverter*& __get__ItemConverter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverter*> const& __get__ItemConverter_k__BackingField() const;

  constexpr void __set__ItemConverter_k__BackingField(::Newtonsoft::Json::JsonConverter* value);

  constexpr ::System::Nullable_1<bool>& __get__ItemIsReference_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __get__ItemIsReference_k__BackingField() const;

  constexpr void __set__ItemIsReference_k__BackingField(::System::Nullable_1<bool> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __get__ItemReferenceLoopHandling_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __get__ItemReferenceLoopHandling_k__BackingField() const;

  constexpr void __set__ItemReferenceLoopHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __get__ItemTypeNameHandling_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __get__ItemTypeNameHandling_k__BackingField() const;

  constexpr void __set__ItemTypeNameHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  /// @brief Method get_ItemContract addr 0x2507118 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* get_ItemContract();

  /// @brief Method set_ItemContract addr 0x2507120 size 0x44 virtual false final false
  inline void set_ItemContract(::Newtonsoft::Json::Serialization::JsonContract* value);

  /// @brief Method get_FinalItemContract addr 0x2507164 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* get_FinalItemContract();

  /// @brief Method get_ItemConverter addr 0x250716c size 0x8 virtual false final false
  inline ::Newtonsoft::Json::JsonConverter* get_ItemConverter();

  /// @brief Method set_ItemConverter addr 0x2507174 size 0x8 virtual false final false
  inline void set_ItemConverter(::Newtonsoft::Json::JsonConverter* value);

  /// @brief Method get_ItemIsReference addr 0x250717c size 0x8 virtual false final false
  inline ::System::Nullable_1<bool> get_ItemIsReference();

  /// @brief Method set_ItemIsReference addr 0x2507184 size 0x8 virtual false final false
  inline void set_ItemIsReference(::System::Nullable_1<bool> value);

  /// @brief Method get_ItemReferenceLoopHandling addr 0x250718c size 0x8 virtual false final false
  inline ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling();

  /// @brief Method set_ItemReferenceLoopHandling addr 0x2507194 size 0x8 virtual false final false
  inline void set_ItemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  /// @brief Method get_ItemTypeNameHandling addr 0x250719c size 0x8 virtual false final false
  inline ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling();

  /// @brief Method set_ItemTypeNameHandling addr 0x25071a4 size 0x8 virtual false final false
  inline void set_ItemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  static inline ::Newtonsoft::Json::Serialization::JsonContainerContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor addr 0x25071ac size 0xdc virtual false final false
  inline void _ctor(::System::Type* underlyingType);

  // Ctor Parameters [CppParam { name: "", ty: "JsonContainerContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonContainerContract(JsonContainerContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonContainerContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonContainerContract(JsonContainerContract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonContainerContract();

public:
  /// @brief Field _itemContract, offset: 0x90, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonContract* ____itemContract;

  /// @brief Field _finalItemContract, offset: 0x98, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonContract* ____finalItemContract;

  /// @brief Field <ItemConverter>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonConverter* ____ItemConverter_k__BackingField;

  /// @brief Field <ItemIsReference>k__BackingField, offset: 0xa8, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____ItemIsReference_k__BackingField;

  /// @brief Field <ItemReferenceLoopHandling>k__BackingField, offset: 0xac, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ____ItemReferenceLoopHandling_k__BackingField;

  /// @brief Field <ItemTypeNameHandling>k__BackingField, offset: 0xb4, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ____ItemTypeNameHandling_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonContainerContract, 0xc0>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContainerContract, ____itemContract) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContainerContract, ____finalItemContract) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContainerContract, ____ItemConverter_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContainerContract, ____ItemIsReference_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContainerContract, ____ItemReferenceLoopHandling_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContainerContract, ____ItemTypeNameHandling_k__BackingField) == 0xb4, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonContainerContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContainerContract*, "Newtonsoft.Json.Serialization", "JsonContainerContract");
