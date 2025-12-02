#pragma once
// IWYU pragma private; include "System/Runtime/Fx.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(Fx)
namespace System::Runtime::Diagnostics {
class EtwDiagnosticTrace;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime {
class ExceptionTrace;
}
namespace System::Runtime {
class Fx_FatalInternalException;
}
namespace System::Runtime {
class Fx_InternalException;
}
namespace System::Runtime {
class Fx___c;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime {
class Fx;
}
namespace System::Runtime {
class Fx_FatalInternalException;
}
namespace System::Runtime {
class Fx_InternalException;
}
namespace System::Runtime {
class Fx___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Fx);
MARK_REF_PTR_T(::System::Runtime::Fx_FatalInternalException);
MARK_REF_PTR_T(::System::Runtime::Fx_InternalException);
MARK_REF_PTR_T(::System::Runtime::Fx___c);
// Dependencies System.SystemException
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.Fx/InternalException
class CORDL_TYPE Fx_InternalException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Runtime::Fx_InternalException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5f6ad24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Fx_InternalException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Fx_InternalException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Fx_InternalException(Fx_InternalException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Fx_InternalException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Fx_InternalException(Fx_InternalException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21081 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Fx_InternalException, 0x90>, "Size mismatch!");

} // namespace System::Runtime
// Dependencies System.Runtime.Fx::InternalException
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.Fx/FatalInternalException
class CORDL_TYPE Fx_FatalInternalException : public ::System::Runtime::Fx_InternalException {
public:
  // Declarations
  static inline ::System::Runtime::Fx_FatalInternalException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5f6ad2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Fx_FatalInternalException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Fx_FatalInternalException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Fx_FatalInternalException(Fx_FatalInternalException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Fx_FatalInternalException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Fx_FatalInternalException(Fx_FatalInternalException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21082 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Fx_FatalInternalException, 0x90>, "Size mismatch!");

} // namespace System::Runtime
// Dependencies System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.Fx/<>c
class CORDL_TYPE Fx___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Runtime::Fx___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Action* __9__8_0;

  static inline ::System::Runtime::Fx___c* New_ctor();

  /// @brief Method <InitializeTracing>b__8_0, addr 0x5f6ad8c, size 0x10, virtual false, abstract: false, final false
  inline void _InitializeTracing_b__8_0();

  /// @brief Method .ctor, addr 0x5f6ad88, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Fx___c* getStaticF___9();

  static inline ::System::Action* getStaticF___9__8_0();

  static inline void setStaticF___9(::System::Runtime::Fx___c* value);

  static inline void setStaticF___9__8_0(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Fx___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Fx___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Fx___c(Fx___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Fx___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Fx___c(Fx___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21083 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Fx___c, 0x10>, "Size mismatch!");

} // namespace System::Runtime
// Dependencies System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.Fx
class CORDL_TYPE Fx : public ::System::Object {
public:
  // Declarations
  using FatalInternalException = ::System::Runtime::Fx_FatalInternalException;

  using InternalException = ::System::Runtime::Fx_InternalException;

  using __c = ::System::Runtime::Fx___c;

  /// @brief Field diagnosticTrace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_diagnosticTrace, put = setStaticF_diagnosticTrace)) ::System::Runtime::Diagnostics::EtwDiagnosticTrace* diagnosticTrace;

  /// @brief Field exceptionTrace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_exceptionTrace, put = setStaticF_exceptionTrace)) ::System::Runtime::ExceptionTrace* exceptionTrace;

  /// @brief Method InitializeTracing, addr 0x5f6a1a4, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* InitializeTracing();

  /// @brief Method IsFatal, addr 0x5f6a7d0, size 0x470, virtual false, abstract: false, final false
  static inline bool IsFatal(::System::Exception* exception);

  /// @brief Method UpdateLevel, addr 0x5f6ad14, size 0x10, virtual false, abstract: false, final false
  static inline void UpdateLevel();

  /// @brief Method UpdateLevel, addr 0x5f6a73c, size 0x94, virtual false, abstract: false, final false
  static inline void UpdateLevel(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  static inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* getStaticF_diagnosticTrace();

  static inline ::System::Runtime::ExceptionTrace* getStaticF_exceptionTrace();

  /// @brief Method get_Exception, addr 0x5f6a08c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Runtime::ExceptionTrace* get_Exception();

  /// @brief Method get_Trace, addr 0x5f6a144, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* get_Trace();

  static inline void setStaticF_diagnosticTrace(::System::Runtime::Diagnostics::EtwDiagnosticTrace* value);

  static inline void setStaticF_exceptionTrace(::System::Runtime::ExceptionTrace* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Fx();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Fx", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Fx(Fx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Fx", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Fx(Fx const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21084 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Fx, 0x10>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::Fx);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Fx*, "System.Runtime", "Fx");
NEED_NO_BOX(::System::Runtime::Fx_FatalInternalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Fx_FatalInternalException*, "System.Runtime", "Fx/FatalInternalException");
NEED_NO_BOX(::System::Runtime::Fx_InternalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Fx_InternalException*, "System.Runtime", "Fx/InternalException");
NEED_NO_BOX(::System::Runtime::Fx___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Fx___c*, "System.Runtime", "Fx/<>c");
