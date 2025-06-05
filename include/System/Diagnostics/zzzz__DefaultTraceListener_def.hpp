#pragma once
// IWYU pragma private; include "System/Diagnostics/DefaultTraceListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__TraceListener_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultTraceListener)
// Forward declare root types
namespace System::Diagnostics {
class DefaultTraceListener;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DefaultTraceListener);
// Dependencies System.Diagnostics.TraceListener
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DefaultTraceListener
class CORDL_TYPE DefaultTraceListener : public ::System::Diagnostics::TraceListener {
public:
  // Declarations
  __declspec(property(get = get_LogFileName)) ::StringW LogFileName;

  /// @brief Field MonoTraceFile, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MonoTraceFile, put = setStaticF_MonoTraceFile)) ::StringW MonoTraceFile;

  /// @brief Field MonoTracePrefix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MonoTracePrefix, put = setStaticF_MonoTracePrefix)) ::StringW MonoTracePrefix;

  /// @brief Field OnWin32, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_OnWin32, put = setStaticF_OnWin32)) bool OnWin32;

  /// @brief Field logFileName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_logFileName, put = __cordl_internal_set_logFileName)) ::StringW logFileName;

  /// @brief Method GetPrefix, addr 0x4432694, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW GetPrefix(::StringW var, ::StringW target);

  static inline ::System::Diagnostics::DefaultTraceListener* New_ctor();

  /// @brief Method Write, addr 0x4432d3c, size 0x4, virtual true, abstract: false, final false
  inline void Write(::StringW message);

  /// @brief Method WriteDebugString, addr 0x443271c, size 0xb0, virtual false, abstract: false, final false
  inline void WriteDebugString(::StringW message);

  /// @brief Method WriteImpl, addr 0x4432c80, size 0xbc, virtual false, abstract: false, final false
  inline void WriteImpl(::StringW message);

  /// @brief Method WriteLine, addr 0x4432d40, size 0x48, virtual true, abstract: false, final false
  inline void WriteLine(::StringW message);

  /// @brief Method WriteLogFile, addr 0x4432980, size 0x278, virtual false, abstract: false, final false
  inline void WriteLogFile(::StringW message, ::StringW logFile);

  /// @brief Method WriteMonoTrace, addr 0x44327cc, size 0x1b4, virtual false, abstract: false, final false
  inline void WriteMonoTrace(::StringW message);

  /// @brief Method WritePrefix, addr 0x4432bf8, size 0x88, virtual false, abstract: false, final false
  inline void WritePrefix();

  /// @brief Method WriteWindowsDebugString, addr 0x4432718, size 0x4, virtual false, abstract: false, final false
  static inline void WriteWindowsDebugString(::cordl_internals::Ptr<char16_t> message);

  constexpr ::StringW const& __cordl_internal_get_logFileName() const;

  constexpr ::StringW& __cordl_internal_get_logFileName();

  constexpr void __cordl_internal_set_logFileName(::StringW value);

  /// @brief Method .ctor, addr 0x442c5ec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_MonoTraceFile();

  static inline ::StringW getStaticF_MonoTracePrefix();

  static inline bool getStaticF_OnWin32();

  /// @brief Method get_LogFileName, addr 0x4432710, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LogFileName();

  static inline void setStaticF_MonoTraceFile(::StringW value);

  static inline void setStaticF_MonoTracePrefix(::StringW value);

  static inline void setStaticF_OnWin32(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTraceListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTraceListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTraceListener(DefaultTraceListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTraceListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTraceListener(DefaultTraceListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9279 };

  /// @brief Field logFileName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___logFileName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::DefaultTraceListener, ___logFileName) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DefaultTraceListener, 0x40>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DefaultTraceListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DefaultTraceListener*, "System.Diagnostics", "DefaultTraceListener");
