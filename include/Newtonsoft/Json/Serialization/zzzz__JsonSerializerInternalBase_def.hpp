#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalBase)
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Utilities {
template <typename TFirst, typename TSecond> class BidirectionalDictionary_2;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalBase;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer);
// Type: ::ReferenceEqualsEqualityComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11949))
// CS Name: ::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer*
class CORDL_TYPE __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*() noexcept;

  /// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.Equals addr 0x267b804 size 0xc virtual true final true
  inline bool System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode addr 0x267b810 size 0xc virtual true final true
  inline int32_t System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object* obj);

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer* New_ctor();

  /// @brief Method .ctor addr 0x267b304 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer(__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer(__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonSerializerInternalBase
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11950))
// CS Name: ::Newtonsoft.Json.Serialization::JsonSerializerInternalBase*
class CORDL_TYPE JsonSerializerInternalBase : public ::System::Object {
public:
  // Declarations
  using ReferenceEqualsEqualityComparer = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer;

  /// @brief Field _currentErrorContext, offset 0x10, size 0x8
  __declspec(property(get = __get__currentErrorContext, put = __set__currentErrorContext))::Newtonsoft::Json::Serialization::ErrorContext* _currentErrorContext;

  /// @brief Field _mappings, offset 0x18, size 0x8
  __declspec(property(get = __get__mappings, put = __set__mappings))::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* _mappings;

  /// @brief Field Serializer, offset 0x20, size 0x8
  __declspec(property(get = __get_Serializer, put = __set_Serializer))::Newtonsoft::Json::JsonSerializer* Serializer;

  /// @brief Field TraceWriter, offset 0x28, size 0x8
  __declspec(property(get = __get_TraceWriter, put = __set_TraceWriter))::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter;

  /// @brief Field InternalSerializer, offset 0x30, size 0x8
  __declspec(property(get = __get_InternalSerializer, put = __set_InternalSerializer))::Newtonsoft::Json::Serialization::JsonSerializerProxy* InternalSerializer;

  __declspec(property(get = get_DefaultReferenceMappings))::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* DefaultReferenceMappings;

  constexpr ::Newtonsoft::Json::Serialization::ErrorContext*& __get__currentErrorContext();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ErrorContext*> const& __get__currentErrorContext() const;

  constexpr void __set__currentErrorContext(::Newtonsoft::Json::Serialization::ErrorContext* value);

  constexpr ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>*& __get__mappings();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>*> const& __get__mappings() const;

  constexpr void __set__mappings(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* value);

  constexpr ::Newtonsoft::Json::JsonSerializer*& __get_Serializer();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonSerializer*> const& __get_Serializer() const;

  constexpr void __set_Serializer(::Newtonsoft::Json::JsonSerializer* value);

  constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& __get_TraceWriter();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ITraceWriter*> const& __get_TraceWriter() const;

  constexpr void __set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  constexpr ::Newtonsoft::Json::Serialization::JsonSerializerProxy*& __get_InternalSerializer();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonSerializerProxy*> const& __get_InternalSerializer() const;

  constexpr void __set_InternalSerializer(::Newtonsoft::Json::Serialization::JsonSerializerProxy* value);

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* New_ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor addr 0x267b27c size 0x88 virtual false final false
  inline void _ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method get_DefaultReferenceMappings addr 0x266e8cc size 0x110 virtual false final false
  inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* get_DefaultReferenceMappings();

  /// @brief Method GetErrorContext addr 0x267b30c size 0xec virtual false final false
  inline ::Newtonsoft::Json::Serialization::ErrorContext* GetErrorContext(::System::Object* currentObject, ::System::Object* member, ::StringW path, ::System::Exception* error);

  /// @brief Method ClearErrorContext addr 0x267b3f8 size 0x64 virtual false final false
  inline void ClearErrorContext();

  /// @brief Method IsErrorHandled addr 0x267b45c size 0x3a8 virtual false final false
  inline bool IsErrorHandled(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* keyValue, ::Newtonsoft::Json::IJsonLineInfo* lineInfo,
                             ::StringW path, ::System::Exception* ex);

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalBase(JsonSerializerInternalBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalBase(JsonSerializerInternalBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalBase();

public:
  /// @brief Field _currentErrorContext, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ErrorContext* ____currentErrorContext;

  /// @brief Field _mappings, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* ____mappings;

  /// @brief Field Serializer, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonSerializer* ___Serializer;

  /// @brief Field TraceWriter, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ITraceWriter* ___TraceWriter;

  /// @brief Field InternalSerializer, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonSerializerProxy* ___InternalSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer*, "Newtonsoft.Json.Serialization",
                       "JsonSerializerInternalBase/ReferenceEqualsEqualityComparer");
