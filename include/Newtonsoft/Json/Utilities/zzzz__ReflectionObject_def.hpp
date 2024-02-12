#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionObject)
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T, typename TResult> class MethodCall_2;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionMember;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_0;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_1;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Reflection {
class MethodBase;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_0;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_1;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_2;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ReflectionObject);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2);
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11760))
// CS Name: ::ReflectionObject::<>c__DisplayClass13_0*
class CORDL_TYPE __ReflectionObject____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctor, put = __cordl_internal_set_ctor))::System::Func_1<::System::Object*>* ctor;

  constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get_ctor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& __cordl_internal_get_ctor() const;

  constexpr void __cordl_internal_set_ctor(::System::Func_1<::System::Object*>* value);

  static inline ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor, addr 0x267e568, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Create>b__0, addr 0x267ea80, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _Create_b__0(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionObject____c__DisplayClass13_0(__ReflectionObject____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionObject____c__DisplayClass13_0(__ReflectionObject____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionObject____c__DisplayClass13_0();

public:
  /// @brief Field ctor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ___ctor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0, ___ctor) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass13_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11761))
// CS Name: ::ReflectionObject::<>c__DisplayClass13_1*
class CORDL_TYPE __ReflectionObject____c__DisplayClass13_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call))::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_call();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*> const& __cordl_internal_get_call() const;

  constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  static inline ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1* New_ctor();

  /// @brief Method .ctor, addr 0x267e84c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Create>b__1, addr 0x267eaa4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Object* _Create_b__1(::System::Object* target);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionObject____c__DisplayClass13_1(__ReflectionObject____c__DisplayClass13_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionObject____c__DisplayClass13_1(__ReflectionObject____c__DisplayClass13_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionObject____c__DisplayClass13_1();

public:
  /// @brief Field call, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1, ___call) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass13_2
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11762))
// CS Name: ::ReflectionObject::<>c__DisplayClass13_2*
class CORDL_TYPE __ReflectionObject____c__DisplayClass13_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call))::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_call();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*> const& __cordl_internal_get_call() const;

  constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  static inline ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2* New_ctor();

  /// @brief Method .ctor, addr 0x267e854, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Create>b__2, addr 0x267eb1c, size 0xb8, virtual false, abstract: false, final false
  inline void _Create_b__2(::System::Object* target, ::System::Object* arg);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionObject____c__DisplayClass13_2(__ReflectionObject____c__DisplayClass13_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionObject____c__DisplayClass13_2(__ReflectionObject____c__DisplayClass13_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionObject____c__DisplayClass13_2();

public:
  /// @brief Field call, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2, ___call) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ReflectionObject
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11763))
// CS Name: ::Newtonsoft.Json.Utilities::ReflectionObject*
class CORDL_TYPE ReflectionObject : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass13_2 = ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2;

  using __c__DisplayClass13_1 = ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1;

  using __c__DisplayClass13_0 = ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0;

  /// @brief Field <Creator>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Creator_k__BackingField,
                      put = __cordl_internal_set__Creator_k__BackingField))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _Creator_k__BackingField;

  /// @brief Field <Members>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Members_k__BackingField,
      put = __cordl_internal_set__Members_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* _Members_k__BackingField;

  __declspec(property(get = get_Creator, put = set_Creator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* Creator;

  __declspec(property(get = get_Members, put = set_Members))::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* Members;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __cordl_internal_get__Creator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __cordl_internal_get__Creator_k__BackingField() const;

  constexpr void __cordl_internal_set__Creator_k__BackingField(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>*& __cordl_internal_get__Members_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>*> const&
  __cordl_internal_get__Members_k__BackingField() const;

  constexpr void __cordl_internal_set__Members_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* value);

  /// @brief Method get_Creator, addr 0x267d934, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_Creator();

  /// @brief Method set_Creator, addr 0x267d93c, size 0x8, virtual false, abstract: false, final false
  inline void set_Creator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method get_Members, addr 0x267d944, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* get_Members();

  /// @brief Method set_Members, addr 0x267d94c, size 0x8, virtual false, abstract: false, final false
  inline void set_Members(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* value);

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* New_ctor();

  /// @brief Method .ctor, addr 0x267d954, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetValue, addr 0x267d9d4, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* target, ::StringW member);

  /// @brief Method SetValue, addr 0x267daa8, size 0xdc, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* target, ::StringW member, ::System::Object* value);

  /// @brief Method GetType, addr 0x267db84, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Type* GetType(::StringW member);

  /// @brief Method Create, addr 0x267dc38, size 0xc, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* t, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames);

  /// @brief Method Create, addr 0x267dc44, size 0x874, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* t, ::System::Reflection::MethodBase* creator, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames);

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionObject(ReflectionObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionObject(ReflectionObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionObject();

public:
  /// @brief Field <Creator>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____Creator_k__BackingField;

  /// @brief Field <Members>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* ____Members_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ReflectionObject, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionObject, ____Creator_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionObject, ____Members_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionObject*, "Newtonsoft.Json.Utilities", "ReflectionObject");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass13_0");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass13_1");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass13_2");
