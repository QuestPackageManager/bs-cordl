#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/DiagnosticsTraceWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DiagnosticsTraceWriter)
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Diagnostics {
struct TraceLevel;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DiagnosticsTraceWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter);
// Dependencies Newtonsoft.Json.Serialization.ITraceWriter, System.Diagnostics.TraceLevel, System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.DiagnosticsTraceWriter
class CORDL_TYPE DiagnosticsTraceWriter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LevelFilter, put = set_LevelFilter)) ::System::Diagnostics::TraceLevel LevelFilter;

  /// @brief Field <LevelFilter>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__LevelFilter_k__BackingField, put = __cordl_internal_set__LevelFilter_k__BackingField)) ::System::Diagnostics::TraceLevel _LevelFilter_k__BackingField;

  /// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
  constexpr operator ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept;

  /// @brief Method GetTraceEventType, addr 0x3ee63fc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Diagnostics::TraceEventType GetTraceEventType(::System::Diagnostics::TraceLevel level);

  static inline ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter* New_ctor();

  /// @brief Method Trace, addr 0x3ee6468, size 0x478, virtual true, abstract: false, final true
  inline void Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex);

  constexpr ::System::Diagnostics::TraceLevel const& __cordl_internal_get__LevelFilter_k__BackingField() const;

  constexpr ::System::Diagnostics::TraceLevel& __cordl_internal_get__LevelFilter_k__BackingField();

  constexpr void __cordl_internal_set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel value);

  /// @brief Method .ctor, addr 0x3ee68e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LevelFilter, addr 0x3ee63ec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Diagnostics::TraceLevel get_LevelFilter();

  /// @brief Convert to "::Newtonsoft::Json::Serialization::ITraceWriter"
  constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* i___Newtonsoft__Json__Serialization__ITraceWriter() noexcept;

  /// @brief Method set_LevelFilter, addr 0x3ee63f4, size 0x8, virtual false, abstract: false, final false
  inline void set_LevelFilter(::System::Diagnostics::TraceLevel value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticsTraceWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsTraceWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticsTraceWriter(DiagnosticsTraceWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsTraceWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticsTraceWriter(DiagnosticsTraceWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10300 };

  /// @brief Field <LevelFilter>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::Diagnostics::TraceLevel ____LevelFilter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter, ____LevelFilter_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*, "Newtonsoft.Json.Serialization", "DiagnosticsTraceWriter");
