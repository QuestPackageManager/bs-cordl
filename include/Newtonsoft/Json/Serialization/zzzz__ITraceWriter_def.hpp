#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ITraceWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ITraceWriter)
namespace System::Diagnostics {
struct TraceLevel;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ITraceWriter);
// Type: Newtonsoft.Json.Serialization::ITraceWriter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::ITraceWriter*
class CORDL_TYPE ITraceWriter {
public:
  // Declarations
  __declspec(property(get = get_LevelFilter)) ::System::Diagnostics::TraceLevel LevelFilter;

  /// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex);

  /// @brief Method get_LevelFilter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Diagnostics::TraceLevel get_LevelFilter();

  // Ctor Parameters [CppParam { name: "", ty: "ITraceWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITraceWriter(ITraceWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITraceWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITraceWriter(ITraceWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10279 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ITraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ITraceWriter*, "Newtonsoft.Json.Serialization", "ITraceWriter");
