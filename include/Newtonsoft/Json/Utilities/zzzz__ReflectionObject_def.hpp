#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\ReflectionObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class ReflectionObject___c__DisplayClass11_0;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject___c__DisplayClass11_1;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject___c__DisplayClass11_2;
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
class ReflectionObject___c__DisplayClass11_0;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject___c__DisplayClass11_1;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject___c__DisplayClass11_2;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::ReflectionObject*);
MARK_REF_T(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_0*);
MARK_REF_T(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_1*);
MARK_REF_T(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_2*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::ReflectionObject*, "Newtonsoft.Json.Utilities", "ReflectionObject");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_0*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass11_0");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_1*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass11_1");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_2*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass11_2");
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0
class CORDL_TYPE ReflectionObject___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctor, put = __cordl_internal_set_ctor)) ::System::Func_1<::System::Object*>* ctor;

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_0* New_ctor();

  /// @brief Method <Create>b__0, addr 0x5d2f308, size 0x20, virtual false, abstract: false, final false
  inline ::System::Object* _Create_b__0(::ArrayW<::System::Object*> args);

  constexpr ::System::Func_1<::System::Object*>* const& __cordl_internal_get_ctor() const;

  constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get_ctor();

  constexpr void __cordl_internal_set_ctor(::System::Func_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5d2edc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionObject___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionObject___c__DisplayClass11_0(ReflectionObject___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionObject___c__DisplayClass11_0(ReflectionObject___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13449 };

  /// @brief Field ctor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ___ctor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_0, ___ctor) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_0) == 0x18, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1
class CORDL_TYPE ReflectionObject___c__DisplayClass11_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call;

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_1* New_ctor();

  /// @brief Method <Create>b__1, addr 0x5d2f328, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Object* _Create_b__1(::System::Object* target);

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get_call() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_call();

  constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5d2f0c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionObject___c__DisplayClass11_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject___c__DisplayClass11_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionObject___c__DisplayClass11_1(ReflectionObject___c__DisplayClass11_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject___c__DisplayClass11_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionObject___c__DisplayClass11_1(ReflectionObject___c__DisplayClass11_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13450 };

  /// @brief Field call, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_1, ___call) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_1) == 0x18, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2
class CORDL_TYPE ReflectionObject___c__DisplayClass11_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call;

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_2* New_ctor();

  /// @brief Method <Create>b__2, addr 0x5d2f3ec, size 0xbc, virtual false, abstract: false, final false
  inline void _Create_b__2(::System::Object* target, ::System::Object* arg);

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get_call() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_call();

  constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5d2f0c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionObject___c__DisplayClass11_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject___c__DisplayClass11_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionObject___c__DisplayClass11_2(ReflectionObject___c__DisplayClass11_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject___c__DisplayClass11_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionObject___c__DisplayClass11_2(ReflectionObject___c__DisplayClass11_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13451 };

  /// @brief Field call, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_2, ___call) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_2) == 0x18, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ReflectionObject
class CORDL_TYPE ReflectionObject : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_0;

  using __c__DisplayClass11_1 = ::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_1;

  using __c__DisplayClass11_2 = ::Newtonsoft::Json::Utilities::ReflectionObject___c__DisplayClass11_2;

  __declspec(property(get = get_Creator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* Creator;

  __declspec(property(get = get_Members)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* Members;

  /// @brief Field <Creator>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Creator_k__BackingField,
                      put = __cordl_internal_set__Creator_k__BackingField)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _Creator_k__BackingField;

  /// @brief Field <Members>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Members_k__BackingField,
      put = __cordl_internal_set__Members_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* _Members_k__BackingField;

  /// @brief Method Create, addr 0x5d2e49c, size 0x820, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* t, ::System::Reflection::MethodBase* creator, ::ArrayW<::StringW> memberNames);

  /// @brief Method Create, addr 0x5d2e490, size 0xc, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* t, ::ArrayW<::StringW> memberNames);

  /// @brief Method GetType, addr 0x5d2e3d0, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Type* GetType(::StringW member);

  /// @brief Method GetValue, addr 0x5d2e210, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* target, ::StringW member);

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* New_ctor(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* creator);

  /// @brief Method SetValue, addr 0x5d2e2e8, size 0xe8, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* target, ::StringW member, ::System::Object* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& __cordl_internal_get__Creator_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __cordl_internal_get__Creator_k__BackingField();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* const& __cordl_internal_get__Members_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>*& __cordl_internal_get__Members_k__BackingField();

  constexpr void __cordl_internal_set__Creator_k__BackingField(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__Members_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* value);

  /// @brief Method .ctor, addr 0x5d2e16c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* creator);

  /// @brief Method get_Creator, addr 0x5d2e15c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_Creator();

  /// @brief Method get_Members, addr 0x5d2e164, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* get_Members();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionObject(ReflectionObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionObject(ReflectionObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13452 };

  /// @brief Field <Creator>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____Creator_k__BackingField;

  /// @brief Field <Members>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* ____Members_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionObject, ____Creator_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionObject, ____Members_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Utilities::ReflectionObject) == 0x20, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
