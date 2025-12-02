#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DiagnosticUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DiagnosticUtility)
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Runtime::Serialization {
class DiagnosticUtility_DiagnosticTrace;
}
namespace System::Runtime::Serialization {
class DiagnosticUtility_ExceptionUtility;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DiagnosticUtility;
}
namespace System::Runtime::Serialization {
class DiagnosticUtility_DiagnosticTrace;
}
namespace System::Runtime::Serialization {
class DiagnosticUtility_ExceptionUtility;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DiagnosticUtility);
MARK_REF_PTR_T(::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace);
MARK_REF_PTR_T(::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DiagnosticUtility/DiagnosticTrace
class CORDL_TYPE DiagnosticUtility_DiagnosticTrace : public ::System::Object {
public:
  // Declarations
  /// @brief Method TraceEvent, addr 0x5f5fbb4, size 0x4, virtual false, abstract: false, final false
  static inline void TraceEvent(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticUtility_DiagnosticTrace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticUtility_DiagnosticTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticUtility_DiagnosticTrace(DiagnosticUtility_DiagnosticTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticUtility_DiagnosticTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticUtility_DiagnosticTrace(DiagnosticUtility_DiagnosticTrace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17105 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DiagnosticUtility/ExceptionUtility
class CORDL_TYPE DiagnosticUtility_ExceptionUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method ThrowHelper, addr 0x5f5fbb8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Exception* ThrowHelper(::System::Exception* e, ::System::Diagnostics::TraceEventType type);

  /// @brief Method ThrowHelperArgumentNull, addr 0x5f5bfe4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* ThrowHelperArgumentNull(::StringW arg);

  /// @brief Method ThrowHelperCallback, addr 0x5f5fbbc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* ThrowHelperCallback(::System::Exception* e);

  /// @brief Method ThrowHelperError, addr 0x5f56988, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Exception* ThrowHelperError(::System::Exception* e);

  /// @brief Method ThrowHelperFatal, addr 0x5f5fc38, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* ThrowHelperFatal(::StringW msg, ::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticUtility_ExceptionUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticUtility_ExceptionUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticUtility_ExceptionUtility(DiagnosticUtility_ExceptionUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticUtility_ExceptionUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticUtility_ExceptionUtility(DiagnosticUtility_ExceptionUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17106 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DiagnosticUtility
class CORDL_TYPE DiagnosticUtility : public ::System::Object {
public:
  // Declarations
  using DiagnosticTrace = ::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace;

  using ExceptionUtility = ::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility;

  /// @brief Field ShouldTraceError, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_ShouldTraceError, put = setStaticF_ShouldTraceError)) bool ShouldTraceError;

  /// @brief Field ShouldTraceInformation, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_ShouldTraceInformation, put = setStaticF_ShouldTraceInformation)) bool ShouldTraceInformation;

  /// @brief Field ShouldTraceVerbose, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_ShouldTraceVerbose, put = setStaticF_ShouldTraceVerbose)) bool ShouldTraceVerbose;

  /// @brief Field ShouldTraceWarning, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_ShouldTraceWarning, put = setStaticF_ShouldTraceWarning)) bool ShouldTraceWarning;

  static inline bool getStaticF_ShouldTraceError();

  static inline bool getStaticF_ShouldTraceInformation();

  static inline bool getStaticF_ShouldTraceVerbose();

  static inline bool getStaticF_ShouldTraceWarning();

  static inline void setStaticF_ShouldTraceError(bool value);

  static inline void setStaticF_ShouldTraceInformation(bool value);

  static inline void setStaticF_ShouldTraceVerbose(bool value);

  static inline void setStaticF_ShouldTraceWarning(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticUtility(DiagnosticUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticUtility(DiagnosticUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17107 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DiagnosticUtility, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DiagnosticUtility);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DiagnosticUtility*, "System.Runtime.Serialization", "DiagnosticUtility");
NEED_NO_BOX(::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace*, "System.Runtime.Serialization", "DiagnosticUtility/DiagnosticTrace");
NEED_NO_BOX(::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*, "System.Runtime.Serialization", "DiagnosticUtility/ExceptionUtility");
