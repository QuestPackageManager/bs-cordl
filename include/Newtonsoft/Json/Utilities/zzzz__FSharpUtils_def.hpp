#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/FSharpUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FSharpUtils)
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class FSharpUtils___c__55_2;
}
namespace Newtonsoft::Json::Utilities {
class FSharpUtils___c__DisplayClass52_0;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class FSharpUtils___c__DisplayClass55_0_2;
}
namespace Newtonsoft::Json::Utilities {
template <typename T, typename TResult> class MethodCall_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
struct BindingFlags;
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
template <typename T1, typename T2> class Tuple_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class FSharpUtils;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class FSharpUtils___c__55_2;
}
namespace Newtonsoft::Json::Utilities {
class FSharpUtils___c__DisplayClass52_0;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class FSharpUtils___c__DisplayClass55_0_2;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::FSharpUtils);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::FSharpUtils___c__55_2);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass52_0);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass55_0_2);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.FSharpUtils/<>c__55`2<TKey,TValue>
class CORDL_TYPE FSharpUtils___c__55_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Utilities::FSharpUtils___c__55_2<TKey, TValue>* __9;

  /// @brief Field <>9__55_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__55_1,
                      put = setStaticF___9__55_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::System::Tuple_2<TKey, TValue>*>* __9__55_1;

  static inline ::Newtonsoft::Json::Utilities::FSharpUtils___c__55_2<TKey, TValue>* New_ctor();

  /// @brief Method <BuildMapCreator>b__55_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Tuple_2<TKey, TValue>* _BuildMapCreator_b__55_1(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> kv);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::FSharpUtils___c__55_2<TKey, TValue>* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::System::Tuple_2<TKey, TValue>*>* getStaticF___9__55_1();

  static inline void setStaticF___9(::Newtonsoft::Json::Utilities::FSharpUtils___c__55_2<TKey, TValue>* value);

  static inline void setStaticF___9__55_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::System::Tuple_2<TKey, TValue>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FSharpUtils___c__55_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FSharpUtils___c__55_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FSharpUtils___c__55_2(FSharpUtils___c__55_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FSharpUtils___c__55_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FSharpUtils___c__55_2(FSharpUtils___c__55_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13393 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.FSharpUtils/<>c__DisplayClass52_0
class CORDL_TYPE FSharpUtils___c__DisplayClass52_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call;

  /// @brief Field invoke, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_invoke, put = __cordl_internal_set_invoke)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* invoke;

  static inline ::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass52_0* New_ctor();

  /// @brief Method <CreateFSharpFuncCall>b__0, addr 0x5b7a280, size 0x90, virtual false, abstract: false, final false
  inline ::System::Object* _CreateFSharpFuncCall_b__0(::System::Object* target, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get_call() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_call();

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get_invoke() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_invoke();

  constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set_invoke(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5b79f58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FSharpUtils___c__DisplayClass52_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FSharpUtils___c__DisplayClass52_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FSharpUtils___c__DisplayClass52_0(FSharpUtils___c__DisplayClass52_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FSharpUtils___c__DisplayClass52_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FSharpUtils___c__DisplayClass52_0(FSharpUtils___c__DisplayClass52_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13394 };

  /// @brief Field call, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___call;

  /// @brief Field invoke, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___invoke;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass52_0, ___call) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass52_0, ___invoke) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass52_0, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.FSharpUtils/<>c__DisplayClass55_0`2<TKey,TValue>
class CORDL_TYPE FSharpUtils___c__DisplayClass55_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctorDelegate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctorDelegate, put = __cordl_internal_set_ctorDelegate)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ctorDelegate;

  static inline ::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass55_0_2<TKey, TValue>* New_ctor();

  /// @brief Method <BuildMapCreator>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* _BuildMapCreator_b__0(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& __cordl_internal_get_ctorDelegate() const;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __cordl_internal_get_ctorDelegate();

  constexpr void __cordl_internal_set_ctorDelegate(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FSharpUtils___c__DisplayClass55_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FSharpUtils___c__DisplayClass55_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FSharpUtils___c__DisplayClass55_0_2(FSharpUtils___c__DisplayClass55_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FSharpUtils___c__DisplayClass55_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FSharpUtils___c__DisplayClass55_0_2(FSharpUtils___c__DisplayClass55_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13395 };

  /// @brief Field ctorDelegate, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ___ctorDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.FSharpUtils
class CORDL_TYPE FSharpUtils : public ::System::Object {
public:
  // Declarations
  template <typename TKey, typename TValue> using __c__55_2 = ::Newtonsoft::Json::Utilities::FSharpUtils___c__55_2<TKey, TValue>;

  using __c__DisplayClass52_0 = ::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass52_0;

  template <typename TKey, typename TValue> using __c__DisplayClass55_0_2 = ::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass55_0_2<TKey, TValue>;

  __declspec(property(get = get_FSharpCoreAssembly, put = set_FSharpCoreAssembly)) ::System::Reflection::Assembly* FSharpCoreAssembly;

  __declspec(property(get = get_GetUnionCaseInfoDeclaringType, put = set_GetUnionCaseInfoDeclaringType)) ::System::Func_2<::System::Object*, ::System::Object*>* GetUnionCaseInfoDeclaringType;

  __declspec(property(get = get_GetUnionCaseInfoFields, put = set_GetUnionCaseInfoFields)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* GetUnionCaseInfoFields;

  __declspec(property(get = get_GetUnionCaseInfoName, put = set_GetUnionCaseInfoName)) ::System::Func_2<::System::Object*, ::System::Object*>* GetUnionCaseInfoName;

  __declspec(property(get = get_GetUnionCaseInfoTag, put = set_GetUnionCaseInfoTag)) ::System::Func_2<::System::Object*, ::System::Object*>* GetUnionCaseInfoTag;

  __declspec(property(get = get_GetUnionCases, put = set_GetUnionCases)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* GetUnionCases;

  __declspec(property(get = get_IsUnion, put = set_IsUnion)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* IsUnion;

  /// @brief Field Lock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Lock, put = setStaticF_Lock)) ::System::Object* Lock;

  __declspec(property(get = get_PreComputeUnionConstructor,
                      put = set_PreComputeUnionConstructor)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* PreComputeUnionConstructor;

  __declspec(property(get = get_PreComputeUnionReader, put = set_PreComputeUnionReader)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* PreComputeUnionReader;

  __declspec(property(get = get_PreComputeUnionTagReader,
                      put = set_PreComputeUnionTagReader)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* PreComputeUnionTagReader;

  /// @brief Field <FSharpCoreAssembly>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__FSharpCoreAssembly_k__BackingField,
                      put = __cordl_internal_set__FSharpCoreAssembly_k__BackingField)) ::System::Reflection::Assembly* _FSharpCoreAssembly_k__BackingField;

  /// @brief Field <GetUnionCaseInfoDeclaringType>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__GetUnionCaseInfoDeclaringType_k__BackingField,
                      put =
                          __cordl_internal_set__GetUnionCaseInfoDeclaringType_k__BackingField)) ::System::Func_2<::System::Object*, ::System::Object*>* _GetUnionCaseInfoDeclaringType_k__BackingField;

  /// @brief Field <GetUnionCaseInfoFields>k__BackingField, offset 0x68, size 0x8
  __declspec(property(
      get = __cordl_internal_get__GetUnionCaseInfoFields_k__BackingField,
      put = __cordl_internal_set__GetUnionCaseInfoFields_k__BackingField)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* _GetUnionCaseInfoFields_k__BackingField;

  /// @brief Field <GetUnionCaseInfoName>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__GetUnionCaseInfoName_k__BackingField,
                      put = __cordl_internal_set__GetUnionCaseInfoName_k__BackingField)) ::System::Func_2<::System::Object*, ::System::Object*>* _GetUnionCaseInfoName_k__BackingField;

  /// @brief Field <GetUnionCaseInfoTag>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__GetUnionCaseInfoTag_k__BackingField,
                      put = __cordl_internal_set__GetUnionCaseInfoTag_k__BackingField)) ::System::Func_2<::System::Object*, ::System::Object*>* _GetUnionCaseInfoTag_k__BackingField;

  /// @brief Field <GetUnionCases>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__GetUnionCases_k__BackingField,
                      put = __cordl_internal_set__GetUnionCases_k__BackingField)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* _GetUnionCases_k__BackingField;

  /// @brief Field <IsUnion>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__IsUnion_k__BackingField,
                      put = __cordl_internal_set__IsUnion_k__BackingField)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* _IsUnion_k__BackingField;

  /// @brief Field <PreComputeUnionConstructor>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__PreComputeUnionConstructor_k__BackingField,
                      put = __cordl_internal_set__PreComputeUnionConstructor_k__BackingField)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*
      _PreComputeUnionConstructor_k__BackingField;

  /// @brief Field <PreComputeUnionReader>k__BackingField, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__PreComputeUnionReader_k__BackingField,
      put = __cordl_internal_set__PreComputeUnionReader_k__BackingField)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* _PreComputeUnionReader_k__BackingField;

  /// @brief Field <PreComputeUnionTagReader>k__BackingField, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__PreComputeUnionTagReader_k__BackingField,
      put =
          __cordl_internal_set__PreComputeUnionTagReader_k__BackingField)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* _PreComputeUnionTagReader_k__BackingField;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::Newtonsoft::Json::Utilities::FSharpUtils* _instance;

  /// @brief Field _mapType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mapType, put = __cordl_internal_set__mapType)) ::System::Type* _mapType;

  /// @brief Field _ofSeq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ofSeq, put = __cordl_internal_set__ofSeq)) ::System::Reflection::MethodInfo* _ofSeq;

  /// @brief Method BuildMapCreator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* BuildMapCreator();

  /// @brief Method CreateFSharpFuncCall, addr 0x5b79af4, size 0x200, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* CreateFSharpFuncCall(::System::Type* type, ::StringW methodName);

  /// @brief Method CreateMap, addr 0x5b7a060, size 0x1b4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* CreateMap(::System::Type* keyType, ::System::Type* valueType);

  /// @brief Method CreateSeq, addr 0x5b79f5c, size 0x104, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* CreateSeq(::System::Type* t);

  /// @brief Method EnsureInitialized, addr 0x5b79df0, size 0x168, virtual false, abstract: false, final false
  static inline void EnsureInitialized(::System::Reflection::Assembly* fsharpCoreAssembly);

  /// @brief Method GetMethodWithNonPublicFallback, addr 0x5b79a9c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetMethodWithNonPublicFallback(::System::Type* type, ::StringW methodName, ::System::Reflection::BindingFlags bindingFlags);

  static inline ::Newtonsoft::Json::Utilities::FSharpUtils* New_ctor(::System::Reflection::Assembly* fsharpCoreAssembly);

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__FSharpCoreAssembly_k__BackingField() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get__FSharpCoreAssembly_k__BackingField();

  constexpr ::System::Func_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__GetUnionCaseInfoDeclaringType_k__BackingField() const;

  constexpr ::System::Func_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__GetUnionCaseInfoDeclaringType_k__BackingField();

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__GetUnionCaseInfoFields_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__GetUnionCaseInfoFields_k__BackingField();

  constexpr ::System::Func_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__GetUnionCaseInfoName_k__BackingField() const;

  constexpr ::System::Func_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__GetUnionCaseInfoName_k__BackingField();

  constexpr ::System::Func_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__GetUnionCaseInfoTag_k__BackingField() const;

  constexpr ::System::Func_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__GetUnionCaseInfoTag_k__BackingField();

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__GetUnionCases_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__GetUnionCases_k__BackingField();

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__IsUnion_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__IsUnion_k__BackingField();

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__PreComputeUnionConstructor_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__PreComputeUnionConstructor_k__BackingField();

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__PreComputeUnionReader_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__PreComputeUnionReader_k__BackingField();

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__PreComputeUnionTagReader_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__PreComputeUnionTagReader_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__mapType() const;

  constexpr ::System::Type*& __cordl_internal_get__mapType();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__ofSeq() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__ofSeq();

  constexpr void __cordl_internal_set__FSharpCoreAssembly_k__BackingField(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set__GetUnionCaseInfoDeclaringType_k__BackingField(::System::Func_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__GetUnionCaseInfoFields_k__BackingField(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__GetUnionCaseInfoName_k__BackingField(::System::Func_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__GetUnionCaseInfoTag_k__BackingField(::System::Func_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__GetUnionCases_k__BackingField(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__IsUnion_k__BackingField(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__PreComputeUnionConstructor_k__BackingField(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__PreComputeUnionReader_k__BackingField(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__PreComputeUnionTagReader_k__BackingField(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__mapType(::System::Type* value);

  constexpr void __cordl_internal_set__ofSeq(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x5b7959c, size 0x500, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::Assembly* fsharpCoreAssembly);

  static inline ::System::Object* getStaticF_Lock();

  static inline ::Newtonsoft::Json::Utilities::FSharpUtils* getStaticF__instance();

  /// @brief Method get_FSharpCoreAssembly, addr 0x5b79d50, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* get_FSharpCoreAssembly();

  /// @brief Method get_GetUnionCaseInfoDeclaringType, addr 0x5b79db0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::System::Object*, ::System::Object*>* get_GetUnionCaseInfoDeclaringType();

  /// @brief Method get_GetUnionCaseInfoFields, addr 0x5b79de0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* get_GetUnionCaseInfoFields();

  /// @brief Method get_GetUnionCaseInfoName, addr 0x5b79dc0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::System::Object*, ::System::Object*>* get_GetUnionCaseInfoName();

  /// @brief Method get_GetUnionCaseInfoTag, addr 0x5b79dd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::System::Object*, ::System::Object*>* get_GetUnionCaseInfoTag();

  /// @brief Method get_GetUnionCases, addr 0x5b79d70, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* get_GetUnionCases();

  /// @brief Method get_Instance, addr 0x5b79cf4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::FSharpUtils* get_Instance();

  /// @brief Method get_IsUnion, addr 0x5b79d60, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* get_IsUnion();

  /// @brief Method get_PreComputeUnionConstructor, addr 0x5b79da0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* get_PreComputeUnionConstructor();

  /// @brief Method get_PreComputeUnionReader, addr 0x5b79d90, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* get_PreComputeUnionReader();

  /// @brief Method get_PreComputeUnionTagReader, addr 0x5b79d80, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* get_PreComputeUnionTagReader();

  static inline void setStaticF_Lock(::System::Object* value);

  static inline void setStaticF__instance(::Newtonsoft::Json::Utilities::FSharpUtils* value);

  /// @brief Method set_FSharpCoreAssembly, addr 0x5b79d58, size 0x8, virtual false, abstract: false, final false
  inline void set_FSharpCoreAssembly(::System::Reflection::Assembly* value);

  /// @brief Method set_GetUnionCaseInfoDeclaringType, addr 0x5b79db8, size 0x8, virtual false, abstract: false, final false
  inline void set_GetUnionCaseInfoDeclaringType(::System::Func_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_GetUnionCaseInfoFields, addr 0x5b79de8, size 0x8, virtual false, abstract: false, final false
  inline void set_GetUnionCaseInfoFields(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_GetUnionCaseInfoName, addr 0x5b79dc8, size 0x8, virtual false, abstract: false, final false
  inline void set_GetUnionCaseInfoName(::System::Func_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_GetUnionCaseInfoTag, addr 0x5b79dd8, size 0x8, virtual false, abstract: false, final false
  inline void set_GetUnionCaseInfoTag(::System::Func_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_GetUnionCases, addr 0x5b79d78, size 0x8, virtual false, abstract: false, final false
  inline void set_GetUnionCases(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_IsUnion, addr 0x5b79d68, size 0x8, virtual false, abstract: false, final false
  inline void set_IsUnion(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_PreComputeUnionConstructor, addr 0x5b79da8, size 0x8, virtual false, abstract: false, final false
  inline void set_PreComputeUnionConstructor(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_PreComputeUnionReader, addr 0x5b79d98, size 0x8, virtual false, abstract: false, final false
  inline void set_PreComputeUnionReader(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_PreComputeUnionTagReader, addr 0x5b79d88, size 0x8, virtual false, abstract: false, final false
  inline void set_PreComputeUnionTagReader(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FSharpUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FSharpUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FSharpUtils(FSharpUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FSharpUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FSharpUtils(FSharpUtils const&) = delete;

  /// @brief Field FSharpListTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString FSharpListTypeName{ u"FSharpList`1" };

  /// @brief Field FSharpMapTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString FSharpMapTypeName{ u"FSharpMap`2" };

  /// @brief Field FSharpSetTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString FSharpSetTypeName{ u"FSharpSet`1" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13396 };

  /// @brief Field _ofSeq, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____ofSeq;

  /// @brief Field _mapType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____mapType;

  /// @brief Field <FSharpCoreAssembly>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::Assembly* ____FSharpCoreAssembly_k__BackingField;

  /// @brief Field <IsUnion>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ____IsUnion_k__BackingField;

  /// @brief Field <GetUnionCases>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ____GetUnionCases_k__BackingField;

  /// @brief Field <PreComputeUnionTagReader>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ____PreComputeUnionTagReader_k__BackingField;

  /// @brief Field <PreComputeUnionReader>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ____PreComputeUnionReader_k__BackingField;

  /// @brief Field <PreComputeUnionConstructor>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ____PreComputeUnionConstructor_k__BackingField;

  /// @brief Field <GetUnionCaseInfoDeclaringType>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::System::Object*>* ____GetUnionCaseInfoDeclaringType_k__BackingField;

  /// @brief Field <GetUnionCaseInfoName>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::System::Object*>* ____GetUnionCaseInfoName_k__BackingField;

  /// @brief Field <GetUnionCaseInfoTag>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::System::Object*>* ____GetUnionCaseInfoTag_k__BackingField;

  /// @brief Field <GetUnionCaseInfoFields>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ____GetUnionCaseInfoFields_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____ofSeq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____mapType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____FSharpCoreAssembly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____IsUnion_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____GetUnionCases_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____PreComputeUnionTagReader_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____PreComputeUnionReader_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____PreComputeUnionConstructor_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____GetUnionCaseInfoDeclaringType_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____GetUnionCaseInfoName_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____GetUnionCaseInfoTag_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpUtils, ____GetUnionCaseInfoFields_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::FSharpUtils, 0x70>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::FSharpUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::FSharpUtils*, "Newtonsoft.Json.Utilities", "FSharpUtils");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::FSharpUtils___c__55_2, "Newtonsoft.Json.Utilities", "FSharpUtils/<>c__55`2");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass52_0*, "Newtonsoft.Json.Utilities", "FSharpUtils/<>c__DisplayClass52_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::FSharpUtils___c__DisplayClass55_0_2, "Newtonsoft.Json.Utilities", "FSharpUtils/<>c__DisplayClass55_0`2");
