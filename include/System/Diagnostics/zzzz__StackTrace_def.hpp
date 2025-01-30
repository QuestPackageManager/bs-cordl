#pragma once
// IWYU pragma private; include "System/Diagnostics/StackTrace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StackTrace)
namespace System::Diagnostics {
class StackFrame;
}
namespace System::Diagnostics {
struct StackTrace_TraceFormat;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Exception;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Diagnostics {
struct StackTrace_TraceFormat;
}
namespace System::Diagnostics {
class StackTrace;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::StackTrace_TraceFormat);
MARK_REF_PTR_T(::System::Diagnostics::StackTrace);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.StackTrace/TraceFormat
struct CORDL_TYPE StackTrace_TraceFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StackTrace_TraceFormat_Unwrapped
  enum struct __StackTrace_TraceFormat_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_TrailingNewLine = static_cast<int32_t>(0x1),
    __E_NoResourceLookup = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StackTrace_TraceFormat_Unwrapped() const noexcept {
    return static_cast<__StackTrace_TraceFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StackTrace_TraceFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StackTrace_TraceFormat(int32_t value__) noexcept;

  /// @brief Field NoResourceLookup value: I32(2)
  static ::System::Diagnostics::StackTrace_TraceFormat const NoResourceLookup;

  /// @brief Field Normal value: I32(0)
  static ::System::Diagnostics::StackTrace_TraceFormat const Normal;

  /// @brief Field TrailingNewLine value: I32(1)
  static ::System::Diagnostics::StackTrace_TraceFormat const TrailingNewLine;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::StackTrace_TraceFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::StackTrace_TraceFormat, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.StackTrace
class CORDL_TYPE StackTrace : public ::System::Object {
public:
  // Declarations
  using TraceFormat = ::System::Diagnostics::StackTrace_TraceFormat;

  __declspec(property(get = get_FrameCount)) int32_t FrameCount;

  /// @brief Field aotid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_aotid, put = setStaticF_aotid)) ::StringW aotid;

  /// @brief Field captured_traces, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_captured_traces,
                      put = __cordl_internal_set_captured_traces)) ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>
      captured_traces;

  /// @brief Field debug_info, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_debug_info, put = __cordl_internal_set_debug_info)) bool debug_info;

  /// @brief Field frames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_frames, put = __cordl_internal_set_frames)) ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> frames;

  /// @brief Field isAotidSet, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isAotidSet, put = setStaticF_isAotidSet)) bool isAotidSet;

  /// @brief Method AddFrames, addr 0x3db8d78, size 0x4b0, virtual false, abstract: false, final false
  inline bool AddFrames(::System::Text::StringBuilder* sb, bool separator, ::ByRef<bool> isAsync);

  /// @brief Method ConvertAsyncStateMachineMethod, addr 0x3db9854, size 0x45c, virtual false, abstract: false, final false
  static inline void ConvertAsyncStateMachineMethod(::ByRef<::System::Reflection::MethodBase*> method, ::ByRef<::System::Type*> declaringType);

  /// @brief Method GetAotId, addr 0x3db8cb0, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetAotId();

  /// @brief Method GetFrame, addr 0x3db8c50, size 0x60, virtual true, abstract: false, final false
  inline ::System::Diagnostics::StackFrame* GetFrame(int32_t index);

  /// @brief Method GetFullNameForStackTrace, addr 0x3db9228, size 0x62c, virtual false, abstract: false, final false
  inline void GetFullNameForStackTrace(::System::Text::StringBuilder* sb, ::System::Reflection::MethodBase* mi, bool needsNewLine, ::ByRef<bool> skipped, ::ByRef<bool> isAsync);

  static inline ::System::Diagnostics::StackTrace* New_ctor();

  static inline ::System::Diagnostics::StackTrace* New_ctor(::System::Exception* e, bool fNeedFileInfo);

  static inline ::System::Diagnostics::StackTrace* New_ctor(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo);

  static inline ::System::Diagnostics::StackTrace* New_ctor(bool fNeedFileInfo);

  static inline ::System::Diagnostics::StackTrace* New_ctor(int32_t skipFrames);

  static inline ::System::Diagnostics::StackTrace* New_ctor(int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method ToString, addr 0x3db9cb0, size 0x160, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3db9e10, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToString(::System::Diagnostics::StackTrace_TraceFormat traceFormat);

  constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> const& __cordl_internal_get_captured_traces() const;

  constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>& __cordl_internal_get_captured_traces();

  constexpr bool const& __cordl_internal_get_debug_info() const;

  constexpr bool& __cordl_internal_get_debug_info();

  constexpr ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> const& __cordl_internal_get_frames() const;

  constexpr ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*>& __cordl_internal_get_frames();

  constexpr void __cordl_internal_set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> value);

  constexpr void __cordl_internal_set_debug_info(bool value);

  constexpr void __cordl_internal_set_frames(::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> value);

  /// @brief Method .ctor, addr 0x3db887c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3db8b44, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* e, bool fNeedFileInfo);

  /// @brief Method .ctor, addr 0x3db8b50, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method .ctor, addr 0x3db8aa8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool fNeedFileInfo);

  /// @brief Method .ctor, addr 0x3db8ad8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t skipFrames);

  /// @brief Method .ctor, addr 0x3db8b08, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t skipFrames, bool fNeedFileInfo);

  static inline ::StringW getStaticF_aotid();

  static inline bool getStaticF_isAotidSet();

  /// @brief Method get_FrameCount, addr 0x3db8c38, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_FrameCount();

  /// @brief Method get_trace, addr 0x3db8b3c, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> get_trace(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method init_frames, addr 0x3db88a0, size 0x208, virtual false, abstract: false, final false
  inline void init_frames(int32_t skipFrames, bool fNeedFileInfo);

  static inline void setStaticF_aotid(::StringW value);

  static inline void setStaticF_isAotidSet(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackTrace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackTrace(StackTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackTrace(StackTrace const&) = delete;

  /// @brief Field METHODS_TO_SKIP offset 0xffffffff size 0x4
  static constexpr int32_t METHODS_TO_SKIP{ static_cast<int32_t>(0x0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3747 };

  /// @brief Field prefix offset 0xffffffff size 0x8
  static constexpr ::ConstString prefix{ u"  at " };

  /// @brief Field frames, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> ___frames;

  /// @brief Field captured_traces, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> ___captured_traces;

  /// @brief Field debug_info, offset: 0x20, size: 0x1, def value: None
  bool ___debug_info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::StackTrace, ___frames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackTrace, ___captured_traces) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackTrace, ___debug_info) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::StackTrace, 0x28>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackTrace_TraceFormat, "System.Diagnostics", "StackTrace/TraceFormat");
NEED_NO_BOX(::System::Diagnostics::StackTrace);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackTrace*, "System.Diagnostics", "StackTrace");
