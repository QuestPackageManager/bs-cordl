#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Diagnostics/TraceUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Runtime::Diagnostics {
class TraceRecord;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::Serialization::Diagnostics {
class TraceUtility;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Diagnostics::TraceUtility);
// Dependencies System.Object
namespace System::Runtime::Serialization::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Serialization.Diagnostics.TraceUtility
class CORDL_TYPE TraceUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field traceCodes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_traceCodes, put = setStaticF_traceCodes)) ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* traceCodes;

  /// @brief Method Trace, addr 0x5fcf038, size 0x74, virtual false, abstract: false, final false
  static inline void Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription);

  /// @brief Method Trace, addr 0x5fcf0ac, size 0x84, virtual false, abstract: false, final false
  static inline void Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription, ::System::Runtime::Diagnostics::TraceRecord* record);

  /// @brief Method Trace, addr 0x5fcf130, size 0x1e0, virtual false, abstract: false, final false
  static inline void Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription, ::System::Runtime::Diagnostics::TraceRecord* record,
                           ::System::Exception* exception);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* getStaticF_traceCodes();

  static inline void setStaticF_traceCodes(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceUtility(TraceUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceUtility(TraceUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17132 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Diagnostics::TraceUtility, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Diagnostics
NEED_NO_BOX(::System::Runtime::Serialization::Diagnostics::TraceUtility);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Diagnostics::TraceUtility*, "System.Runtime.Serialization.Diagnostics", "TraceUtility");
