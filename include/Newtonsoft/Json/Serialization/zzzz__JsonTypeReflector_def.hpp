#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(JsonTypeReflector)
namespace System::Runtime::Serialization {
class DataMemberAttribute;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace Newtonsoft::Json::Serialization {
class __JsonTypeReflector____c__DisplayClass18_0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionDelegateFactory;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace Newtonsoft::Json::Serialization {
class __JsonTypeReflector____c;
}
namespace System::Runtime::Serialization {
class DataContractAttribute;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonTypeReflector;
}
namespace Newtonsoft::Json::Serialization {
class __JsonTypeReflector____c;
}
namespace Newtonsoft::Json::Serialization {
class __JsonTypeReflector____c__DisplayClass18_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonTypeReflector);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0);
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11959))
// CS Name: ::JsonTypeReflector::<>c__DisplayClass18_0*
class CORDL_TYPE __JsonTypeReflector____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field converterType, offset 0x10, size 0x8
  __declspec(property(get = __get_converterType, put = __set_converterType))::System::Type* converterType;

  /// @brief Field defaultConstructor, offset 0x18, size 0x8
  __declspec(property(get = __get_defaultConstructor, put = __set_defaultConstructor))::System::Func_1<::System::Object*>* defaultConstructor;

  constexpr ::System::Type*& __get_converterType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_converterType() const;

  constexpr void __set_converterType(::System::Type* value);

  constexpr ::System::Func_1<::System::Object*>*& __get_defaultConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& __get_defaultConstructor() const;

  constexpr void __set_defaultConstructor(::System::Func_1<::System::Object*>* value);

  static inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor, addr 0x268e878, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetJsonConverterCreator>b__0, addr 0x268f088, size 0x49c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverter* _GetJsonConverterCreator_b__0(::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  // Ctor Parameters [CppParam { name: "", ty: "__JsonTypeReflector____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonTypeReflector____c__DisplayClass18_0(__JsonTypeReflector____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonTypeReflector____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonTypeReflector____c__DisplayClass18_0(__JsonTypeReflector____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonTypeReflector____c__DisplayClass18_0();

public:
  /// @brief Field converterType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___converterType;

  /// @brief Field defaultConstructor, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ___defaultConstructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0, ___converterType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0, ___defaultConstructor) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11960))
// CS Name: ::JsonTypeReflector::<>c*
class CORDL_TYPE __JsonTypeReflector____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* __9;

  /// @brief Field <>9__18_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_1, put = setStaticF___9__18_1))::System::Func_2<::System::Object*, ::System::Type*>* __9__18_1;

  static inline void setStaticF___9(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* value);

  static inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* getStaticF___9();

  static inline void setStaticF___9__18_1(::System::Func_2<::System::Object*, ::System::Type*>* value);

  static inline ::System::Func_2<::System::Object*, ::System::Type*>* getStaticF___9__18_1();

  static inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* New_ctor();

  /// @brief Method .ctor, addr 0x268f588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetJsonConverterCreator>b__18_1, addr 0x268f590, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _GetJsonConverterCreator_b__18_1(::System::Object* param);

  // Ctor Parameters [CppParam { name: "", ty: "__JsonTypeReflector____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonTypeReflector____c(__JsonTypeReflector____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonTypeReflector____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonTypeReflector____c(__JsonTypeReflector____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonTypeReflector____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonTypeReflector
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11961)) CS Name: ::Newtonsoft.Json.Serialization::JsonTypeReflector*
class CORDL_TYPE JsonTypeReflector : public ::System::Object {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c;

  using __c__DisplayClass18_0 = ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0;

  /// @brief Field _dynamicCodeGeneration, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__dynamicCodeGeneration, put = setStaticF__dynamicCodeGeneration))::System::Nullable_1<bool> _dynamicCodeGeneration;

  /// @brief Field _fullyTrusted, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__fullyTrusted, put = setStaticF__fullyTrusted))::System::Nullable_1<bool> _fullyTrusted;

  /// @brief Field JsonConverterCreatorCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_JsonConverterCreatorCache, put = setStaticF_JsonConverterCreatorCache))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*>* JsonConverterCreatorCache;

  /// @brief Field AssociatedMetadataTypesCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssociatedMetadataTypesCache,
                             put = setStaticF_AssociatedMetadataTypesCache))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* AssociatedMetadataTypesCache;

  /// @brief Field _metadataTypeAttributeReflectionObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__metadataTypeAttributeReflectionObject,
                             put = setStaticF__metadataTypeAttributeReflectionObject))::Newtonsoft::Json::Utilities::ReflectionObject* _metadataTypeAttributeReflectionObject;

  static inline void setStaticF__dynamicCodeGeneration(::System::Nullable_1<bool> value);

  static inline ::System::Nullable_1<bool> getStaticF__dynamicCodeGeneration();

  static inline void setStaticF__fullyTrusted(::System::Nullable_1<bool> value);

  static inline ::System::Nullable_1<bool> getStaticF__fullyTrusted();

  static inline void setStaticF_JsonConverterCreatorCache(
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*>* value);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*>*
  getStaticF_JsonConverterCreatorCache();

  static inline void setStaticF_AssociatedMetadataTypesCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* value);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* getStaticF_AssociatedMetadataTypesCache();

  static inline void setStaticF__metadataTypeAttributeReflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value);

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* getStaticF__metadataTypeAttributeReflectionObject();

  /// @brief Method GetCachedAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetCachedAttribute(::System::Object* attributeProvider);

  /// @brief Method GetDataContractAttribute, addr 0x268e1bc, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContractAttribute* GetDataContractAttribute(::System::Type* type);

  /// @brief Method GetDataMemberAttribute, addr 0x268e250, size 0x240, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataMemberAttribute* GetDataMemberAttribute(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetObjectMemberSerialization, addr 0x268e490, size 0xf0, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::MemberSerialization GetObjectMemberSerialization(::System::Type* objectType, bool ignoreSerializableAttribute);

  /// @brief Method GetJsonConverter, addr 0x268e580, size 0xe4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonConverter* GetJsonConverter(::System::Object* attributeProvider);

  /// @brief Method CreateJsonConverterInstance, addr 0x268e664, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonConverter* CreateJsonConverterInstance(::System::Type* converterType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> converterArgs);

  /// @brief Method GetJsonConverterCreator, addr 0x268e70c, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>* GetJsonConverterCreator(::System::Type* converterType);

  /// @brief Method GetTypeConverter, addr 0x268e908, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetTypeConverter(::System::Type* type);

  /// @brief Method GetAssociatedMetadataType, addr 0x268e960, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Type* GetAssociatedMetadataType(::System::Type* type);

  /// @brief Method GetAssociateMetadataTypeFromAttribute, addr 0x268e9e0, size 0x268, virtual false, abstract: false, final false
  static inline ::System::Type* GetAssociateMetadataTypeFromAttribute(::System::Type* type);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Type* type);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Object* provider);

  /// @brief Method get_DynamicCodeGeneration, addr 0x268ec48, size 0x2c8, virtual false, abstract: false, final false
  static inline bool get_DynamicCodeGeneration();

  /// @brief Method get_FullyTrusted, addr 0x268d598, size 0x1dc, virtual false, abstract: false, final false
  static inline bool get_FullyTrusted();

  /// @brief Method get_ReflectionDelegateFactory, addr 0x268e880, size 0x88, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_ReflectionDelegateFactory();

  // Ctor Parameters [CppParam { name: "", ty: "JsonTypeReflector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonTypeReflector(JsonTypeReflector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonTypeReflector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonTypeReflector(JsonTypeReflector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTypeReflector();

public:
  /// @brief Field IdPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString IdPropertyName{ u"$id" };

  /// @brief Field RefPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString RefPropertyName{ u"$ref" };

  /// @brief Field TypePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString TypePropertyName{ u"$type" };

  /// @brief Field ValuePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ValuePropertyName{ u"$value" };

  /// @brief Field ArrayValuesPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ArrayValuesPropertyName{ u"$values" };

  /// @brief Field ShouldSerializePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString ShouldSerializePrefix{ u"ShouldSerialize" };

  /// @brief Field SpecifiedPostfix offset 0xffffffff size 0x8
  static constexpr ::ConstString SpecifiedPostfix{ u"Specified" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonTypeReflector, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonTypeReflector);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonTypeReflector*, "Newtonsoft.Json.Serialization", "JsonTypeReflector");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*, "Newtonsoft.Json.Serialization", "JsonTypeReflector/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0*, "Newtonsoft.Json.Serialization", "JsonTypeReflector/<>c__DisplayClass18_0");
