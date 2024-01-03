#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__TypeFilterLevel_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BinaryFormatter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Remoting::Messaging {
class HeaderHandler;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class TypeInformation;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace System::Runtime::Serialization {
class IFormatter;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryFormatter
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3242)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3235)),
// TypeDefinitionIndex(TypeDefinitionIndex(3240)), TypeDefinitionIndex(TypeDefinitionIndex(3241))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3278)) CS Name:
// ::System.Runtime.Serialization.Formatters.Binary::BinaryFormatter*
class CORDL_TYPE BinaryFormatter : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_surrogates, offset 0x10, size 0x8
  __declspec(property(get = __get_m_surrogates, put = __set_m_surrogates))::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;

  /// @brief Field m_context, offset 0x18, size 0x10
  __declspec(property(get = __get_m_context, put = __set_m_context))::System::Runtime::Serialization::StreamingContext m_context;

  /// @brief Field m_binder, offset 0x28, size 0x8
  __declspec(property(get = __get_m_binder, put = __set_m_binder))::System::Runtime::Serialization::SerializationBinder* m_binder;

  /// @brief Field m_typeFormat, offset 0x30, size 0x4
  __declspec(property(get = __get_m_typeFormat, put = __set_m_typeFormat))::System::Runtime::Serialization::Formatters::FormatterTypeStyle m_typeFormat;

  /// @brief Field m_assemblyFormat, offset 0x34, size 0x4
  __declspec(property(get = __get_m_assemblyFormat, put = __set_m_assemblyFormat))::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle m_assemblyFormat;

  /// @brief Field m_securityLevel, offset 0x38, size 0x4
  __declspec(property(get = __get_m_securityLevel, put = __set_m_securityLevel))::System::Runtime::Serialization::Formatters::TypeFilterLevel m_securityLevel;

  /// @brief Field m_crossAppDomainArray, offset 0x40, size 0x8
  __declspec(property(get = __get_m_crossAppDomainArray, put = __set_m_crossAppDomainArray))::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_crossAppDomainArray;

  /// @brief Field typeNameCache, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_typeNameCache,
               put = setStaticF_typeNameCache))::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* typeNameCache;

  __declspec(property(put = set_AssemblyFormat))::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle AssemblyFormat;

  __declspec(property(put = set_SurrogateSelector))::System::Runtime::Serialization::ISurrogateSelector* SurrogateSelector;

  __declspec(property(put = set_Binder))::System::Runtime::Serialization::SerializationBinder* Binder;

  /// @brief Convert operator to "::System::Runtime::Serialization::IFormatter"
  constexpr operator ::System::Runtime::Serialization::IFormatter*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IFormatter"
  constexpr ::System::Runtime::Serialization::IFormatter* i___System__Runtime__Serialization__IFormatter() noexcept;

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __get_m_surrogates();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const& __get_m_surrogates() const;

  constexpr void __set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __get_m_context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __get_m_context() const;

  constexpr void __set_m_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __get_m_binder();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> const& __get_m_binder() const;

  constexpr void __set_m_binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& __get_m_typeFormat();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& __get_m_typeFormat() const;

  constexpr void __set_m_typeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value);

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& __get_m_assemblyFormat();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const& __get_m_assemblyFormat() const;

  constexpr void __set_m_assemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel& __get_m_securityLevel();

  constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel const& __get_m_securityLevel() const;

  constexpr void __set_m_securityLevel(::System::Runtime::Serialization::Formatters::TypeFilterLevel value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_m_crossAppDomainArray();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_m_crossAppDomainArray() const;

  constexpr void __set_m_crossAppDomainArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline void setStaticF_typeNameCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* getStaticF_typeNameCache();

  /// @brief Method set_AssemblyFormat, addr 0x24c5dd0, size 0x8, virtual false, abstract: false, final false
  inline void set_AssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  /// @brief Method set_SurrogateSelector, addr 0x24c5dd8, size 0x8, virtual true, abstract: false, final true
  inline void set_SurrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value);

  /// @brief Method set_Binder, addr 0x24c5de0, size 0x8, virtual true, abstract: false, final true
  inline void set_Binder(::System::Runtime::Serialization::SerializationBinder* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* New_ctor();

  /// @brief Method .ctor, addr 0x24c5de8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector,
                                                                                                ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x24c5e1c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Deserialize, addr 0x24c5e68, size 0xc, virtual true, abstract: false, final true
  inline ::System::Object* Deserialize(::System::IO::Stream* serializationStream);

  /// @brief Method Deserialize, addr 0x24c5e7c, size 0x24c, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::System::IO::Stream* serializationStream, ::System::Runtime::Remoting::Messaging::HeaderHandler* handler, bool fCheck);

  /// @brief Method Deserialize, addr 0x24c5e74, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Deserialize(::System::IO::Stream* serializationStream, ::System::Runtime::Remoting::Messaging::HeaderHandler* handler);

  /// @brief Method Serialize, addr 0x24c60c8, size 0xc, virtual true, abstract: false, final true
  inline void Serialize(::System::IO::Stream* serializationStream, ::System::Object* graph);

  /// @brief Method Serialize, addr 0x24c60d4, size 0x8, virtual true, abstract: false, final true
  inline void Serialize(::System::IO::Stream* serializationStream, ::System::Object* graph,
                        ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> headers);

  /// @brief Method Serialize, addr 0x24c60dc, size 0x1f8, virtual false, abstract: false, final false
  inline void Serialize(::System::IO::Stream* serializationStream, ::System::Object* graph,
                        ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> headers, bool fCheck);

  /// @brief Method GetTypeInformation, addr 0x24c638c, size 0x25c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::TypeInformation* GetTypeInformation(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "BinaryFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryFormatter(BinaryFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryFormatter(BinaryFormatter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryFormatter();

public:
  /// @brief Field m_surrogates, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ___m_surrogates;

  /// @brief Field m_context, offset: 0x18, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___m_context;

  /// @brief Field m_binder, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ___m_binder;

  /// @brief Field m_typeFormat, offset: 0x30, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::FormatterTypeStyle ___m_typeFormat;

  /// @brief Field m_assemblyFormat, offset: 0x34, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle ___m_assemblyFormat;

  /// @brief Field m_securityLevel, offset: 0x38, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::TypeFilterLevel ___m_securityLevel;

  /// @brief Field m_crossAppDomainArray, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___m_crossAppDomainArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, ___m_surrogates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, ___m_context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, ___m_binder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, ___m_typeFormat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, ___m_assemblyFormat) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, ___m_securityLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, ___m_crossAppDomainArray) == 0x40, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
