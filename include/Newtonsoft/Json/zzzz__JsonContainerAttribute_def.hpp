#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonContainerAttribute)
namespace Newtonsoft::Json::Serialization {
class NamingStrategy;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonContainerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonContainerAttribute);
// Type: Newtonsoft.Json::JsonContainerAttribute
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonContainerAttribute*
class CORDL_TYPE JsonContainerAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_Id, put = set_Id))::StringW Id;

  __declspec(property(get = get_IsReference, put = set_IsReference)) bool IsReference;

  __declspec(property(get = get_ItemConverterParameters, put = set_ItemConverterParameters))::ArrayW<::System::Object*, ::Array<::System::Object*>*> ItemConverterParameters;

  __declspec(property(get = get_ItemConverterType, put = set_ItemConverterType))::System::Type* ItemConverterType;

  __declspec(property(get = get_ItemIsReference, put = set_ItemIsReference)) bool ItemIsReference;

  __declspec(property(get = get_ItemReferenceLoopHandling, put = set_ItemReferenceLoopHandling))::Newtonsoft::Json::ReferenceLoopHandling ItemReferenceLoopHandling;

  __declspec(property(get = get_ItemTypeNameHandling, put = set_ItemTypeNameHandling))::Newtonsoft::Json::TypeNameHandling ItemTypeNameHandling;

  __declspec(property(get = get_NamingStrategyInstance, put = set_NamingStrategyInstance))::Newtonsoft::Json::Serialization::NamingStrategy* NamingStrategyInstance;

  __declspec(property(get = get_NamingStrategyParameters, put = set_NamingStrategyParameters))::ArrayW<::System::Object*, ::Array<::System::Object*>*> NamingStrategyParameters;

  __declspec(property(get = get_NamingStrategyType, put = set_NamingStrategyType))::System::Type* NamingStrategyType;

  __declspec(property(get = get_Title, put = set_Title))::StringW Title;

  /// @brief Field <Description>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Description_k__BackingField, put = __cordl_internal_set__Description_k__BackingField))::StringW _Description_k__BackingField;

  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Id_k__BackingField, put = __cordl_internal_set__Id_k__BackingField))::StringW _Id_k__BackingField;

  /// @brief Field <ItemConverterParameters>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemConverterParameters_k__BackingField,
                      put = __cordl_internal_set__ItemConverterParameters_k__BackingField))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _ItemConverterParameters_k__BackingField;

  /// @brief Field <ItemConverterType>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemConverterType_k__BackingField, put = __cordl_internal_set__ItemConverterType_k__BackingField))::System::Type* _ItemConverterType_k__BackingField;

  /// @brief Field <NamingStrategyInstance>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__NamingStrategyInstance_k__BackingField,
                      put = __cordl_internal_set__NamingStrategyInstance_k__BackingField))::Newtonsoft::Json::Serialization::NamingStrategy* _NamingStrategyInstance_k__BackingField;

  /// @brief Field <Title>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Title_k__BackingField, put = __cordl_internal_set__Title_k__BackingField))::StringW _Title_k__BackingField;

  /// @brief Field _isReference, offset 0x40, size 0x2
  __declspec(property(get = __cordl_internal_get__isReference, put = __cordl_internal_set__isReference))::System::Nullable_1<bool> _isReference;

  /// @brief Field _itemIsReference, offset 0x42, size 0x2
  __declspec(property(get = __cordl_internal_get__itemIsReference, put = __cordl_internal_set__itemIsReference))::System::Nullable_1<bool> _itemIsReference;

  /// @brief Field _itemReferenceLoopHandling, offset 0x44, size 0x8
  __declspec(property(get = __cordl_internal_get__itemReferenceLoopHandling,
                      put = __cordl_internal_set__itemReferenceLoopHandling))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling;

  /// @brief Field _itemTypeNameHandling, offset 0x4c, size 0x8
  __declspec(property(get = __cordl_internal_get__itemTypeNameHandling,
                      put = __cordl_internal_set__itemTypeNameHandling))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling;

  /// @brief Field _namingStrategyParameters, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__namingStrategyParameters,
                      put = __cordl_internal_set__namingStrategyParameters))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _namingStrategyParameters;

  /// @brief Field _namingStrategyType, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__namingStrategyType, put = __cordl_internal_set__namingStrategyType))::System::Type* _namingStrategyType;

  static inline ::Newtonsoft::Json::JsonContainerAttribute* New_ctor();

  static inline ::Newtonsoft::Json::JsonContainerAttribute* New_ctor(::StringW id);

  constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Description_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Id_k__BackingField();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__ItemConverterParameters_k__BackingField() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__ItemConverterParameters_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get__ItemConverterType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__ItemConverterType_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::NamingStrategy*& __cordl_internal_get__NamingStrategyInstance_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::NamingStrategy*> const& __cordl_internal_get__NamingStrategyInstance_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Title_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Title_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isReference() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isReference();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__itemIsReference() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__itemIsReference();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__itemReferenceLoopHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__itemReferenceLoopHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__itemTypeNameHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__itemTypeNameHandling();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__namingStrategyParameters() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__namingStrategyParameters();

  constexpr ::System::Type*& __cordl_internal_get__namingStrategyType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__namingStrategyType() const;

  constexpr void __cordl_internal_set__Description_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Id_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ItemConverterParameters_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__ItemConverterType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__NamingStrategyInstance_k__BackingField(::Newtonsoft::Json::Serialization::NamingStrategy* value);

  constexpr void __cordl_internal_set__Title_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__isReference(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__itemIsReference(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__itemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr void __cordl_internal_set__itemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  constexpr void __cordl_internal_set__namingStrategyParameters(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__namingStrategyType(::System::Type* value);

  /// @brief Method .ctor, addr 0x29c2268, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29c22c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  /// @brief Method get_Description, addr 0x29c2310, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_Id, addr 0x29c22f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_IsReference, addr 0x29c2378, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method get_ItemConverterParameters, addr 0x29c2330, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_ItemConverterParameters();

  /// @brief Method get_ItemConverterType, addr 0x29c2320, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ItemConverterType();

  /// @brief Method get_ItemIsReference, addr 0x29c241c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ItemIsReference();

  /// @brief Method get_ItemReferenceLoopHandling, addr 0x29c24c0, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling();

  /// @brief Method get_ItemTypeNameHandling, addr 0x29c2564, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling();

  /// @brief Method get_NamingStrategyInstance, addr 0x29c2368, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategyInstance();

  /// @brief Method get_NamingStrategyParameters, addr 0x29c2354, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_NamingStrategyParameters();

  /// @brief Method get_NamingStrategyType, addr 0x29c2340, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_NamingStrategyType();

  /// @brief Method get_Title, addr 0x29c2300, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Title();

  /// @brief Method set_Description, addr 0x29c2318, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_Id, addr 0x29c22f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_IsReference, addr 0x29c23b4, size 0x68, virtual false, abstract: false, final false
  inline void set_IsReference(bool value);

  /// @brief Method set_ItemConverterParameters, addr 0x29c2338, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemConverterParameters(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method set_ItemConverterType, addr 0x29c2328, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemConverterType(::System::Type* value);

  /// @brief Method set_ItemIsReference, addr 0x29c2458, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemIsReference(bool value);

  /// @brief Method set_ItemReferenceLoopHandling, addr 0x29c24fc, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method set_ItemTypeNameHandling, addr 0x29c25a0, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

  /// @brief Method set_NamingStrategyInstance, addr 0x29c2370, size 0x8, virtual false, abstract: false, final false
  inline void set_NamingStrategyInstance(::Newtonsoft::Json::Serialization::NamingStrategy* value);

  /// @brief Method set_NamingStrategyParameters, addr 0x29c235c, size 0xc, virtual false, abstract: false, final false
  inline void set_NamingStrategyParameters(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method set_NamingStrategyType, addr 0x29c2348, size 0xc, virtual false, abstract: false, final false
  inline void set_NamingStrategyType(::System::Type* value);

  /// @brief Method set_Title, addr 0x29c2308, size 0x8, virtual false, abstract: false, final false
  inline void set_Title(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonContainerAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonContainerAttribute(JsonContainerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonContainerAttribute(JsonContainerAttribute const&) = delete;

  /// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Id_k__BackingField;

  /// @brief Field <Title>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Title_k__BackingField;

  /// @brief Field <Description>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Description_k__BackingField;

  /// @brief Field <ItemConverterType>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____ItemConverterType_k__BackingField;

  /// @brief Field <ItemConverterParameters>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____ItemConverterParameters_k__BackingField;

  /// @brief Field <NamingStrategyInstance>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::NamingStrategy* ____NamingStrategyInstance_k__BackingField;

  /// @brief Field _isReference, offset: 0x40, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____isReference;

  /// @brief Field _itemIsReference, offset: 0x42, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____itemIsReference;

  /// @brief Field _itemReferenceLoopHandling, offset: 0x44, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ____itemReferenceLoopHandling;

  /// @brief Field _itemTypeNameHandling, offset: 0x4c, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ____itemTypeNameHandling;

  /// @brief Field _namingStrategyType, offset: 0x58, size: 0x8, def value: None
  ::System::Type* ____namingStrategyType;

  /// @brief Field _namingStrategyParameters, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____namingStrategyParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonContainerAttribute, 0x68>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____Title_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____Description_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____ItemConverterType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____ItemConverterParameters_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____NamingStrategyInstance_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____isReference) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemIsReference) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemReferenceLoopHandling) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemTypeNameHandling) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____namingStrategyType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____namingStrategyParameters) == 0x60, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonContainerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonContainerAttribute*, "Newtonsoft.Json", "JsonContainerAttribute");
