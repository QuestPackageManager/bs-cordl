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
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.ITraceWriter
class CORDL_TYPE ITraceWriter {
public:
  // Declarations
  __declspec(property(get = get_LevelFilter)) ::System::Diagnostics::TraceLevel LevelFilter;

  /// @brief Method Trace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex);

  /// @brief Method get_LevelFilter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Diagnostics::TraceLevel get_LevelFilter();

  // Ctor Parameters [CppParam { name: "", ty: "ITraceWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITraceWriter(ITraceWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10308 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ITraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ITraceWriter*, "Newtonsoft.Json.Serialization", "ITraceWriter");
