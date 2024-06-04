#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalReader)
namespace Newtonsoft::Json::Linq {
class JTokenReader;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonDynamicContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader__CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
struct __JsonSerializerInternalReader__PropertyPresence;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader____c;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader____c__DisplayClass38_0;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::Globalization {
class CultureInfo;
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
namespace Newtonsoft::Json::Serialization {
struct __JsonSerializerInternalReader__PropertyPresence;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader__CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader____c;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader____c__DisplayClass38_0;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass38_0);
// Type: ::PropertyPresence
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// CS Name: ::JsonSerializerInternalReader::PropertyPresence
struct CORDL_TYPE __JsonSerializerInternalReader__PropertyPresence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JsonSerializerInternalReader__PropertyPresence_Unwrapped
  enum struct ____JsonSerializerInternalReader__PropertyPresence_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Null = static_cast<int32_t>(0x1),
    __E_Value = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JsonSerializerInternalReader__PropertyPresence_Unwrapped() const noexcept {
    return static_cast<____JsonSerializerInternalReader__PropertyPresence_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalReader__PropertyPresence();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JsonSerializerInternalReader__PropertyPresence(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence const None;

  /// @brief Field Null value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence const Null;

  /// @brief Field Value value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence const Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::CreatorPropertyContext
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::JsonSerializerInternalReader::CreatorPropertyContext*
class CORDL_TYPE __JsonSerializerInternalReader__CreatorPropertyContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConstructorProperty, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ConstructorProperty, put = __cordl_internal_set_ConstructorProperty))::Newtonsoft::Json::Serialization::JsonProperty* ConstructorProperty;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  /// @brief Field Presence, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Presence,
                      put = __cordl_internal_set_Presence))::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> Presence;

  /// @brief Field Property, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Property, put = __cordl_internal_set_Property))::Newtonsoft::Json::Serialization::JsonProperty* Property;

  /// @brief Field Used, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_Used, put = __cordl_internal_set_Used)) bool Used;

  /// @brief Field Value, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value))::System::Object* Value;

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext* New_ctor(::StringW name);

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_ConstructorProperty();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const& __cordl_internal_get_ConstructorProperty() const;

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> const& __cordl_internal_get_Presence() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>& __cordl_internal_get_Presence();

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_Property();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const& __cordl_internal_get_Property() const;

  constexpr bool const& __cordl_internal_get_Used() const;

  constexpr bool& __cordl_internal_get_Used();

  constexpr ::System::Object*& __cordl_internal_get_Value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_Value() const;

  constexpr void __cordl_internal_set_ConstructorProperty(::Newtonsoft::Json::Serialization::JsonProperty* value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Presence(::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> value);

  constexpr void __cordl_internal_set_Property(::Newtonsoft::Json::Serialization::JsonProperty* value);

  constexpr void __cordl_internal_set_Used(bool value);

  constexpr void __cordl_internal_set_Value(::System::Object* value);

  /// @brief Method .ctor, addr 0x2a5b820, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalReader__CreatorPropertyContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader__CreatorPropertyContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerInternalReader__CreatorPropertyContext(__JsonSerializerInternalReader__CreatorPropertyContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader__CreatorPropertyContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerInternalReader__CreatorPropertyContext(__JsonSerializerInternalReader__CreatorPropertyContext const&) = delete;

  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Property, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___Property;

  /// @brief Field ConstructorProperty, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___ConstructorProperty;

  /// @brief Field Presence, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> ___Presence;

  /// @brief Field Value, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___Value;

  /// @brief Field Used, offset: 0x38, size: 0x1, def value: None
  bool ___Used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext, ___Property) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext, ___ConstructorProperty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext, ___Presence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext, ___Value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext, ___Used) == 0x38, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::JsonSerializerInternalReader::<>c*
class CORDL_TYPE __JsonSerializerInternalReader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* __9;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0))::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* __9__38_0;

  /// @brief Field <>9__38_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__38_2, put = setStaticF___9__38_2))::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* __9__38_2;

  /// @brief Field <>9__42_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__42_0,
                             put = setStaticF___9__42_0))::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* __9__42_0;

  /// @brief Field <>9__42_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__42_1,
      put = setStaticF___9__42_1))::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* __9__42_1;

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* New_ctor();

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__38_0, addr 0x2a5b8b4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _CreateObjectUsingCreatorWithParameters_b__38_0(::Newtonsoft::Json::Serialization::JsonProperty* p);

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__38_2, addr 0x2a5b8cc, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _CreateObjectUsingCreatorWithParameters_b__38_2(::Newtonsoft::Json::Serialization::JsonProperty* p);

  /// @brief Method <PopulateObject>b__42_0, addr 0x2a5b8e4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonProperty* _PopulateObject_b__42_0(::Newtonsoft::Json::Serialization::JsonProperty* m);

  /// @brief Method <PopulateObject>b__42_1, addr 0x2a5b8ec, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence _PopulateObject_b__42_1(::Newtonsoft::Json::Serialization::JsonProperty* m);

  /// @brief Method .ctor, addr 0x2a5b8ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* getStaticF___9__38_0();

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* getStaticF___9__38_2();

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* getStaticF___9__42_0();

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* getStaticF___9__42_1();

  static inline void setStaticF___9(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* value);

  static inline void setStaticF___9__38_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value);

  static inline void setStaticF___9__38_2(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value);

  static inline void setStaticF___9__42_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* value);

  static inline void
  setStaticF___9__42_1(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalReader____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerInternalReader____c(__JsonSerializerInternalReader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerInternalReader____c(__JsonSerializerInternalReader____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::<>c__DisplayClass38_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::JsonSerializerInternalReader::<>c__DisplayClass38_0*
class CORDL_TYPE __JsonSerializerInternalReader____c__DisplayClass38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field property, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_property, put = __cordl_internal_set_property))::Newtonsoft::Json::Serialization::JsonProperty* property;

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass38_0* New_ctor();

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__1, addr 0x2a5b8fc, size 0x24, virtual false, abstract: false, final false
  inline bool _CreateObjectUsingCreatorWithParameters_b__1(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext* p);

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_property();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const& __cordl_internal_get_property() const;

  constexpr void __cordl_internal_set_property(::Newtonsoft::Json::Serialization::JsonProperty* value);

  /// @brief Method .ctor, addr 0x2a5b8f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalReader____c__DisplayClass38_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerInternalReader____c__DisplayClass38_0(__JsonSerializerInternalReader____c__DisplayClass38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerInternalReader____c__DisplayClass38_0(__JsonSerializerInternalReader____c__DisplayClass38_0 const&) = delete;

  /// @brief Field property, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass38_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass38_0, ___property) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonSerializerInternalReader
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::JsonSerializerInternalReader*
class CORDL_TYPE JsonSerializerInternalReader : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
  // Declarations
  using CreatorPropertyContext = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext;

  using PropertyPresence = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence;

  using __c = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c;

  using __c__DisplayClass38_0 = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass38_0;

  /// @brief Method AddReference, addr 0x2a57108, size 0x3c0, virtual false, abstract: false, final false
  inline void AddReference(::Newtonsoft::Json::JsonReader* reader, ::StringW id, ::System::Object* value);

  /// @brief Method CalculatePropertyDetails, addr 0x2a56a84, size 0x57c, virtual false, abstract: false, final false
  inline bool CalculatePropertyDetails(::Newtonsoft::Json::Serialization::JsonProperty* property, ByRef<::Newtonsoft::Json::JsonConverter*> propertyConverter,
                                       ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                       ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target, ByRef<bool> useExistingValue, ByRef<::System::Object*> currentValue,
                                       ByRef<::Newtonsoft::Json::Serialization::JsonContract*> propertyContract, ByRef<bool> gottenCurrentValue, ByRef<bool> ignoredValue);

  /// @brief Method CheckPropertyName, addr 0x2a51af0, size 0x11c, virtual false, abstract: false, final false
  inline bool CheckPropertyName(::Newtonsoft::Json::JsonReader* reader, ::StringW memberName);

  /// @brief Method CoerceEmptyStringToNull, addr 0x2a532e0, size 0x134, virtual false, abstract: false, final false
  static inline bool CoerceEmptyStringToNull(::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::StringW s);

  /// @brief Method CreateDynamic, addr 0x2a547ec, size 0x658, virtual false, abstract: false, final false
  inline ::System::Object* CreateDynamic(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonDynamicContract* contract,
                                         ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id);

  /// @brief Method CreateISerializable, addr 0x2a54e44, size 0x69c, virtual false, abstract: false, final false
  inline ::System::Object* CreateISerializable(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id);

  /// @brief Method CreateISerializableItem, addr 0x2a4c964, size 0x124, virtual false, abstract: false, final false
  inline ::System::Object* CreateISerializableItem(::Newtonsoft::Json::Linq::JToken* token, ::System::Type* type, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                   ::Newtonsoft::Json::Serialization::JsonProperty* member);

  /// @brief Method CreateJObject, addr 0x2a5179c, size 0x354, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CreateJObject(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method CreateJToken, addr 0x2a51390, size 0x40c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CreateJToken(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method CreateList, addr 0x2a526f8, size 0x638, virtual false, abstract: false, final false
  inline ::System::Object* CreateList(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                      ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::Object* existingValue, ::StringW id);

  /// @brief Method CreateNewDictionary, addr 0x2a545c0, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* CreateNewDictionary(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                                                 ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method CreateNewList, addr 0x2a55c4c, size 0x284, virtual false, abstract: false, final false
  inline ::System::Collections::IList* CreateNewList(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method CreateNewObject, addr 0x2a543ac, size 0x214, virtual false, abstract: false, final false
  inline ::System::Object* CreateNewObject(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* objectContract,
                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id,
                                           ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method CreateObject, addr 0x2a51c0c, size 0xaec, virtual false, abstract: false, final false
  inline ::System::Object* CreateObject(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue);

  /// @brief Method CreateObjectUsingCreatorWithParameters, addr 0x2a57a58, size 0x1ce4, virtual false, abstract: false, final false
  inline ::System::Object* CreateObjectUsingCreatorWithParameters(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                                                  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* creator, ::StringW id);

  /// @brief Method CreateValueInternal, addr 0x2a50dd8, size 0x4d8, virtual false, abstract: false, final false
  inline ::System::Object* CreateValueInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue);

  /// @brief Method Deserialize, addr 0x2a50618, size 0x340, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, bool checkAdditionalContent);

  /// @brief Method DeserializeConvertable, addr 0x2a509c4, size 0x414, virtual false, abstract: false, final false
  inline ::System::Object* DeserializeConvertable(::Newtonsoft::Json::JsonConverter* converter, ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue);

  /// @brief Method EndProcessProperty, addr 0x2a59dcc, size 0x4a4, virtual false, abstract: false, final false
  inline void EndProcessProperty(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, int32_t initialDepth,
                                 ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence presence,
                                 bool setDefaultValue);

  /// @brief Method EnsureArrayContract, addr 0x2a55ad4, size 0x178, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonArrayContract* EnsureArrayContract(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType,
                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method EnsureType, addr 0x2a52d30, size 0x5b0, virtual false, abstract: false, final false
  inline ::System::Object* EnsureType(::Newtonsoft::Json::JsonReader* reader, ::System::Object* value, ::System::Globalization::CultureInfo* culture,
                                      ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Type* targetType);

  /// @brief Method GetContract, addr 0x2a50568, size 0xb0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* GetContract(::System::Type* type);

  /// @brief Method GetContractSafe, addr 0x2a504dc, size 0x8c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Type* type);

  /// @brief Method GetConverter, addr 0x2a50958, size 0x6c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverter* GetConverter(::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::JsonConverter* memberConverter,
                                                         ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                         ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method GetExpectedDescription, addr 0x2a53414, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method GetInternalSerializer, addr 0x2a51320, size 0x70, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer();

  /// @brief Method HandleError, addr 0x2a512b0, size 0x70, virtual false, abstract: false, final false
  inline void HandleError(::Newtonsoft::Json::JsonReader* reader, bool readPastError, int32_t initialDepth);

  /// @brief Method HasFlag, addr 0x2a570fc, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag);

  /// @brief Method HasNoDefinedType, addr 0x2a542b0, size 0xfc, virtual false, abstract: false, final false
  inline bool HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract* contract);

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* New_ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method OnDeserialized, addr 0x2a576f4, size 0x22c, virtual false, abstract: false, final false
  inline void OnDeserialized(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method OnDeserializing, addr 0x2a574c8, size 0x22c, virtual false, abstract: false, final false
  inline void OnDeserializing(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method Populate, addr 0x2a4e630, size 0x534, virtual false, abstract: false, final false
  inline void Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method PopulateDictionary, addr 0x2a4f09c, size 0x9c4, virtual false, abstract: false, final false
  inline ::System::Object* PopulateDictionary(::System::Collections::IDictionary* dictionary, ::Newtonsoft::Json::JsonReader* reader,
                                              ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method PopulateList, addr 0x2a4eb64, size 0x538, virtual false, abstract: false, final false
  inline ::System::Object* PopulateList(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method PopulateMultidimensionalArray, addr 0x2a55ed0, size 0x6e0, virtual false, abstract: false, final false
  inline ::System::Object* PopulateMultidimensionalArray(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                         ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method PopulateObject, addr 0x2a4fa60, size 0xa7c, virtual false, abstract: false, final false
  inline ::System::Object* PopulateObject(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id);

  /// @brief Method ReadExtensionDataValue, addr 0x2a5a270, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Object* ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                  ::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadMetadataProperties, addr 0x2a53c0c, size 0x6a4, virtual false, abstract: false, final false
  inline bool ReadMetadataProperties(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Type*> objectType, ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                     ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                     ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue, ByRef<::System::Object*> newValue, ByRef<::StringW> id);

  /// @brief Method ReadMetadataPropertiesToken, addr 0x2a534d4, size 0x738, virtual false, abstract: false, final false
  inline bool ReadMetadataPropertiesToken(::Newtonsoft::Json::Linq::JTokenReader* reader, ByRef<::System::Type*> objectType, ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue, ByRef<::System::Object*> newValue, ByRef<::StringW> id);

  /// @brief Method ResolvePropertyAndCreatorValues, addr 0x2a5973c, size 0x690, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>*
  ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                  ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType);

  /// @brief Method ResolveTypeName, addr 0x2a554e0, size 0x5f4, virtual false, abstract: false, final false
  inline void ResolveTypeName(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Type*> objectType, ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::StringW qualifiedTypeName);

  /// @brief Method SetExtensionData, addr 0x2a5a32c, size 0x170, virtual false, abstract: false, final false
  inline void SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::JsonReader* reader,
                               ::StringW memberName, ::System::Object* o);

  /// @brief Method SetPropertyPresence, addr 0x2a5a710, size 0x1110, virtual false, abstract: false, final false
  inline void SetPropertyPresence(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                  ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                               ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* requiredProperties);

  /// @brief Method SetPropertyValue, addr 0x2a565b0, size 0x4d4, virtual false, abstract: false, final false
  inline bool SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::JsonConverter* propertyConverter,
                               ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                               ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method ShouldDeserialize, addr 0x2a5a49c, size 0x274, virtual false, abstract: false, final false
  inline bool ShouldDeserialize(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target);

  /// @brief Method ShouldSetPropertyValue, addr 0x2a57000, size 0xfc, virtual false, abstract: false, final false
  inline bool ShouldSetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::System::Object* value);

  /// @brief Method ThrowUnexpectedEndException, addr 0x2a57920, size 0x138, virtual false, abstract: false, final false
  inline void ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* currentObject, ::StringW message);

  /// @brief Method .ctor, addr 0x2a4e62c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonSerializer* serializer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalReader(JsonSerializerInternalReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalReader(JsonSerializerInternalReader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/PropertyPresence");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*, "Newtonsoft.Json.Serialization",
                       "JsonSerializerInternalReader/CreatorPropertyContext");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass38_0*, "Newtonsoft.Json.Serialization",
                       "JsonSerializerInternalReader/<>c__DisplayClass38_0");
