#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StackTrace)
namespace System::Diagnostics {
struct __StackTrace__TraceFormat;
}
namespace System {
class Exception;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Reflection {
class MethodBase;
}
namespace System {
class Type;
}
namespace System::Diagnostics {
class StackFrame;
}
// Forward declare root types
namespace System::Diagnostics {
struct __StackTrace__TraceFormat;
}
namespace System::Diagnostics {
class StackTrace;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::__StackTrace__TraceFormat);
MARK_REF_PTR_T(::System::Diagnostics::StackTrace);
// Type: ::TraceFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3728))
// CS Name: ::StackTrace::TraceFormat
struct CORDL_TYPE __StackTrace__TraceFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____StackTrace__TraceFormat_Unwrapped
  enum struct ____StackTrace__TraceFormat_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_TrailingNewLine = static_cast<int32_t>(0x1),
    __E_NoResourceLookup = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____StackTrace__TraceFormat_Unwrapped() const noexcept {
    return static_cast<____StackTrace__TraceFormat_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StackTrace__TraceFormat(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StackTrace__TraceFormat();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::System::Diagnostics::__StackTrace__TraceFormat const Normal;

  /// @brief Field TrailingNewLine value: static_cast<int32_t>(0x1)
  static ::System::Diagnostics::__StackTrace__TraceFormat const TrailingNewLine;

  /// @brief Field NoResourceLookup value: static_cast<int32_t>(0x2)
  static ::System::Diagnostics::__StackTrace__TraceFormat const NoResourceLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::__StackTrace__TraceFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::__StackTrace__TraceFormat, value__) == 0x0, "Offset mismatch!");

} // namespace System::Diagnostics
// Type: System.Diagnostics::StackTrace
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3729))
// CS Name: ::System.Diagnostics::StackTrace*
class CORDL_TYPE StackTrace : public ::System::Object {
public:
  // Declarations
  using TraceFormat = ::System::Diagnostics::__StackTrace__TraceFormat;

  /// @brief Field frames, offset 0x10, size 0x8
  __declspec(property(get = __get_frames, put = __set_frames))::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> frames;

  /// @brief Field captured_traces, offset 0x18, size 0x8
  __declspec(property(get = __get_captured_traces, put = __set_captured_traces))::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> captured_traces;

  /// @brief Field debug_info, offset 0x20, size 0x1
  __declspec(property(get = __get_debug_info, put = __set_debug_info)) bool debug_info;

  /// @brief Field isAotidSet, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isAotidSet, put = setStaticF_isAotidSet)) bool isAotidSet;

  /// @brief Field aotid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_aotid, put = setStaticF_aotid))::StringW aotid;

  __declspec(property(get = get_FrameCount)) int32_t FrameCount;

  constexpr ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*>& __get_frames();

  constexpr ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> const& __get_frames() const;

  constexpr void __set_frames(::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> value);

  constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>& __get_captured_traces();

  constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> const& __get_captured_traces() const;

  constexpr void __set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> value);

  constexpr bool& __get_debug_info();

  constexpr bool const& __get_debug_info() const;

  constexpr void __set_debug_info(bool value);

  static inline void setStaticF_isAotidSet(bool value);

  static inline bool getStaticF_isAotidSet();

  static inline void setStaticF_aotid(::StringW value);

  static inline ::StringW getStaticF_aotid();

  static inline ::System::Diagnostics::StackTrace* New_ctor();

  /// @brief Method .ctor addr 0x241ee84 size 0x24 virtual false final false
  inline void _ctor();

  static inline ::System::Diagnostics::StackTrace* New_ctor(bool fNeedFileInfo);

  /// @brief Method .ctor addr 0x241f0a4 size 0x30 virtual false final false
  inline void _ctor(bool fNeedFileInfo);

  static inline ::System::Diagnostics::StackTrace* New_ctor(int32_t skipFrames);

  /// @brief Method .ctor addr 0x241f0d4 size 0x30 virtual false final false
  inline void _ctor(int32_t skipFrames);

  static inline ::System::Diagnostics::StackTrace* New_ctor(int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method .ctor addr 0x241f104 size 0x34 virtual false final false
  inline void _ctor(int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method init_frames addr 0x241eea8 size 0x1fc virtual false final false
  inline void init_frames(int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method get_trace addr 0x241f138 size 0x8 virtual false final false
  static inline ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> get_trace(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo);

  static inline ::System::Diagnostics::StackTrace* New_ctor(::System::Exception* e, bool fNeedFileInfo);

  /// @brief Method .ctor addr 0x241f140 size 0xc virtual false final false
  inline void _ctor(::System::Exception* e, bool fNeedFileInfo);

  static inline ::System::Diagnostics::StackTrace* New_ctor(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method .ctor addr 0x241f14c size 0xf0 virtual false final false
  inline void _ctor(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method get_FrameCount addr 0x241f23c size 0x18 virtual true final false
  inline int32_t get_FrameCount();

  /// @brief Method GetFrame addr 0x241f254 size 0x60 virtual true final false
  inline ::System::Diagnostics::StackFrame* GetFrame(int32_t index);

  /// @brief Method GetAotId addr 0x241f2b4 size 0xc8 virtual false final false
  static inline ::StringW GetAotId();

  /// @brief Method AddFrames addr 0x241f37c size 0x4b0 virtual false final false
  inline bool AddFrames(::System::Text::StringBuilder* sb, bool separator, ByRef<bool> isAsync);

  /// @brief Method GetFullNameForStackTrace addr 0x241f82c size 0x658 virtual false final false
  inline void GetFullNameForStackTrace(::System::Text::StringBuilder* sb, ::System::Reflection::MethodBase* mi, bool needsNewLine, ByRef<bool> skipped, ByRef<bool> isAsync);

  /// @brief Method ConvertAsyncStateMachineMethod addr 0x241fe84 size 0x460 virtual false final false
  static inline void ConvertAsyncStateMachineMethod(ByRef<::System::Reflection::MethodBase*> method, ByRef<::System::Type*> declaringType);

  /// @brief Method ToString addr 0x24202e4 size 0x15c virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x2420440 size 0xc virtual false final false
  inline ::StringW ToString(::System::Diagnostics::__StackTrace__TraceFormat traceFormat);

  // Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackTrace(StackTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackTrace(StackTrace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackTrace();

public:
  /// @brief Field frames, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> ___frames;

  /// @brief Field captured_traces, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> ___captured_traces;

  /// @brief Field debug_info, offset: 0x20, size: 0x1, def value: None
  bool ___debug_info;

  /// @brief Field METHODS_TO_SKIP offset 0xffffffff size 0x4
  static constexpr int32_t METHODS_TO_SKIP{ static_cast<int32_t>(0x0) };

  /// @brief Field prefix offset 0xffffffff size 0x8
  static constexpr ::ConstString prefix{ u"  at " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::StackTrace, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::StackTrace, ___frames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackTrace, ___captured_traces) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackTrace, ___debug_info) == 0x20, "Offset mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::__StackTrace__TraceFormat, "System.Diagnostics", "StackTrace/TraceFormat");
NEED_NO_BOX(::System::Diagnostics::StackTrace);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackTrace*, "System.Diagnostics", "StackTrace");
