#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/MemoryTraceWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MemoryTraceWriter)
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Diagnostics {
struct TraceLevel;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class MemoryTraceWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::MemoryTraceWriter);
// Type: Newtonsoft.Json.Serialization::MemoryTraceWriter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::MemoryTraceWriter*
class CORDL_TYPE MemoryTraceWriter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LevelFilter, put = set_LevelFilter)) ::System::Diagnostics::TraceLevel LevelFilter;

  /// @brief Field <LevelFilter>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__LevelFilter_k__BackingField, put = __cordl_internal_set__LevelFilter_k__BackingField)) ::System::Diagnostics::TraceLevel _LevelFilter_k__BackingField;

  /// @brief Field _lock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock)) ::System::Object* _lock;

  /// @brief Field _traceMessages, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__traceMessages, put = __cordl_internal_set__traceMessages)) ::System::Collections::Generic::Queue_1<::StringW>* _traceMessages;

  /// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
  constexpr operator ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept;

  /// @brief Method GetTraceMessages, addr 0x3e9c8e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetTraceMessages();

  static inline ::Newtonsoft::Json::Serialization::MemoryTraceWriter* New_ctor();

  /// @brief Method ToString, addr 0x3e9c8e8, size 0x2b4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Trace, addr 0x3e9c608, size 0x2d8, virtual true, abstract: false, final true
  inline void Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex);

  constexpr ::System::Diagnostics::TraceLevel const& __cordl_internal_get__LevelFilter_k__BackingField() const;

  constexpr ::System::Diagnostics::TraceLevel& __cordl_internal_get__LevelFilter_k__BackingField();

  constexpr ::System::Object*& __cordl_internal_get__lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__lock() const;

  constexpr ::System::Collections::Generic::Queue_1<::StringW>*& __cordl_internal_get__traceMessages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::StringW>*> const& __cordl_internal_get__traceMessages() const;

  constexpr void __cordl_internal_set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel value);

  constexpr void __cordl_internal_set__lock(::System::Object* value);

  constexpr void __cordl_internal_set__traceMessages(::System::Collections::Generic::Queue_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x3e9c554, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LevelFilter, addr 0x3e9c544, size 0x8, virtual true, abstract: false, final true
  inline ::System::Diagnostics::TraceLevel get_LevelFilter();

  /// @brief Convert to "::Newtonsoft::Json::Serialization::ITraceWriter"
  constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* i___Newtonsoft__Json__Serialization__ITraceWriter() noexcept;

  /// @brief Method set_LevelFilter, addr 0x3e9c54c, size 0x8, virtual false, abstract: false, final false
  inline void set_LevelFilter(::System::Diagnostics::TraceLevel value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryTraceWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryTraceWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryTraceWriter(MemoryTraceWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryTraceWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryTraceWriter(MemoryTraceWriter const&) = delete;

  /// @brief Field _traceMessages, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::StringW>* ____traceMessages;

  /// @brief Field _lock, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____lock;

  /// @brief Field <LevelFilter>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::System::Diagnostics::TraceLevel ____LevelFilter_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10314 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::MemoryTraceWriter, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::MemoryTraceWriter, ____traceMessages) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::MemoryTraceWriter, ____lock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::MemoryTraceWriter, ____LevelFilter_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::MemoryTraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::MemoryTraceWriter*, "Newtonsoft.Json.Serialization", "MemoryTraceWriter");
