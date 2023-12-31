#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceInternal)
namespace System::Diagnostics {
class TraceListenerCollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceInternal);
// Type: System.Diagnostics::TraceInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8941))
// CS Name: ::System.Diagnostics::TraceInternal*
class CORDL_TYPE TraceInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field appName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_appName, put = setStaticF_appName))::StringW appName;

  /// @brief Field listeners, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listeners, put = setStaticF_listeners))::System::Diagnostics::TraceListenerCollection* listeners;

  /// @brief Field autoFlush, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_autoFlush, put = setStaticF_autoFlush)) bool autoFlush;

  /// @brief Field indentLevel, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_indentLevel, put = setStaticF_indentLevel)) int32_t indentLevel;

  /// @brief Field indentSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_indentSize, put = setStaticF_indentSize)) int32_t indentSize;

  /// @brief Field critSec, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_critSec, put = setStaticF_critSec))::System::Object* critSec;

  static inline void setStaticF_appName(::StringW value);

  static inline ::StringW getStaticF_appName();

  static inline void setStaticF_listeners(::System::Diagnostics::TraceListenerCollection* value);

  static inline ::System::Diagnostics::TraceListenerCollection* getStaticF_listeners();

  static inline void setStaticF_autoFlush(bool value);

  static inline bool getStaticF_autoFlush();

  static inline void setStaticF_indentLevel(int32_t value);

  static inline int32_t getStaticF_indentLevel();

  static inline void setStaticF_indentSize(int32_t value);

  static inline int32_t getStaticF_indentSize();

  static inline void setStaticF_critSec(::System::Object* value);

  static inline ::System::Object* getStaticF_critSec();

  /// @brief Method get_Listeners, addr 0x296c654, size 0x254, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::TraceListenerCollection* get_Listeners();

  /// @brief Method get_AutoFlush, addr 0x296c8f4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_AutoFlush();

  /// @brief Method get_IndentLevel, addr 0x296d38c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_IndentLevel();

  /// @brief Method get_IndentSize, addr 0x296d3e4, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_IndentSize();

  /// @brief Method InitializeSettings, addr 0x296d0b4, size 0x4, virtual false, abstract: false, final false
  static inline void InitializeSettings();

  // Ctor Parameters [CppParam { name: "", ty: "TraceInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceInternal(TraceInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceInternal(TraceInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceInternal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceInternal, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceInternal*, "System.Diagnostics", "TraceInternal");
