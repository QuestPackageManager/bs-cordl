#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ImmutableCollectionsUtils)
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Utilities {
class __ImmutableCollectionsUtils__ImmutableCollectionTypeInfo;
}
namespace Newtonsoft::Json::Utilities {
class __ImmutableCollectionsUtils____c;
}
namespace Newtonsoft::Json::Utilities {
class __ImmutableCollectionsUtils____c__DisplayClass24_0;
}
namespace Newtonsoft::Json::Utilities {
class __ImmutableCollectionsUtils____c__DisplayClass25_0;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ImmutableCollectionsUtils;
}
namespace Newtonsoft::Json::Utilities {
class __ImmutableCollectionsUtils__ImmutableCollectionTypeInfo;
}
namespace Newtonsoft::Json::Utilities {
class __ImmutableCollectionsUtils____c;
}
namespace Newtonsoft::Json::Utilities {
class __ImmutableCollectionsUtils____c__DisplayClass24_0;
}
namespace Newtonsoft::Json::Utilities {
class __ImmutableCollectionsUtils____c__DisplayClass25_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass24_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass25_0);
// Type: ::ImmutableCollectionTypeInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ImmutableCollectionsUtils::ImmutableCollectionTypeInfo*
class CORDL_TYPE __ImmutableCollectionsUtils__ImmutableCollectionTypeInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BuilderTypeName, put = set_BuilderTypeName))::StringW BuilderTypeName;

  __declspec(property(get = get_ContractTypeName, put = set_ContractTypeName))::StringW ContractTypeName;

  __declspec(property(get = get_CreatedTypeName, put = set_CreatedTypeName))::StringW CreatedTypeName;

  /// @brief Field <BuilderTypeName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BuilderTypeName_k__BackingField, put = __cordl_internal_set__BuilderTypeName_k__BackingField))::StringW _BuilderTypeName_k__BackingField;

  /// @brief Field <ContractTypeName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ContractTypeName_k__BackingField, put = __cordl_internal_set__ContractTypeName_k__BackingField))::StringW _ContractTypeName_k__BackingField;

  /// @brief Field <CreatedTypeName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__CreatedTypeName_k__BackingField, put = __cordl_internal_set__CreatedTypeName_k__BackingField))::StringW _CreatedTypeName_k__BackingField;

  static inline ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo* New_ctor(::StringW contractTypeName, ::StringW createdTypeName, ::StringW builderTypeName);

  constexpr ::StringW const& __cordl_internal_get__BuilderTypeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__BuilderTypeName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ContractTypeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ContractTypeName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CreatedTypeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CreatedTypeName_k__BackingField();

  constexpr void __cordl_internal_set__BuilderTypeName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ContractTypeName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CreatedTypeName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2a140b0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW contractTypeName, ::StringW createdTypeName, ::StringW builderTypeName);

  /// @brief Method get_BuilderTypeName, addr 0x2a1410c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BuilderTypeName();

  /// @brief Method get_ContractTypeName, addr 0x2a140ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ContractTypeName();

  /// @brief Method get_CreatedTypeName, addr 0x2a140fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CreatedTypeName();

  /// @brief Method set_BuilderTypeName, addr 0x2a14114, size 0x8, virtual false, abstract: false, final false
  inline void set_BuilderTypeName(::StringW value);

  /// @brief Method set_ContractTypeName, addr 0x2a140f4, size 0x8, virtual false, abstract: false, final false
  inline void set_ContractTypeName(::StringW value);

  /// @brief Method set_CreatedTypeName, addr 0x2a14104, size 0x8, virtual false, abstract: false, final false
  inline void set_CreatedTypeName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImmutableCollectionsUtils__ImmutableCollectionTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImmutableCollectionsUtils__ImmutableCollectionTypeInfo(__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImmutableCollectionsUtils__ImmutableCollectionTypeInfo(__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo const&) = delete;

  /// @brief Field <ContractTypeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ContractTypeName_k__BackingField;

  /// @brief Field <CreatedTypeName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____CreatedTypeName_k__BackingField;

  /// @brief Field <BuilderTypeName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____BuilderTypeName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo, ____ContractTypeName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo, ____CreatedTypeName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo, ____BuilderTypeName_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ImmutableCollectionsUtils::<>c*
class CORDL_TYPE __ImmutableCollectionsUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c* __9;

  /// @brief Field <>9__24_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_1, put = setStaticF___9__24_1))::System::Func_2<::System::Reflection::MethodInfo*, bool>* __9__24_1;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1))::System::Func_2<::System::Reflection::MethodInfo*, bool>* __9__25_1;

  static inline ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c* New_ctor();

  /// @brief Method <TryBuildImmutableForArrayContract>b__24_1, addr 0x2a14188, size 0x94, virtual false, abstract: false, final false
  inline bool _TryBuildImmutableForArrayContract_b__24_1(::System::Reflection::MethodInfo* m);

  /// @brief Method <TryBuildImmutableForDictionaryContract>b__25_1, addr 0x2a1421c, size 0x150, virtual false, abstract: false, final false
  inline bool _TryBuildImmutableForDictionaryContract_b__25_1(::System::Reflection::MethodInfo* m);

  /// @brief Method .ctor, addr 0x2a14180, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::MethodInfo*, bool>* getStaticF___9__24_1();

  static inline ::System::Func_2<::System::Reflection::MethodInfo*, bool>* getStaticF___9__25_1();

  static inline void setStaticF___9(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c* value);

  static inline void setStaticF___9__24_1(::System::Func_2<::System::Reflection::MethodInfo*, bool>* value);

  static inline void setStaticF___9__25_1(::System::Func_2<::System::Reflection::MethodInfo*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImmutableCollectionsUtils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ImmutableCollectionsUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImmutableCollectionsUtils____c(__ImmutableCollectionsUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImmutableCollectionsUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImmutableCollectionsUtils____c(__ImmutableCollectionsUtils____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ImmutableCollectionsUtils::<>c__DisplayClass24_0*
class CORDL_TYPE __ImmutableCollectionsUtils____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  static inline ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass24_0* New_ctor();

  /// @brief Method <TryBuildImmutableForArrayContract>b__0, addr 0x2a1436c, size 0x24, virtual false, abstract: false, final false
  inline bool _TryBuildImmutableForArrayContract_b__0(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo* d);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x2a132dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImmutableCollectionsUtils____c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ImmutableCollectionsUtils____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImmutableCollectionsUtils____c__DisplayClass24_0(__ImmutableCollectionsUtils____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImmutableCollectionsUtils____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImmutableCollectionsUtils____c__DisplayClass24_0(__ImmutableCollectionsUtils____c__DisplayClass24_0 const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass24_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass24_0, ___name) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ImmutableCollectionsUtils::<>c__DisplayClass25_0*
class CORDL_TYPE __ImmutableCollectionsUtils____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  static inline ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass25_0* New_ctor();

  /// @brief Method <TryBuildImmutableForDictionaryContract>b__0, addr 0x2a14390, size 0x24, virtual false, abstract: false, final false
  inline bool _TryBuildImmutableForDictionaryContract_b__0(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo* d);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x2a13778, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImmutableCollectionsUtils____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ImmutableCollectionsUtils____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImmutableCollectionsUtils____c__DisplayClass25_0(__ImmutableCollectionsUtils____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImmutableCollectionsUtils____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImmutableCollectionsUtils____c__DisplayClass25_0(__ImmutableCollectionsUtils____c__DisplayClass25_0 const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass25_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass25_0, ___name) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ImmutableCollectionsUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::ImmutableCollectionsUtils*
class CORDL_TYPE ImmutableCollectionsUtils : public ::System::Object {
public:
  // Declarations
  using ImmutableCollectionTypeInfo = ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo;

  using __c = ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c;

  using __c__DisplayClass24_0 = ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass24_0;

  using __c__DisplayClass25_0 = ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass25_0;

  /// @brief Field ArrayContractImmutableCollectionDefinitions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ArrayContractImmutableCollectionDefinitions, put = setStaticF_ArrayContractImmutableCollectionDefinitions))::System::Collections::Generic::IList_1<
      ::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo*>* ArrayContractImmutableCollectionDefinitions;

  /// @brief Field DictionaryContractImmutableCollectionDefinitions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DictionaryContractImmutableCollectionDefinitions, put = setStaticF_DictionaryContractImmutableCollectionDefinitions))::System::Collections::Generic::
      IList_1<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo*>* DictionaryContractImmutableCollectionDefinitions;

  /// @brief Method TryBuildImmutableForArrayContract, addr 0x2a12e9c, size 0x440, virtual false, abstract: false, final false
  static inline bool TryBuildImmutableForArrayContract(::System::Type* underlyingType, ::System::Type* collectionItemType, ByRef<::System::Type*> createdType,
                                                       ByRef<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> parameterizedCreator);

  /// @brief Method TryBuildImmutableForDictionaryContract, addr 0x2a132e4, size 0x494, virtual false, abstract: false, final false
  static inline bool TryBuildImmutableForDictionaryContract(::System::Type* underlyingType, ::System::Type* keyItemType, ::System::Type* valueItemType, ByRef<::System::Type*> createdType,
                                                            ByRef<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> parameterizedCreator);

  static inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo*>*
  getStaticF_ArrayContractImmutableCollectionDefinitions();

  static inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo*>*
  getStaticF_DictionaryContractImmutableCollectionDefinitions();

  static inline void
  setStaticF_ArrayContractImmutableCollectionDefinitions(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo*>* value);

  static inline void
  setStaticF_DictionaryContractImmutableCollectionDefinitions(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImmutableCollectionsUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImmutableCollectionsUtils(ImmutableCollectionsUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImmutableCollectionsUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImmutableCollectionsUtils(ImmutableCollectionsUtils const&) = delete;

  /// @brief Field ImmutableArrayGenericTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableArrayGenericTypeName{ u"System.Collections.Immutable.ImmutableArray`1" };

  /// @brief Field ImmutableArrayTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableArrayTypeName{ u"System.Collections.Immutable.ImmutableArray" };

  /// @brief Field ImmutableDictionaryGenericInterfaceTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableDictionaryGenericInterfaceTypeName{ u"System.Collections.Immutable.IImmutableDictionary`2" };

  /// @brief Field ImmutableDictionaryGenericTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableDictionaryGenericTypeName{ u"System.Collections.Immutable.ImmutableDictionary`2" };

  /// @brief Field ImmutableDictionaryTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableDictionaryTypeName{ u"System.Collections.Immutable.ImmutableDictionary" };

  /// @brief Field ImmutableHashSetGenericTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableHashSetGenericTypeName{ u"System.Collections.Immutable.ImmutableHashSet`1" };

  /// @brief Field ImmutableHashSetTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableHashSetTypeName{ u"System.Collections.Immutable.ImmutableHashSet" };

  /// @brief Field ImmutableListGenericInterfaceTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableListGenericInterfaceTypeName{ u"System.Collections.Immutable.IImmutableList`1" };

  /// @brief Field ImmutableListGenericTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableListGenericTypeName{ u"System.Collections.Immutable.ImmutableList`1" };

  /// @brief Field ImmutableListTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableListTypeName{ u"System.Collections.Immutable.ImmutableList" };

  /// @brief Field ImmutableQueueGenericInterfaceTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableQueueGenericInterfaceTypeName{ u"System.Collections.Immutable.IImmutableQueue`1" };

  /// @brief Field ImmutableQueueGenericTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableQueueGenericTypeName{ u"System.Collections.Immutable.ImmutableQueue`1" };

  /// @brief Field ImmutableQueueTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableQueueTypeName{ u"System.Collections.Immutable.ImmutableQueue" };

  /// @brief Field ImmutableSetGenericInterfaceTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableSetGenericInterfaceTypeName{ u"System.Collections.Immutable.IImmutableSet`1" };

  /// @brief Field ImmutableSortedDictionaryGenericTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableSortedDictionaryGenericTypeName{ u"System.Collections.Immutable.ImmutableSortedDictionary`2" };

  /// @brief Field ImmutableSortedDictionaryTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableSortedDictionaryTypeName{ u"System.Collections.Immutable.ImmutableSortedDictionary" };

  /// @brief Field ImmutableSortedSetGenericTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableSortedSetGenericTypeName{ u"System.Collections.Immutable.ImmutableSortedSet`1" };

  /// @brief Field ImmutableSortedSetTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableSortedSetTypeName{ u"System.Collections.Immutable.ImmutableSortedSet" };

  /// @brief Field ImmutableStackGenericInterfaceTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableStackGenericInterfaceTypeName{ u"System.Collections.Immutable.IImmutableStack`1" };

  /// @brief Field ImmutableStackGenericTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableStackGenericTypeName{ u"System.Collections.Immutable.ImmutableStack`1" };

  /// @brief Field ImmutableStackTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ImmutableStackTypeName{ u"System.Collections.Immutable.ImmutableStack" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils__ImmutableCollectionTypeInfo*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/ImmutableCollectionTypeInfo");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass24_0*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/<>c__DisplayClass24_0");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ImmutableCollectionsUtils____c__DisplayClass25_0*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/<>c__DisplayClass25_0");
