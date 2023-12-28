#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MemoryTraceWriter)
namespace System::Diagnostics {
struct TraceLevel;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class MemoryTraceWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::MemoryTraceWriter);
// Type: Newtonsoft.Json.Serialization::MemoryTraceWriter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8942)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11908))
// CS Name: ::Newtonsoft.Json.Serialization::MemoryTraceWriter*
class CORDL_TYPE MemoryTraceWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _traceMessages, offset 0x10, size 0x8
  __declspec(property(get = __get__traceMessages, put = __set__traceMessages))::System::Collections::Generic::Queue_1<::StringW>* _traceMessages;

  /// @brief Field <LevelFilter>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__LevelFilter_k__BackingField, put = __set__LevelFilter_k__BackingField))::System::Diagnostics::TraceLevel _LevelFilter_k__BackingField;

  __declspec(property(get = get_LevelFilter, put = set_LevelFilter))::System::Diagnostics::TraceLevel LevelFilter;

  /// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
  constexpr operator ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept;

  constexpr ::System::Collections::Generic::Queue_1<::StringW>*& __get__traceMessages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::StringW>*> const& __get__traceMessages() const;

  constexpr void __set__traceMessages(::System::Collections::Generic::Queue_1<::StringW>* value);

  constexpr ::System::Diagnostics::TraceLevel& __get__LevelFilter_k__BackingField();

  constexpr ::System::Diagnostics::TraceLevel const& __get__LevelFilter_k__BackingField() const;

  constexpr void __set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel value);

  /// @brief Method get_LevelFilter addr 0x266a9cc size 0x8 virtual true final true
  inline ::System::Diagnostics::TraceLevel get_LevelFilter();

  /// @brief Method set_LevelFilter addr 0x266a9d4 size 0x8 virtual false final false
  inline void set_LevelFilter(::System::Diagnostics::TraceLevel value);

  static inline ::Newtonsoft::Json::Serialization::MemoryTraceWriter* New_ctor();

  /// @brief Method .ctor addr 0x266a9dc size 0x88 virtual false final false
  inline void _ctor();

  /// @brief Method Trace addr 0x266aa64 size 0x230 virtual true final true
  inline void Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex);

  /// @brief Method GetTraceMessages addr 0x266ac94 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetTraceMessages();

  /// @brief Method ToString addr 0x266ac9c size 0x1b8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "MemoryTraceWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryTraceWriter(MemoryTraceWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryTraceWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryTraceWriter(MemoryTraceWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryTraceWriter();

public:
  /// @brief Field _traceMessages, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::StringW>* ____traceMessages;

  /// @brief Field <LevelFilter>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::Diagnostics::TraceLevel ____LevelFilter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::MemoryTraceWriter, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::MemoryTraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::MemoryTraceWriter*, "Newtonsoft.Json.Serialization", "MemoryTraceWriter");
