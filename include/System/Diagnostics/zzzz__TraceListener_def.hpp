#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__TraceOptions_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceListener)
namespace System::Diagnostics {
class TraceEventCache;
}
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Diagnostics {
class TraceFilter;
}
namespace System::Diagnostics {
struct TraceOptions;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceListener;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceListener);
// Type: System.Diagnostics::TraceListener
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::TraceListener*
class CORDL_TYPE TraceListener : public ::System::MarshalByRefObject {
public:
  // Declarations
  __declspec(property(get = get_Filter))::System::Diagnostics::TraceFilter* Filter;

  __declspec(property(put = set_IndentLevel)) int32_t IndentLevel;

  __declspec(property(put = set_IndentSize)) int32_t IndentSize;

  __declspec(property(get = get_IsThreadSafe)) bool IsThreadSafe;

  __declspec(property(get = get_NeedIndent, put = set_NeedIndent)) bool NeedIndent;

  __declspec(property(get = get_TraceOutputOptions))::System::Diagnostics::TraceOptions TraceOutputOptions;

  /// @brief Field filter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_filter, put = __cordl_internal_set_filter))::System::Diagnostics::TraceFilter* filter;

  /// @brief Field indentLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_indentLevel, put = __cordl_internal_set_indentLevel)) int32_t indentLevel;

  /// @brief Field indentSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_indentSize, put = __cordl_internal_set_indentSize)) int32_t indentSize;

  /// @brief Field listenerName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_listenerName, put = __cordl_internal_set_listenerName))::StringW listenerName;

  /// @brief Field needIndent, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_needIndent, put = __cordl_internal_set_needIndent)) bool needIndent;

  /// @brief Field traceOptions, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_traceOptions, put = __cordl_internal_set_traceOptions))::System::Diagnostics::TraceOptions traceOptions;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2fa2668, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2fa26d4, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x2fa26d8, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method IsEnabled, addr 0x2fa2f48, size 0x10, virtual false, abstract: false, final false
  inline bool IsEnabled(::System::Diagnostics::TraceOptions opts);

  static inline ::System::Diagnostics::TraceListener* New_ctor(::StringW name);

  /// @brief Method TraceEvent, addr 0x2fa27d4, size 0xc4, virtual true, abstract: false, final false
  inline void TraceEvent(::System::Diagnostics::TraceEventCache* eventCache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id, ::StringW message);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Write(::StringW message);

  /// @brief Method WriteFooter, addr 0x2fa29a8, size 0x5a0, virtual false, abstract: false, final false
  inline void WriteFooter(::System::Diagnostics::TraceEventCache* eventCache);

  /// @brief Method WriteHeader, addr 0x2fa2898, size 0x110, virtual false, abstract: false, final false
  inline void WriteHeader(::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id);

  /// @brief Method WriteIndent, addr 0x2fa2700, size 0xd4, virtual true, abstract: false, final false
  inline void WriteIndent();

  /// @brief Method WriteLine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteLine(::StringW message);

  constexpr ::System::Diagnostics::TraceFilter*& __cordl_internal_get_filter();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::TraceFilter*> const& __cordl_internal_get_filter() const;

  constexpr int32_t const& __cordl_internal_get_indentLevel() const;

  constexpr int32_t& __cordl_internal_get_indentLevel();

  constexpr int32_t const& __cordl_internal_get_indentSize() const;

  constexpr int32_t& __cordl_internal_get_indentSize();

  constexpr ::StringW const& __cordl_internal_get_listenerName() const;

  constexpr ::StringW& __cordl_internal_get_listenerName();

  constexpr bool const& __cordl_internal_get_needIndent() const;

  constexpr bool& __cordl_internal_get_needIndent();

  constexpr ::System::Diagnostics::TraceOptions const& __cordl_internal_get_traceOptions() const;

  constexpr ::System::Diagnostics::TraceOptions& __cordl_internal_get_traceOptions();

  constexpr void __cordl_internal_set_filter(::System::Diagnostics::TraceFilter* value);

  constexpr void __cordl_internal_set_indentLevel(int32_t value);

  constexpr void __cordl_internal_set_indentSize(int32_t value);

  constexpr void __cordl_internal_set_listenerName(::StringW value);

  constexpr void __cordl_internal_set_needIndent(bool value);

  constexpr void __cordl_internal_set_traceOptions(::System::Diagnostics::TraceOptions value);

  /// @brief Method .ctor, addr 0x2fa2628, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Filter, addr 0x2fa26dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Diagnostics::TraceFilter* get_Filter();

  /// @brief Method get_IsThreadSafe, addr 0x2fa2660, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsThreadSafe();

  /// @brief Method get_NeedIndent, addr 0x2fa26e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_NeedIndent();

  /// @brief Method get_TraceOutputOptions, addr 0x2fa26f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Diagnostics::TraceOptions get_TraceOutputOptions();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_IndentLevel, addr 0x2fa22e8, size 0x1c, virtual false, abstract: false, final false
  inline void set_IndentLevel(int32_t value);

  /// @brief Method set_IndentSize, addr 0x2fa2304, size 0xac, virtual false, abstract: false, final false
  inline void set_IndentSize(int32_t value);

  /// @brief Method set_NeedIndent, addr 0x2fa26ec, size 0xc, virtual false, abstract: false, final false
  inline void set_NeedIndent(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceListener(TraceListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceListener(TraceListener const&) = delete;

  /// @brief Field indentLevel, offset: 0x18, size: 0x4, def value: None
  int32_t ___indentLevel;

  /// @brief Field indentSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___indentSize;

  /// @brief Field traceOptions, offset: 0x20, size: 0x4, def value: None
  ::System::Diagnostics::TraceOptions ___traceOptions;

  /// @brief Field needIndent, offset: 0x24, size: 0x1, def value: None
  bool ___needIndent;

  /// @brief Field listenerName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___listenerName;

  /// @brief Field filter, offset: 0x30, size: 0x8, def value: None
  ::System::Diagnostics::TraceFilter* ___filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceListener, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___indentLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___indentSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___traceOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___needIndent) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___listenerName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___filter) == 0x30, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceListener*, "System.Diagnostics", "TraceListener");
